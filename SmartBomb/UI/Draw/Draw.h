#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>

#include "../../Structures/Coordinates.h"

class Draw
{
public:
	static void drawX(Coordinates cords, cv::Mat& frame);
};