#include "SmartBomb.h"

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap;

	if (CaptureLocalVideo::OpenCapture("/home/david/Videos/video.mp4", cap))
	{
		Mat frame;

		while (CaptureLocalVideo::Get(cap, frame))
		{
			Draw::drawX(Coordinates(0.0f, +0.5f), frame);

			LocalDisplay::Send("Window", frame);

			waitKey(33);
		}
	}


	waitKey(0);
	cap.release();

	return 0;
}


