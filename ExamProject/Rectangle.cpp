#include "Rectangle.h"

Rectangle::Rectangle() : x(0), y(0), width(0), height(0) {}

Rectangle::Rectangle(int x, int y, int width, int height)
	: x(x), y(y), width(width), height(height) {}

Rectangle::~Rectangle() {}

int Rectangle::getX()
{
	return x;
}
void Rectangle::setX(int x)
{
	this->x = x;
}

int Rectangle::getY()
{
	return y;
}

void Rectangle::setY(int y)
{
	this->y = y;
}

int Rectangle::getWidth()
{
	return width;
}

void Rectangle::setWidth(int width)
{
	this->width = width;
}

int Rectangle::getHeight()
{
	return height;
}

void Rectangle::setHeight(int height)
{
	this->height = height;
}

double Rectangle::getDistance()
{
	int x2 = x + width;
	int y2 = y - height;

	double nearestX = (x > 0) ? x : (x2 < 0) ? x2 : 0;
	double nearestY = (y < 0) ? y : (y2 > 0) ? y2 : 0;

	return sqrt(nearestX * nearestX + nearestY * nearestY);
}

double Rectangle::getSquare()
{
	return width * height;
}

double Rectangle::getPerimeter()
{
	return 2 * (height + width);
}

string Rectangle::toString()
{
	string s = "";

	s += "Rectangle with point (" + to_string(x) + ", "
		+ to_string(y) + ") and width " + to_string(width)
		+ ", height " + to_string(height);

	return s;
}
