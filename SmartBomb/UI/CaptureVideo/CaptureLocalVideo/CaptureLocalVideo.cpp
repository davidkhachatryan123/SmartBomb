#include "CaptureLocalVideo.h"

bool CaptureLocalVideo::OpenCapture(std::string path)
{
	_cap.open(path);

	return _cap.isOpened();
}

bool CaptureLocalVideo::Get(cv::Mat& frame)
{
	_cap >> frame;

	if (!frame.empty())
		return true;

	return false;
}
