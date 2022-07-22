#pragma once

#include <opencv2/opencv.hpp>

#include "../Structures/Coordinates.h"

class XMovement
{
protected:
	virtual void Move(cv::Mat& frame, int delay) = 0;
};