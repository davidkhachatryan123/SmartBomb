#include "SmartBomb.h"

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("/home/david/Pictures/tree.jpg");

	imshow("Tree", img);
	imshow("Tree2", img);

	waitKey(0);

	return 0;
}
