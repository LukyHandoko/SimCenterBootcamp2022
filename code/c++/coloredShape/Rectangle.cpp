#include "Rectangle.h"

int Triangle::numRect = 0;

Triangle::~Triangle() {
  numRect--;
  std::cout << "Rectangle Destructor " << this->getColor() << "\n";
}

Triangle::Triangle(double w, double d, string color)
  :ColoredShape(color), width(w), height(d)
{
  numRect++;
}

double
Triangle::getArea(void) {
  return width*height;
}

void 
Triangle::printArea(std::ostream &s) {
  s << "Rectangle: color: " << this->getColor() << ", area: "
    << width * height << " numRect: " << numRect << "\n";
}

