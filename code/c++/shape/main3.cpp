#include "Rectangle.h"
#include "Circle.h"

#include <list>
#include <vector>

typedef std::list<Shape*> Container;
//typedef std::vector<Shape*> Container;

typedef Container::iterator Iter;

int main(int argc, char **argv) {
  Container theShapes;

  Circle s1(2.0);
  Shape *s2 = new Triangle(1.0, 2.0);
  Shape *s3 = new Triangle(3.0,2.0);
  
  theShapes.push_front(&s1);
  theShapes.push_front(s2);
  theShapes.push_front(s3);

  Iter it;  
  for (it = theShapes.begin(); it != theShapes.end(); it++) {
    (*it)->PrintArea(std::cout);
  }

  return 0;
}


