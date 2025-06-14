#pragma once
#include "Shape.h"

class Rectangle : public Shape
{

private:

	int x, y;
	int width, height;

public:

	Rectangle();
	Rectangle(int x, int y, int width, int height);
	~Rectangle();

	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	int getWidth();
	void setWidth(int width);
	int getHeight();
	void setHeight(int height);

	double getDistance() override;
	double getSquare() override;
	double getPerimeter() override;
	string toString() override;
};

