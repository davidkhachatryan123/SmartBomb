#pragma once

#include "opencv2/opencv.hpp"

class Tracking
{
protected:
	virtual void Init(cv::Mat frame, cv::Rect boudingBox) = 0;
	
	virtual void Track(cv::Mat frame) = 0;
};