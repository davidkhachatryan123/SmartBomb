#pragma once

struct Coordinates
{
public:
	float x;
	float y;

	Coordinates()
	{
		this->x = 0.0f;
		this->y = 0.0f;
	}

	Coordinates(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
};