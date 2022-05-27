#pragma once

#include "Shape.hpp"
class Polygon : public Shape
{
private:
    int num_lados;
    double lado;
    double apotema;

public:
    Polygon();
    Polygon(int, double, double);
    std::string draw() override;    
};