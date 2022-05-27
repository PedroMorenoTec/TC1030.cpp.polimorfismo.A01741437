#include <iostream>

#include "Shape.hpp"

int main() 
{
  int x = 10;
  int *ptrInt;

  ptrInt = &x;

  std::cout << ptrInt << " es la dirección de memoria donde está x " << "\n";
  std::cout << *ptrInt << " es el valor al cual apunta el apuntador " << "\n";

// Reservando un espacio en memoria para un entero -------------------
  int *ptrInt2 = new int{20};

  std::cout << ptrInt2 << " es la dirección de memoria donde está *ptrInt2 " << "\n";
  std::cout << *ptrInt2 << " es el valor al cual apunta el apuntador ptrInt2" << "\n";

// Creando apuntadores a objetos --------------------------------------
  Shape fig;
  Shape* ptrFig{&fig};

  std::cout << ptrFig->draw() << "\n";  

// Reservando espacio para un objeto ----------------------------------
  Shape* ptrFig2 = new Shape(2,3);

  std::cout << ptrFig2->draw() << "\n";

  return 0;
}