#pragma once
#include "Shape.h"

class Point : public Shape
{
private:

    int x;
    int y;

public:

    Point();
    Point(int x, int y);
    ~Point();

    int getX();
    void setX(int x);
    int getY();
    void setY(int y);

    double getPerimeter() override;
    double getSquare() override;
    double getDistance() override;
    string toString() override;
};