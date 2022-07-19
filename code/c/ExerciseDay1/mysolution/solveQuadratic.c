// program to solve quadratic equation
//        ax^2 + bx + c = 0
//
// soln: x = -b/2a +/- sqrt(b^2-4ac)/2a
//
// write a program to take 3 inputs and output the soln
// deal with possible errors in input, i.e. b^2-4ac negative

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 4) {
    printf("Usage: appName a b c\n");
    exit(-1);
  }

  float a = atof(argv[1]);
  float b = atof(argv[2]);
  float c = atof(argv[3]);

  float D = pow(b,b)-4*a*c;
  float x1 = (-b-sqrt(b*b-4*a*c))/(2*a);
  float x2 = (-b+sqrt(b*b-4*a*c))/(2*a);

  if (D>0){
    printf("There are two solution: x1 = %.4f and x2 = %.4f\n",x1,x2);
  } else if (D==0){
    printf("There is only one solution: x = %.4f\n", x1);
  } else {
    printf("ups, the solution is complex number\n");
  }
  return 0;
}