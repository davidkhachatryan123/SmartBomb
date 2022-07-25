#pragma once

#include <string>
#include <opencv2/opencv.hpp>

class Capture
{
protected:
	virtual bool Get(std::string path, cv::VideoCapture& cap) = 0;
};