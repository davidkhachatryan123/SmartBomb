#include "Keyboard.h"

void Keyboard::Move(cv::Mat& frame, int delay)
{
	switch (cv::waitKey(delay))
	{
	case KeyboardArrows::UP:
		if (cords.y < 1)
			cords.y += 0.03;
		break;
	case KeyboardArrows::DOWN:
		if (cords.y > -1)
			cords.y -= 0.03;
		break;
	case KeyboardArrows::RIGHT:
		if (cords.x < 1)
			cords.x += 0.03;
		break;
	case KeyboardArrows::LEFT:
		if (cords.x > -1)
			cords.x -= 0.03;
		break;
	}

	Draw::drawX(cords, frame);
}