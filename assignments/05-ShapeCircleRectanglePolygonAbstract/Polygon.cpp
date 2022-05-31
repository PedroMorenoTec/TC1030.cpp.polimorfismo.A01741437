#include "Polygon.hpp"

Polygon::Polygon()
{
    this->n=3;
    this->lado=1;
    this->apotema=1;
}

Polygon::Polygon(int valX, int valY, int n, int lado, int apotema) : Shape(valX, valY)
{
    this->n=n;
    this->lado=lado;
    this->apotema=apotema;
}

std::string Polygon::draw()
{
    return "soy un poligono";
}

double Polygon::getArea()
{
    int p = n*lado; 
    return p*apotema/2.0;
}