#pragma once

#include "../XMovement.h"

class Joystick : public XMovement
{
public:
	void Move(int x, int y);
};