#include "Line.h"
#include "Circle.h"
#include "Triangle.h"

int main()
{
    Shape* point = new Point(2, 3);
   
    cout << "Point: " << point->toString() << endl;
    cout << "Distance from origin: " << point->getDistance() << endl;
    cout << "Perimeter: " << point->getPerimeter() << endl;
    cout << "Square: " << point->getSquare() << endl << "\n";
   
    delete point;

    Point p1(1, 2), p2(4, 6), p3(7, 3), p4(4, 6);

    Shape* line = new Line(p1, p2);

    cout << line->toString() << endl;
    cout << "Distance from origin: " << line->getDistance() << endl;
    cout << "Perimeter: " << line->getPerimeter() << endl;
    cout << "Square: " << line->getSquare() << endl << "\n";

    delete line;

    Shape* circle = new Circle(4, 2, 3);

    cout << circle->toString() << endl;
    cout << "Distance from origin: " << circle->getDistance() << endl;
    cout << "Perimeter: " << circle->getPerimeter() << endl;
    cout << "Square: " << circle->getSquare() << endl << "\n";

    delete circle;

    Shape* triangle = new Triangle(p1, p2, p3);

    cout << triangle->toString() << endl;
    cout << "Distance from origin: " << triangle->getDistance() << endl;
    cout << "Perimeter: " << triangle->getPerimeter() << endl;
    cout << "Square: " << triangle->getSquare() << endl << "\n";

    delete triangle;

    return 0;
}