#include "SmartBomb.h"

using namespace std;
using namespace cv;

int main()
{
	CaptureLocalVideo lVideo;

	if (lVideo.OpenCapture("/home/david/Videos/video.mp4"))
	{
		Mat frame;
		Keyboard keyboard;
		LocalDisplay lDisplay;

		while (lVideo.Get(frame))
		{
			keyboard.Move(frame, 33);

			lDisplay.Send("Window", frame);
		}
	}


	while (true)
		if (waitKey(1) == 27)
			break;

	return 0;
}


