#include "Triangle.h"


Triangle::Triangle() : a(Point()), b(Point()), c(Point()) {}

Triangle::Triangle(Point a, Point b, Point c) : a(a), b(b), c(c) {}

Triangle::~Triangle() {}

Point Triangle::getA()
{
	return a;
}

void Triangle::setA(Point a)
{
	this->a = a;
}

Point Triangle::getB()
{
	return b;
}

void Triangle::setB(Point b)
{
	this->b = b;
}

Point Triangle::getC()
{
	return c;
}

void Triangle::setC(Point c)
{
	this->c = c;
}

double Triangle::getDistance()
{
	return (a.getDistance() > b.getDistance())
		? (b.getDistance() > c.getDistance())
			? c.getDistance() : b.getDistance()
		: (a.getDistance() > c.getDistance())
		? c.getDistance() : a.getDistance();
}

double Triangle::getSquare()
{
	double s = 0.5 * (a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY()));

	return s > 0 ? s : -s;
}

double Triangle::getPerimeter()
{
	double ab = sqrt(pow(b.getX() - a.getX(), 2)
		+ pow(b.getY() - a.getY(), 2));
	double ac = sqrt(pow(c.getX() - a.getX(), 2)
		+ pow(c.getY() - a.getY(), 2));
	double bc = sqrt(pow(c.getX() - b.getX(), 2)
		+ pow(c.getY() - b.getY(), 2));

	return ab + ac + bc;
}

string Triangle::toString()
{
	string s = "";

	s += "Triangle with A(" + to_string(a.getX())
		+ ", " + to_string(a.getY()) + ") ; B("
		+ to_string(b.getX()) + ", " + to_string(b.getY())
		+ ") ; C(" + to_string(c.getX()) + ", "
		+ to_string(c.getY())	+ ")";

	return s;
}
