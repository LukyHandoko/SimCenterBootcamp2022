#include "Rectangle.h"
#include "Circle.h"

#include <list>

int main(int argc, char **argv) {
  std::list<Shape*> theShapes;

  Circle s1(2.0);
  Shape *s2 = new Triangle(1.0, 2.0);
  Shape *s3 = new Triangle(3.0,2.0);
  
  theShapes.push_front(&s1);
  theShapes.push_front(s2);
  theShapes.push_front(s3);

  std::list<Shape *>::iterator it;  
  for (it = theShapes.begin(); it != theShapes.end(); it++) {
    (*it)->PrintArea(std::cout);
  }

  return 0;
}


