#include "Polygon.hpp"

Polygon::Polygon() {
}

Polygon::Polygon(int num_lados, double lado, double apotema) {
    this->num_lados = num_lados;
    this->lado = lado;
    this->apotema = apotema;
}

std::string Polygon::draw() {
    return "soy un poligono";
}