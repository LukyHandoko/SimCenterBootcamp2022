#ifndef _RECTANGLE
#define _RECTANGLE

#include "Shape.h"

class Triangle: public Shape {
 public:
  Triangle(double w, double h);
  ~Triangle();
  double GetArea(void);
  void PrintArea(std::ostream &s);  

 protected:

 private:
  double width, height;
  static int numRect;
};

#endif // _RECTANGLE

  
