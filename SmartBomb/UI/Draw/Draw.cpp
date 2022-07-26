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

Coordinates Draw::drawRect(Rect boudingBox, cv::Mat& frame)
{
	Coordinates cords(boudingBox.x + boudingBox.width / 2, boudingBox.y + boudingBox.height / 2);

	circle(frame, Point(cords.x, cords.y), 1, Scalar(0, 0, 255), 3, 1);

	line(frame, Point(boudingBox.x, boudingBox.y), Point(boudingBox.x + boudingBox.width / 3, boudingBox.y), Scalar(0, 0, 255), 1, 1);
	line(frame, Point(boudingBox.x, boudingBox.y), Point(boudingBox.x, boudingBox.y + boudingBox.height / 3), Scalar(0, 0, 255), 1, 1);

	line(frame, Point(boudingBox.x + boudingBox.width, boudingBox.y), Point((boudingBox.x + boudingBox.width) - boudingBox.width / 3, boudingBox.y), Scalar(0, 0, 255), 1, 1);
	line(frame, Point(boudingBox.x + boudingBox.width, boudingBox.y), Point(boudingBox.x + boudingBox.width, boudingBox.y + boudingBox.height / 3), Scalar(0, 0, 255), 1, 1);

	line(frame, Point(boudingBox.x, boudingBox.y + boudingBox.height), Point(boudingBox.x, (boudingBox.y + boudingBox.height) - boudingBox.height / 3), Scalar(0, 0, 255), 1, 1);
	line(frame, Point(boudingBox.x, boudingBox.y + boudingBox.height), Point(boudingBox.x + boudingBox.width / 3, boudingBox.y + boudingBox.height), Scalar(0, 0, 255), 1, 1);

	line(frame, Point(boudingBox.x + boudingBox.width, boudingBox.y + boudingBox.height), Point((boudingBox.x + boudingBox.width) - boudingBox.width / 3, boudingBox.y + boudingBox.height), Scalar(0, 0, 255), 1, 1);
	line(frame, Point(boudingBox.x + boudingBox.width, boudingBox.y + boudingBox.height), Point(boudingBox.x + boudingBox.width, (boudingBox.y + boudingBox.height) - boudingBox.height / 3), Scalar(0, 0, 255), 1, 1);

	return cords;
}
