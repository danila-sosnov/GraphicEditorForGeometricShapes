#include "point.h"
#include "line.h"

int main()
{
	Point point1(3, 2), point2(4, 3);

	cout << "Point x and y: " << point1.toString() << endl;
	cout << "Length = " << point1.getLength() << endl;

	return 0;
}