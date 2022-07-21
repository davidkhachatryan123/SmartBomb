#pragma once

#include <string>
#include <opencv2/opencv.hpp>

#include "../Display.h"

class LocalDisplay : public Display
{
public:
	void Send(std::string windowName,cv::Mat frame);
};