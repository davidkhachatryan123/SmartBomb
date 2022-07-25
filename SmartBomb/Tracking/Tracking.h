#pragma once

#include <opencv2/opencv.hpp>
#include "../Structures/Coordinates.h"

class Tracking
{
protected:
	virtual void Init(cv::Mat frame, cv::Rect boudingBox) = 0;
	
	virtual Coordinates Track(cv::Mat frame) = 0;
};