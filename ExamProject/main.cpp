#include "Line.h"

int main()
{
    Shape* point = new Point(2, 3);
   
    cout << "Point: " << point->toString() << endl;
    cout << "Distance from origin: " << point->getDistance() << endl;
    cout << "Perimeter: " << point->getPerimeter() << endl;
    cout << "Square: " << point->getSquare() << endl << "\n";
   
    delete point;

    Point p1(2, 6), p2(3, 4);

    Shape* line = new Line(p1, p2);

    cout << line->toString() << endl;
    cout << "Distance from origin: " << line->getDistance() << endl;
    cout << "Perimeter: " << line->getPerimeter() << endl;
    cout << "Square: " << line->getSquare() << endl;

    delete line;

    return 0;
}