#pragma once

#include <string>
#include <opencv2/opencv.hpp>

class Display
{
protected:
	virtual void Send(cv::Mat frame) = 0;
};