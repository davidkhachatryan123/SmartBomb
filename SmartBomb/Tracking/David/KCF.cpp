#include "KCF.h"

void KCF::Init(cv::Mat frame, Rect boudingBox)
{
	this->tracker = TrackerMIL::create();

	tracker->init(frame, boudingBox);
}

Coordinates KCF::Track(Mat frame)
{
	Rect boudingBox;

	if (this->tracker->update(frame, boudingBox))
		return Draw::drawRect(boudingBox, frame);

	return Coordinates();
}
