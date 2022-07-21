#include "CaptureLocalVideo.h"

bool CaptureLocalVideo::OpenCapture(std::string path, cv::VideoCapture& cap)
{
	cv::VideoCapture _cap(path);

	cap = _cap;

	return cap.isOpened();
}

bool CaptureLocalVideo::Get(cv::VideoCapture cap, cv::Mat& frame)
{
	cap >> frame;

	if (!frame.empty())
		return true;

	return false;
}
