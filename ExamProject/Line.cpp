#include "Line.h"

Line::Line() : p1(Point()), p2(Point()) {}

Line::Line(Point p1, Point p2) : p1(p1), p2(p2) {}

Line::~Line() {}

Point Line::getP1() 
{
    return p1;
}

void Line::setP1(Point p1)
{
    this->p1 = p1;
}

Point Line::getP2() 
{ 
    return p2;
}

void Line::setP2(Point p2)
{
    this->p2 = p2;
}

double Line::getDistance() 
{
    return p1.getDistance() > p2.getDistance()
        ? p2.getDistance() : p1.getDistance();
}

double Line::getPerimeter()
{
    return sqrt(pow(p2.getX() - p1.getX(), 2)
        + pow(p2.getY() - p1.getY(), 2));
}

double Line::getSquare()
{
    return 0;
}

string Line::toString() 
{
    string s = "";

    s += "Line from (" + to_string(p1.getX()) + ", " + to_string(p1.getY())
        + ") to (" + to_string(p2.getX()) + ", " + to_string(p2.getY()) + ")";

    return s;
}