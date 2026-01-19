#ifndef CAMERA_WIDGET_H
#define CAMERA_WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QTimer>
#include <QImage>

#include "CameraController.h"
#include <QSlider>
#include <QLabel>

// ROI 滑条
class CameraWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CameraWidget(QWidget *parent = nullptr);
    ~CameraWidget();

private slots:
    void onOpenCamera();
    void onCloseCamera();
    void onStartGrab();
    void onStopGrab();
    void onUpdateFrame();
    // 槽函数
    void onOffsetXChanged(int value);
    void onOffsetYChanged(int value);
    void onWidthChanged(int value);
    void onHeightChanged(int value);


private:
    bool convertFrameToQImage(const MV_FRAME_OUT& frame, QImage& image);

private:
    CameraController m_camera;

    QLabel*      m_imageLabel;
    QPushButton* m_btnOpen;
    QPushButton* m_btnClose;
    QPushButton* m_btnStart;
    QPushButton* m_btnStop;

    QSlider* m_sliderOffsetX;
    QSlider* m_sliderOffsetY;
    QSlider* m_sliderWidth;
    QSlider* m_sliderHeight;


    QTimer*      m_timer;
};

#endif // CAMERA_WIDGET_H
