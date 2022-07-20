#include "Triangle.h"

int Triangle::numTr = 0;

Triangle::~Triangle() {
  numTr--;
  std::cout << "Rectangle Destructor " << this->getColor() << "\n";
}

Triangle::Triangle(double b, double d, string color)
  :ColoredShape(color), base(b), height(d)
{
  numTr++;
}

double
Triangle::getArea(void) {
  return base*height;
}

void 
Triangle::printArea(std::ostream &s) {
  s << "Rectangle: color: " << this->getColor() << ", area: "
    << base * height << " numRect: " << numTr << "\n";
}

