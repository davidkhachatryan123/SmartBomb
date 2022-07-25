#pragma once

#include "../XMovement.h"

class Joystick : public XMovement
{
public:
	int getSize();
	Coordinates Move(int x, int y);
};