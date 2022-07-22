#include <stdio.h>
#include <time.h>
#include <math.h>
#include <omp.h>

static long int numSteps = 10000;
const int expt_thds=4;

int main() {


  int numP;
  long int count=0;
  
  double pi_thds[expt_thds];


  for (int i=0;i<expt_thds;i++)
  {
    pi_thds[i]=0;
  }
  
  //omp_set_num_threads(expt_thds);

  #pragma omp parallel
  {
    int id = omp_get_thread_num();
    numP = omp_get_num_threads();

    for (int i=id;i<numSteps;i+=numP)
    {
      //printf("ini print dari core ke %d dari total ada %d.\n",i,numP);
      count++;
    }
  }

  printf("jumlah threads = %d\n",numP);
  printf("jumlah count = %ld\n",count);
  

  //printf("PI = %16.14f Difference from math.h definition %16.14f \n",pi, pi-M_PI);
  return 0;
}
