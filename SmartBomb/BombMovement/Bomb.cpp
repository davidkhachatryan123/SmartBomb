#include "Bomb.h"

using namespace std;


template<class T>
T _map(T value, T in_min, T in_max, T out_min, T out_max)
{
	return (value - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


void Bomb::Move(Coordinates to, cv::Mat frame)
{
	if (to.x != 0 || to.y != 0)
	{
		float x_speed = to.x - frame.size().width / 2;
		float y_speed = to.y - frame.size().height / 2;

		MoveWithSpeed(-_map<float>(x_speed, 0, frame.size().width / 2, 0, 100), _map<float>(y_speed, 0, frame.size().height / 2, 0, 100));
	}
	else
		cout << "Not Tracking!" << endl;
}

void Bomb::MoveWithSpeed(float x_speed, float y_speed)
{
	cout << "x speed: " << x_speed << " %" << endl;
	cout << "y speed: " << y_speed << " %" << endl;
}
