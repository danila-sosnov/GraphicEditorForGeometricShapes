#include "main.h"


class Shape
{
public:

    virtual double getDistance() { return 0; };
    virtual int getSquare() { return 0; };
    virtual double getPerimeter() { return 0; };
    virtual string toString() { return ""; };
    virtual ~Shape() {}
};