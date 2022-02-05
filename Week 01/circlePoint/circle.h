#pragma once

#include <iostream>
using namespace std;

class circle
{
public:
	int center_x;
	int center_y;
	int circleR;

	void getCenter(int x, int y);
	void getR(int r);
};