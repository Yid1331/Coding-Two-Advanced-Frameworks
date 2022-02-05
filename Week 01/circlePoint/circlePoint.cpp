#include <iostream>
using namespace std;
#include"circle.h"
#include"point.h"



void compare(circle c, point d)
{
	int distance1 = (d.point_x - c.center_x) * (d.point_x - c.center_x) + (d.point_y - c.center_y) * (d.point_y - c.center_y);
	int radius = c.circleR * c.circleR;

	if (distance1 > radius)
	{
		cout << "point outside the circle" << endl;
	}
	else if (distance1 < radius)
	{
		cout << "point inside the circle" << endl;
	}
	else
	{
		cout << "point on the circle" << endl;
	}
}


int main()
{

	circle myCircle;
	myCircle.getCenter(0, 0);
	myCircle.getR(5);

	point myPoint;
	myPoint.getPoint(3, 4);

	compare(myCircle, myPoint);


	system("pause");
	return 0;
}


