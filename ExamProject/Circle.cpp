#include "Circle.h"

Circle::Circle() : x(0), y(0), r(0) {}

Circle::Circle(int x, int y, int r) : x(x), y(y), r(r) {}

Circle::~Circle() {}

int Circle::getX()
{
	return x;
}

void Circle::setX(int x)
{
	this->x = x;
}

int Circle::getY()
{
	return y;
}

void Circle::setY(int y)
{
	this->y = y;
}

int Circle::getR()
{
	return r;
}

void Circle::setR(int r)
{
	this->r = r;
}

double Circle::getDistance() 
{
	double d = sqrt(x * x + y * y);

	return (d > r) ? (d - r) : 0;
}

double Circle::getPerimeter()
{
	return 2 * 3.14 * r;
}

double Circle::getSquare()
{
	return 3.14 * r * r;
}

string Circle::toString()
{
	string s = "";

	s += "Circle with center x = " + to_string(x)
		+ ", y = " + to_string(y) + " and radius = "
		+ to_string(r);

	return s;
}
