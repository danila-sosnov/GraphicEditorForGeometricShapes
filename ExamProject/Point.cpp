#include "Point.h"

Point::Point() : x(0), y(0) {}

Point::Point(int x, int y) : x(x), y(y) {}

Point::~Point() {}

int Point::getX() 
{
    return x;
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getY() 
{
    return y;
}

void Point::setY(int y)
{
    this->y = y;
}

double Point::getPerimeter() 
{
    return 0.0;
}

int Point::getSquare() 
{
    return 0;
}

double Point::getDistance() 
{
    return sqrt(x * x + y * y);
}

string Point::toString() 
{
    return "x = " + to_string(x)
        +  ", y = " + to_string(y);
}