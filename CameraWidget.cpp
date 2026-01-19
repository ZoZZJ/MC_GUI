#include "CameraWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>

CameraWidget::CameraWidget(QWidget *parent)
    : QWidget(parent)
{
    m_imageLabel = new QLabel(this);
    m_imageLabel->setFixedSize(640, 480);
    m_imageLabel->setStyleSheet("background:black;");
    m_imageLabel->setAlignment(Qt::AlignCenter);

    m_btnOpen  = new QPushButton("打开相机", this);
    m_btnClose = new QPushButton("关闭相机", this);
    m_btnStart = new QPushButton("开始采集", this);
    m_btnStop  = new QPushButton("停止采集", this);
    m_sliderOffsetX = new QSlider(Qt::Horizontal, this);
    m_sliderOffsetY = new QSlider(Qt::Horizontal, this);
    m_sliderWidth   = new QSlider(Qt::Horizontal, this);
    m_sliderHeight  = new QSlider(Qt::Horizontal, this);

    m_sliderOffsetX->setRange(0, 1920); // 根据你的相机分辨率改
    m_sliderOffsetY->setRange(0, 1080);
    m_sliderWidth->setRange(64, 1920);
    m_sliderHeight->setRange(64, 1080);

    QHBoxLayout* btnLayout = new QHBoxLayout;
    btnLayout->addWidget(m_btnOpen);
    btnLayout->addWidget(m_btnClose);
    btnLayout->addWidget(m_btnStart);
    btnLayout->addWidget(m_btnStop);

    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(m_imageLabel);
    mainLayout->addLayout(btnLayout);
    setLayout(mainLayout);
    QVBoxLayout* roiLayout = new QVBoxLayout;
    roiLayout->addWidget(new QLabel("OffsetX"));
    roiLayout->addWidget(m_sliderOffsetX);
    roiLayout->addWidget(new QLabel("OffsetY"));
    roiLayout->addWidget(m_sliderOffsetY);
    roiLayout->addWidget(new QLabel("Width"));
    roiLayout->addWidget(m_sliderWidth);
    roiLayout->addWidget(new QLabel("Height"));
    roiLayout->addWidget(m_sliderHeight);

    mainLayout->addLayout(roiLayout);

    m_timer = new QTimer(this);
    m_timer->setInterval(30); // ~33 FPS

    connect(m_btnOpen,  &QPushButton::clicked, this, &CameraWidget::onOpenCamera);
    connect(m_btnClose, &QPushButton::clicked, this, &CameraWidget::onCloseCamera);
    connect(m_btnStart, &QPushButton::clicked, this, &CameraWidget::onStartGrab);
    connect(m_btnStop,  &QPushButton::clicked, this, &CameraWidget::onStopGrab);
    connect(m_timer,    &QTimer::timeout,     this, &CameraWidget::onUpdateFrame);

    connect(m_sliderOffsetX, &QSlider::valueChanged, this, &CameraWidget::onOffsetXChanged);
    connect(m_sliderOffsetY, &QSlider::valueChanged, this, &CameraWidget::onOffsetYChanged);
    connect(m_sliderWidth,   &QSlider::valueChanged, this, &CameraWidget::onWidthChanged);
    connect(m_sliderHeight,  &QSlider::valueChanged, this, &CameraWidget::onHeightChanged);
}

CameraWidget::~CameraWidget()
{
    m_timer->stop();
    m_camera.Close();
    CameraController::FinalizeSDK();
}

/* ---------------- 槽函数 ---------------- */

void CameraWidget::onOpenCamera()
{
    CameraController::InitSDK();

    std::vector<MV_CC_DEVICE_INFO> devices;
    if (m_camera.EnumDevices(devices) != MV_OK || devices.empty())
    {
        QMessageBox::warning(this, "错误", "未发现相机");
        return;
    }

    if (m_camera.Open(devices[0]) != MV_OK)
    {
        QMessageBox::warning(this, "错误", "打开相机失败");
        return;
    }
}

void CameraWidget::onCloseCamera()
{
    m_timer->stop();
    m_camera.StopGrabbing();
    m_camera.Close();
}

void CameraWidget::onStartGrab()
{
    if (m_camera.StartGrabbing() == MV_OK)
    {
        m_timer->start();
    }
}

void CameraWidget::onStopGrab()
{
    m_timer->stop();
    m_camera.StopGrabbing();
}

void CameraWidget::onUpdateFrame()
{
    MV_FRAME_OUT frame;
    if (m_camera.GetImage(frame, 100) != MV_OK)
        return;

    QImage image;
    if (convertFrameToQImage(frame, image))
    {
        m_imageLabel->setPixmap(
            QPixmap::fromImage(image)
            .scaled(m_imageLabel->size(), Qt::KeepAspectRatio));
    }

    m_camera.FreeImage(frame);
}
void CameraWidget::onOffsetXChanged(int value)
{
    int x, y, w, h;
    m_camera.GetROI(x, y, w, h);
    m_camera.SetROI(value, y, w, h);
}

void CameraWidget::onOffsetYChanged(int value)
{
    int x, y, w, h;
    m_camera.GetROI(x, y, w, h);
    m_camera.SetROI(x, value, w, h);
}

void CameraWidget::onWidthChanged(int value)
{
    int x, y, w, h;
    m_camera.GetROI(x, y, w, h);
    m_camera.SetROI(x, y, value, h);
}

void CameraWidget::onHeightChanged(int value)
{
    int x, y, w, h;
    m_camera.GetROI(x, y, w, h);
    m_camera.SetROI(x, y, w, value);
}


/* ---------------- 图像转换 ---------------- */

bool CameraWidget::convertFrameToQImage(const MV_FRAME_OUT& frame, QImage& image)
{
    const auto& info = frame.stFrameInfo;

    if (info.enPixelType == PixelType_Gvsp_Mono8)
    {
        image = QImage(frame.pBufAddr,
                       info.nWidth,
                       info.nHeight,
                       info.nWidth,
                       QImage::Format_Grayscale8).copy();
        return true;
    }

    if (info.enPixelType == PixelType_Gvsp_RGB8_Packed)
    {
        image = QImage(frame.pBufAddr,
                       info.nWidth,
                       info.nHeight,
                       info.nWidth * 3,
                       QImage::Format_RGB888).rgbSwapped().copy();
        return true;
    }

    return false;
}
