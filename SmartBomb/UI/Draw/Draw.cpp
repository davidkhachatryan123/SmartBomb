#include "Draw.h"

using namespace std;
using namespace cv;

void Draw::drawX(float x, float y, std::string windowName, cv::Mat& frame)
{
	float y_center = frame.size().height / 2;
	float x_center = frame.size().width / 2;

	float frame_x = (x_center * x) + x_center;
	float frame_y = (y_center * y) + y_center;

	line(frame, Point(frame_x + 10, frame_y), Point(frame_x + 30, frame_y), Scalar(0, 200, 0), 2, LINE_4);
	line(frame, Point(frame_x - 10, frame_y), Point(frame_x - 30, frame_y), Scalar(0, 200, 0), 2, LINE_4);
	line(frame, Point(frame_x, frame_y + 10), Point(frame_x, frame_y + 30), Scalar(0, 200, 0), 2, LINE_4);
	line(frame, Point(frame_x, frame_y - 10), Point(frame_x, frame_y - 30), Scalar(0, 200, 0), 2, LINE_4);

	imshow(windowName, frame);
}
