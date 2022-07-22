#include "SmartBomb.h"

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap;

	if (CaptureLocalVideo::OpenCapture("/home/david/Videos/video.mp4", cap))
	{
		Mat frame;
		Keyboard keyboard;

		while (CaptureLocalVideo::Get(cap, frame))
		{
			keyboard.Move(frame, 33);

			LocalDisplay::Send("Window", frame);
		}
	}


	while (true)
		if (waitKey(1) == 27)
			break;

	cap.release();

	return 0;
}


