#include "Polygon.hpp"
#include "Rectangle.hpp"
#include "Shape.hpp"
#include "Circle.hpp"

#include <iostream>

int main() 
{
  const int SIZE = 5+2;
  Shape* Fig[SIZE];

  Fig[0] = new Circle();
  Fig[1] = new Rectangle();
  Fig[2] = new Rectangle(1,2,5,6);
  Fig[3] = new Circle(4,2,1);
  Fig[4] = new Rectangle();

  Fig[5] = new Polygon();
  Fig[6] = new Polygon(5,1,2.5);

  for(auto i=0; i < SIZE; i++) {
    Shape* current = Fig[i];

    std::cout << current->draw() << "\n";
  }

// Liberando memoria -------------------

  for (auto i=0; i < SIZE; i++)
  {
    delete Fig[i];
  }

  return 0;
}
