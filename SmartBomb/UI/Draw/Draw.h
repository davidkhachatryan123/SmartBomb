#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>

#include "../../Structures/Coordinates.h"

class Draw
{
public:
	static Coordinates drawX(Coordinates cords, cv::Mat& frame, int size = 10);
};