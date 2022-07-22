#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>

class Draw
{
public:
	static void drawX(float x, float y, std::string windowName, cv::Mat& frame);
};