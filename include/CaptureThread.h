#pragma once
#include<pylon/PylonIncludes.h>

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/opencv.hpp>
#include <pylon/PylonIncludes.h>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/opencv.hpp>
#include <pylon/PylonIncludes.h>
#include <pylon/usb/PylonUsbIncludes.h>
#include <pylon/usb/BaslerUsbInstantCamera.h>
#include <pylon/usb/_BaslerUsbCameraParams.h>

using namespace std;
using namespace cv;
using namespace Pylon;
using namespace Basler_UsbCameraParams;
class CaptureThread
{
	

public:

	CaptureThread(String_t devNum);
	~CaptureThread();
	Mat                     frame;//��֡
//	CInstantCamera          cam; //���ʵ��
    CBaslerUsbInstantCamera cam;
	String_t                devNum;//������к�
	CGrabResultPtr          ptrGrabResult;
	bool                    isOpenAquire;
	bool                    isOpen;
	int                     ImgCount_1;
	int                     ImgCount_2;
	int                     ImgCount_3;
	int                     ImgCount_4;
	void initPylon();//��ʼ��Pylon
	void connectCamera(String_t devNum);//�������
	void closeCamera();//�ر����

	void GrabImage();//��ȡͼƬ
	void GrabImage1();//��ȡͼƬ
	void GrabImage2();//��ȡͼƬ
	void StartAquire();//���û�ȡģʽ����ʼ��ȡͼƬ
	void StopAquire();//ֹͣ��ȡͼƬ
	void deleteAll();//ȡ����ʼ��
	void saveImg();//����ͼƬ

};
