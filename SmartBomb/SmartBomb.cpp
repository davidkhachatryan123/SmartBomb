#include "SmartBomb.h"

using namespace std;
using namespace cv;

//enum class Keys {
//
//	    left = 75,
//		right = 77,
//		top = 72,
//		down = 80,
//
//};
int main()
{

	Mat img = imread("/home/david/Pictures/tree.jpg");

	imshow("Tree", img);

	waitKey(0);
}


