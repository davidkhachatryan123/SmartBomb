#include "KCF.h"

void KCF::Init(cv::Mat frame, Rect boudingBox)
{
	this->tracker = TrackerKCF::create();

	tracker->init(frame, boudingBox);
}

void KCF::Track(Mat frame)
{
	Rect boudingBox;

	if (this->tracker->update(frame, boudingBox))
		rectangle(frame, boudingBox, Scalar(0, 0, 255), 2, 1);
}
