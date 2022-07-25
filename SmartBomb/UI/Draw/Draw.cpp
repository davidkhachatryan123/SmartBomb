#include "Draw.h"

using namespace std;
using namespace cv;

Coordinates Draw::drawX(Coordinates cords, Mat& frame, int size)
{
	float x_center = frame.size().width / 2;
	float y_center = frame.size().height / 2;

	float frame_x = (x_center * cords.x) + x_center;
	float frame_y = (y_center * -cords.y) + y_center;

	line(frame, Point(frame_x + size, frame_y), Point(frame_x + 20 + size, frame_y), Scalar(0, 200, 0), 2, LINE_4);
	line(frame, Point(frame_x - size, frame_y), Point(frame_x - 20 - size, frame_y), Scalar(0, 200, 0), 2, LINE_4);
	line(frame, Point(frame_x, frame_y + size), Point(frame_x, frame_y + 20 + size), Scalar(0, 200, 0), 2, LINE_4);
	line(frame, Point(frame_x, frame_y - size), Point(frame_x, frame_y - 20 - size), Scalar(0, 200, 0), 2, LINE_4);

	return Coordinates(frame_x, frame_y);
}
