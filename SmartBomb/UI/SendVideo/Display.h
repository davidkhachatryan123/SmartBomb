#pragma once

#include <string>
#include <opencv2/opencv.hpp>

class Display
{
protected:
	virtual void Send(std::string windowName, cv::Mat frame) = 0;
};