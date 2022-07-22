#pragma once

#include "../XMovement.h"

class Keyboard : public XMovement
{
public:
	void Move(Coordinates cords, cv::Mat frame);
};