#include "Point.h"


string Point::toString()
{
	string s = "";

	s += "x = " + to_string(x)
		+ ", y = " + to_string(y);

	return s;
}

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point::getX()
{
	return x;
}
void Point::setX()
{
	this->x = x;
}
int Point::getY()
{
	return y;
}
void Point::setY()
{
	this->y = y;
}

double Point::getLength()
{
	return sqrt(pow(x - 0, 2) + pow(y - 0, 2));
}

