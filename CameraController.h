#ifndef CAMERA_CONTROLLER_H
#define CAMERA_CONTROLLER_H

#include "MvCameraControl.h"
#include <string>
#include <vector>
#include <mutex>

class CameraController
{
public:
    CameraController();
    ~CameraController();

    /* -------- SDK 生命周期 -------- */
    static int InitSDK();
    static int FinalizeSDK();

    /* -------- 枚举 & 打开 -------- */
    int EnumDevices(std::vector<MV_CC_DEVICE_INFO>& devices);
    int Open(const MV_CC_DEVICE_INFO& deviceInfo);
    int Close();

    /* -------- 取流控制 -------- */
    int StartGrabbing();
    int StopGrabbing();
    bool IsGrabbing() const;

    /* -------- 图像获取 -------- */
    int GetImage(MV_FRAME_OUT& frame, int timeoutMs);
    int FreeImage(MV_FRAME_OUT& frame);

    /* -------- 参数控制 -------- */
    int SetTriggerMode(bool on);
    int SetTriggerSource(int source);
    int SoftwareTrigger();
    /* -------- ROI 控制 -------- */
    int SetROI(int offsetX, int offsetY, int width, int height);
    int GetROI(int& offsetX, int& offsetY, int& width, int& height);


    int SetExposure(double value);
    int GetExposure(double& value);

    int SetGain(double value);
    int GetGain(double& value);

    int SetFrameRate(double value);
    int GetFrameRate(double& value);

    /* -------- 保存图像 -------- */
    int SaveImage(const MV_FRAME_OUT& frame,
                  const std::string& filePath,
                  int imageType);   // MV_Image_Bmp / Jpeg / Png / Tif

private:
    void* m_handle;
    bool  m_isOpen;
    bool  m_isGrabbing;
    std::mutex m_mutex;
};

#endif // CAMERA_CONTROLLER_H
