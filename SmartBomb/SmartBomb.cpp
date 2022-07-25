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
		KCF kcf;
		Coordinates last_cords;

		while (lVideo.Get(frame))
		{
			Coordinates cord = keyboard.Move(frame, 33);

			if (cord.x != last_cords.x || cord.y != last_cords.y)
				kcf.Init(frame, Rect(cord.x - keyboard.getSize(), cord.y - keyboard.getSize(), keyboard.getSize() * 2, keyboard.getSize() * 2));

			last_cords = cord;

			kcf.Track(frame);

			lDisplay.Send("Window", frame);
		}
	}


	while (true)
		if (waitKey(1) == 27)
			break;

	return 0;
}


