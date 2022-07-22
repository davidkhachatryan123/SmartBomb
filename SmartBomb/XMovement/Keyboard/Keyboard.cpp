#include "Keyboard.h"

void Keyboard::Move(cv::Mat& frame)
{

	// 82 up
	// 84 down
	// 83 right
	//81 left


	switch (cv::waitKey(30))
	{
	case 82:
		if (cords.y < 1)
			cords.y += 0.03;
		break;
	case 84:
		if (cords.y > -1)
			cords.y -= 0.03;
		break;
	case 83:
		if (cords.x < 1)
			cords.x += 0.03;
		break;
	case 81:
		if (cords.x > -1)
			cords.x -= 0.03;
		break;
	}

	Draw::drawX(cords, frame);
}
