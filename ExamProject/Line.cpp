#include "Line.h"

Line::Line(Point& p1, Point& p2)
{
	this->p1 = p1;
	this->p2 = p2;
}


double Line::getLength()
{
	
}
int Line::getPerimeter()
{
	return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
}

string Line::toString()
{
	string s = "";

	s += "x1 = " + to_string(p1.getX()) 
		+ "x2 = " + to_string(p2.getX())
		+ "y1 = " + to_string(p1.getY())
		+  "y2 = " + to_string(p2.getY());
}
