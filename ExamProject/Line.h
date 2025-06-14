#pragma once
#include "Point.h"

class Line : public Shape
{
private:

    Point p1;
    Point p2;

public:

    Line();
    Line(Point p1, Point p2);
    ~Line();

    Point getP1();
    void setP1(Point p1);
    Point getP2();
    void setP2(Point p2);

    double getDistance() override;
    double getPerimeter() override;
    double getSquare() override;
    string toString() override;
};