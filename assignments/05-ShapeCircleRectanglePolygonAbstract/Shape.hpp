#pragma once

#include <string>
class Shape
{
private:
    int x;
    int y;
public:
    Shape();
    Shape(int, int);
    ~Shape();
    virtual std::string draw();
    virtual double getArea() = 0;

    int getValueX();
    int getValueY();
};