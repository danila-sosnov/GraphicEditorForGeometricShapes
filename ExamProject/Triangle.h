#pragma once
#include "Shape.h"
#include "Point.h"

class Triangle :  public Shape
{
private:
	
	Point a;
	Point b;
	Point c;
	

public:

	Triangle();
	Triangle(Point a, Point b, Point c);
	~Triangle();

	Point getA();
	void setA(Point a);
	Point getB();
	void setB(Point b);
	Point getC();
	void setC(Point c);

	double getDistance() override;
	double getSquare() override;
	double getPerimeter() override;
	string toString() override;

};

