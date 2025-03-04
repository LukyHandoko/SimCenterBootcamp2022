#include "Rectangle.h"
#include "Circle.h"

#include <list>
#include <vector>

typedef std::list<ColoredShape*> Container;
//typedef std::vector<ColoredShape*> Container;

typedef Container::iterator Iter;

int main(int argc, char **argv) {
  Container theShapes;

  Circle s1(2.0, "red");
  ColoredShape *s2 = new Triangle(1.0, 2.0, "blue");
  ColoredShape *s3 = new Triangle(3.0,2.0, "green");
  
  theShapes.push_front(&s1);
  theShapes.push_front(s2);
  theShapes.push_front(s3);

  Iter it;  
  for (it = theShapes.begin(); it != theShapes.end(); it++) {
    (*it)->printArea(std::cout);
  }

  delete s2;
  delete s3;
  return 0;
}


