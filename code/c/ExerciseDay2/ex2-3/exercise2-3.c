#include <stdio.h>
#include <stdlib.h>
#include <math.h>    // need this for the constant pi = M_PI

#include "stresstransform.h"


int main(int argc, char **argv) {

	// get dth from the first argument.  This is given in degrees!
	if (argc!=2)
	{
		printf("it takes 2 arguments: AppName degree\n");
		return (-1);
	}

	// set the initial stress state

	STRESS S0;
	STRESS Sp;

	S0.sigx = 12.0;
	S0.sigy = -5.5;
	S0.tau  =  3.5;

	// loop to compute transformed states

	float dth = atof (argv[1]);
	float deg =0;

	FILE *fileprint = fopen("list.csv","w");

	while (deg < 180.1)
	{
		printf("Degree = %f\n",deg);
		StressTransform(S0, &Sp, deg);
	    fprintf(fileprint,"Degree of rotation = %f\n, sigx' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", deg, Sp.sigx, Sp.sigy, Sp.tau);
		deg+=dth;
	}

	fclose(fileprint);
}

