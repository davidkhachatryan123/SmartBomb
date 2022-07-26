#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>

#include "../Structures/Coordinates.h"

class Bomb
{
public:
	static void Move(Coordinates to, cv::Mat frame);

private:
	static void MoveWithSpeed(float x_speed, float y_speed);

};