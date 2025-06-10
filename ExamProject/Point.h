#include "main.h"
#include "Shape.h"

class Point : public Shape
{
private:

	int x;
	int y;

public:

	Point();
	Point(int x, int y);

	int getX();
	void setX();
	int getY();
	void setY();

	double getLength();
	string toString();
};

