#include <stdio.h>
#include <time.h>
#include <math.h>
#include <omp.h>

static long int numSteps = 1000000000;
const int expt_thds=500;

int main() {

  // perform calculation
  double pi   = 0;
  double dx = 1./numSteps;
  double x,local_pi;//  = dx*0.50
  int numP;
  
  double pi_thds[expt_thds];


  for (int i=0;i<expt_thds;i++)
  {
    pi_thds[i]=0;
  }
  
  omp_set_num_threads(expt_thds);

  #pragma omp parallel
  {
    int id = omp_get_thread_num();
    numP = omp_get_num_threads();

    for (int i=id;i<numSteps;i+=numP)
    {
      x = (i+0.5)*dx;
      local_pi = 4./(1.+x*x);
      pi_thds[id]+=local_pi*dx;
    }
  }

  printf("jumlah threads - %d\n",numP);
  

  for (int i=0; i<numP; i++) 
  {
    printf("kontribusi thread ke-%d adalah %lf\n",i,*pi_thds);
    pi += pi_thds[i];
  
  }
  printf("PI = %16.14f Difference from math.h definition %16.14f \n",pi, pi-M_PI);
  return 0;
}
