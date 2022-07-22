#pragma once

#include "../XMovement.h"

class Keyboard : public XMovement
{
public:
	void Move(cv::Mat frame);
};