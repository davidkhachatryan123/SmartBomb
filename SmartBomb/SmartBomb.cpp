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
			Coordinates cords = keyboard.Move(frame, 33);

			if (cords.x != last_cords.x || cords.y != last_cords.y)
			{
				kcf.Init(frame, Rect(cords.x - keyboard.getSize(), cords.y - keyboard.getSize(), keyboard.getSize() * 2, keyboard.getSize() * 2));

				last_cords = cords;
			}

			Coordinates target = kcf.Track(frame);

			Bomb::Move(target, frame);

			lDisplay.Send("Window", frame);
		}
	}


	while (true)
		if (waitKey(1) == 27)
			break;

	return 0;
}


