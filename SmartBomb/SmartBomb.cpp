#include "SmartBomb.h"

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("/home/david/Pictures/tree.jpg");

	imshow("Tree", img);

	waitKey(0);

	return 0;
}
