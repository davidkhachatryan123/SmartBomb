#pragma once

#include <opencv2/opencv.hpp>

#include "../Structures/Coordinates.h"

class XMovement
{
protected:
	virtual int getSize() = 0;
	virtual Coordinates Move(cv::Mat& frame, int delay) = 0;
};