#include "CameraController.h"
#include <cstring>

CameraController::CameraController()
    : m_handle(nullptr),
      m_isOpen(false),
      m_isGrabbing(false)
{
}

CameraController::~CameraController()
{
    StopGrabbing();
    Close();
}

/* -------- SDK 生命周期 -------- */

int CameraController::InitSDK()
{
    return MV_CC_Initialize();
}

int CameraController::FinalizeSDK()
{
    return MV_CC_Finalize();
}

/* -------- 枚举 & 打开 -------- */

int CameraController::EnumDevices(std::vector<MV_CC_DEVICE_INFO>& devices)
{
    MV_CC_DEVICE_INFO_LIST list = {};
    int ret = MV_CC_EnumDevices(MV_GIGE_DEVICE | MV_USB_DEVICE, &list);
    if (ret != MV_OK)
        return ret;

    devices.clear();
    for (unsigned int i = 0; i < list.nDeviceNum; ++i)
    {
        devices.push_back(*list.pDeviceInfo[i]);
    }
    return MV_OK;
}

int CameraController::Open(const MV_CC_DEVICE_INFO& deviceInfo)
{
    std::lock_guard<std::mutex> lock(m_mutex);

    if (m_isOpen)
        return MV_OK;

    int ret = MV_CC_CreateHandle(&m_handle, &deviceInfo);
    if (ret != MV_OK)
        return ret;

    ret = MV_CC_OpenDevice(m_handle);
    if (ret != MV_OK)
    {
        MV_CC_DestroyHandle(m_handle);
        m_handle = nullptr;
        return ret;
    }

    m_isOpen = true;
    return MV_OK;
}

int CameraController::Close()
{
    std::lock_guard<std::mutex> lock(m_mutex);

    if (!m_isOpen)
        return MV_OK;

    MV_CC_CloseDevice(m_handle);
    MV_CC_DestroyHandle(m_handle);

    m_handle = nullptr;
    m_isOpen = false;
    m_isGrabbing = false;
    return MV_OK;
}

/* -------- 取流控制 -------- */

int CameraController::StartGrabbing()
{
    if (!m_isOpen)
        return MV_E_HANDLE;

    int ret = MV_CC_StartGrabbing(m_handle);
    if (ret == MV_OK)
        m_isGrabbing = true;

    return ret;
}

int CameraController::StopGrabbing()
{
    if (!m_isGrabbing)
        return MV_OK;

    int ret = MV_CC_StopGrabbing(m_handle);
    m_isGrabbing = false;
    return ret;
}

bool CameraController::IsGrabbing() const
{
    return m_isGrabbing;
}

/* -------- 图像获取 -------- */

int CameraController::GetImage(MV_FRAME_OUT& frame, int timeoutMs)
{
    if (!m_isGrabbing)
        return MV_E_HANDLE;

    memset(&frame, 0, sizeof(MV_FRAME_OUT));
    return MV_CC_GetImageBuffer(m_handle, &frame, timeoutMs);
}

int CameraController::FreeImage(MV_FRAME_OUT& frame)
{
    return MV_CC_FreeImageBuffer(m_handle, &frame);
}

/* -------- 参数控制 -------- */

int CameraController::SetTriggerMode(bool on)
{
    return MV_CC_SetEnumValue(m_handle, "TriggerMode",
        on ? MV_TRIGGER_MODE_ON : MV_TRIGGER_MODE_OFF);
}

int CameraController::SetTriggerSource(int source)
{
    return MV_CC_SetEnumValue(m_handle, "TriggerSource", source);
}

int CameraController::SoftwareTrigger()
{
    return MV_CC_SetCommandValue(m_handle, "TriggerSoftware");
}

int CameraController::SetExposure(double value)
{
    return MV_CC_SetFloatValue(m_handle, "ExposureTime", (float)value);
}

int CameraController::GetExposure(double& value)
{
    MVCC_FLOATVALUE val = {};
    int ret = MV_CC_GetFloatValue(m_handle, "ExposureTime", &val);
    value = val.fCurValue;
    return ret;
}

int CameraController::SetGain(double value)
{
    return MV_CC_SetFloatValue(m_handle, "Gain", (float)value);
}

int CameraController::GetGain(double& value)
{
    MVCC_FLOATVALUE val = {};
    int ret = MV_CC_GetFloatValue(m_handle, "Gain", &val);
    value = val.fCurValue;
    return ret;
}

int CameraController::SetFrameRate(double value)
{
    return MV_CC_SetFloatValue(m_handle, "AcquisitionFrameRate", (float)value);
}

int CameraController::GetFrameRate(double& value)
{
    MVCC_FLOATVALUE val = {};
    int ret = MV_CC_GetFloatValue(m_handle, "AcquisitionFrameRate", &val);
    value = val.fCurValue;
    return ret;
}
int CameraController::SetROI(int offsetX, int offsetY, int width, int height)
{
    if (!m_isOpen)
        return MV_E_HANDLE;

    int ret = MV_CC_SetIntValueEx(m_handle, "OffsetX", offsetX);
    if (ret != MV_OK) return ret;
    ret = MV_CC_SetIntValueEx(m_handle, "OffsetY", offsetY);
    if (ret != MV_OK) return ret;
    ret = MV_CC_SetIntValueEx(m_handle, "Width", width);
    if (ret != MV_OK) return ret;
    ret = MV_CC_SetIntValueEx(m_handle, "Height", height);
    return ret;
}

int CameraController::GetROI(int& offsetX, int& offsetY, int& width, int& height)
{
    if (!m_isOpen)
        return MV_E_HANDLE;

    MVCC_INTVALUE_EX val = {};
    int ret = MV_CC_GetIntValueEx(m_handle, "OffsetX", &val);
    if (ret != MV_OK) return ret;
    offsetX = (int)val.nCurValue;

    ret = MV_CC_GetIntValueEx(m_handle, "OffsetY", &val);
    if (ret != MV_OK) return ret;
    offsetY = (int)val.nCurValue;

    ret = MV_CC_GetIntValueEx(m_handle, "Width", &val);
    if (ret != MV_OK) return ret;
    width = (int)val.nCurValue;

    ret = MV_CC_GetIntValueEx(m_handle, "Height", &val);
    if (ret != MV_OK) return ret;
    height = (int)val.nCurValue;

    return MV_OK;
}


/* -------- 保存图像 -------- */

int CameraController::SaveImage(const MV_FRAME_OUT& frame,
                                const std::string& filePath,
                                int imageType)
{
    MV_SAVE_IMG_TO_FILE_PARAM param = {};
    param.enImageType = (MV_SAVE_IAMGE_TYPE)imageType;
    param.enPixelType = frame.stFrameInfo.enPixelType;
    param.nWidth      = frame.stFrameInfo.nWidth;
    param.nHeight     = frame.stFrameInfo.nHeight;
    param.nDataLen    = frame.stFrameInfo.nFrameLen;
    param.pData       = frame.pBufAddr;
    strncpy(param.pImagePath, filePath.c_str(), sizeof(param.pImagePath) - 1);

    return MV_CC_SaveImageToFile(m_handle, &param);
}
