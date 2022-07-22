#include "SmartBomb.h"

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap;

	if (CaptureLocalVideo::OpenCapture("/home/david/Videos/video.mp4", cap))
	{
		Mat frame;
		Keyboard key;

		while (CaptureLocalVideo::Get(cap, frame))
		{
			key.Move(frame);

			LocalDisplay::Send("Window", frame);

		}
	}

	waitKey(0);
	cap.release();

	return 0;
}


