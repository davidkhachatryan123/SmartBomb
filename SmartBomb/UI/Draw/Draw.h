#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>

#include "../../Structures/Coordinates.h"

class Draw
{
public:
<<<<<<< HEAD
	static void drawX(float x, float y, std::string windowName, cv::Mat& frame);
=======
	static void drawX(Coordinates cords, cv::Mat& frame);
>>>>>>> 'main'
};