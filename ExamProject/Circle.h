#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:

	int x;
	int y;
	int r;

public:

	Circle();
	Circle(int x, int y, int r);
	~Circle();

	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	int getR();
	void setR(int r);

	double getDistance() override;
	double getPerimeter() override;
	double getSquare() override;
	string toString() override;


};

