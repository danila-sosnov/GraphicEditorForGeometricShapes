#pragma once
#include "Point.h"


class Line
{
private:

	Point p1;
	Point p2;

public:

	Line(Point& p1, Point& p2);

	
	double getLength();
	int getPerimeter();

	string toString();
};

