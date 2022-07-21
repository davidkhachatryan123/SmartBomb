#pragma once

#include "../Capture.h"

#include <opencv2/opencv.hpp>
#include <string>

class CaptureLocalVideo : public Capture
{
public:
	static bool OpenCapture(std::string path, cv::VideoCapture& cap);

	static bool Get(cv::VideoCapture cap, cv::Mat& frame);
};