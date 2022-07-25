#pragma once

#include "../Capture.h"

#include <opencv2/opencv.hpp>
#include <string>

class CaptureLocalVideo : public Capture
{
public:
	bool OpenCapture(std::string path);

	bool Get(cv::Mat& frame);

private:
	cv::VideoCapture _cap;
};