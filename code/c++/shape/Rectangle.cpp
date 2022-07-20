#include "Rectangle.h"

int Triangle::numRect = 0;

Triangle::~Triangle() {
  numRect--;
  std::cout << "Rectangle Destructor\n";
}

Triangle::Triangle(double w, double d)
  :Shape(), width(w), height(d)
{
  numRect++;
}

double
Triangle::GetArea(void) {
  return width*height;
}

void 
Triangle::PrintArea(std::ostream &s) {
  s << "Rectangle: " << width * height << " numRect: " << numRect << "\n";
}

