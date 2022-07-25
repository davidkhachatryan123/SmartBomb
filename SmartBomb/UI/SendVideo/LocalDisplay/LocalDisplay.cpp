#include "LocalDisplay.h"

void LocalDisplay::Send(std::string windowName, cv::Mat frame)
{
	cv::imshow(windowName, frame);
}