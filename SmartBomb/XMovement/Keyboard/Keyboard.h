#pragma once

#include <opencv2/opencv.hpp>

#include "../XMovement.h"
#include "../../UI/Draw/Draw.h"
#include "../../Structures/Coordinates.h"
#include "../../Structures/KeyboardArrows.h"

class Keyboard : public XMovement
{
private:
	Coordinates cords;
	int size = 10;

public:
	int getSize();
	Coordinates Move(cv::Mat& frame, int delay);
};