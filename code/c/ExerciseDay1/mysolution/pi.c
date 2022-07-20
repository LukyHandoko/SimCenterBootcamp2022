#include <stdio.h>
#include <math.h>


static int long numSteps=100000;

int main (){
    double pi = 0;
    double dx=1./numSteps;
    double x=dx*0.5;


    for (int i=0;i<numSteps;i++){
        pi += 4./(1.+x*x);
        x += dx;
    }
    pi *= dx;
    printf("Pi =%f. Difference from math h definition %f\n",pi,pi-M_PI);
    return 0;
}