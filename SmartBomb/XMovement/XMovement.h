#pragma once

#include <opencv2/opencv.hpp>

#include "../Structures/Coordinates.h"

class XMovement
{
protected:
	virtual void Move(Coordinates cords, cv::Mat frame) = 0;
};