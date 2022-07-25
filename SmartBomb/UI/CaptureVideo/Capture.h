#pragma once

#include <string>
#include <opencv2/opencv.hpp>

class Capture
{
protected:
	virtual bool Get(cv::Mat& frame) = 0;
};