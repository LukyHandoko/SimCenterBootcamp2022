#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void stressTrans(float *stressIn,float thetaRad,float *stressOut);

int main(int argc, char **argv){
    if (argc!=5){
        printf("Take 5 attributes: appName sigmaXX sigmaYY tauXY theta\n");
        exit (-1);
    }

    float stressIn[3];
    float stressOut[3];
    stressIn[0]=atof(argv[1]);
    stressIn[1]=atof(argv[2]);
    stressIn[2]=atof(argv[3]);
    float theta=atof(argv[4]);
    float thetaRad=theta/180*M_PI;

    stressTrans(stressIn,thetaRad,stressOut);

    printf("Stress input: sigmaXX = %f; sigmaYY = %f and tauXY = %f\n",stressIn[0],stressIn[1],stressIn[2]);
    printf("Stress after transformed about thetha = %f degree: sigmaXX = %f; sigmaYY = %f and tauXY = %f\n",theta, stressOut[0],stressOut[1],stressOut[2]);



    return 0;
}

void stressTrans(float *stress,float thetaRad,float *stressOut){
    float sigmaXX=stress[0];
    float sigmaYY=stress[1];
    float tauXY=stress[2];
    float cosTheta=cos(thetaRad);
    float sinTheta=sin(thetaRad);

    stressOut[0] = sigmaXX*cosTheta*cosTheta + sigmaYY*sinTheta*sinTheta + 2*tauXY*sinTheta*cosTheta;
    stressOut[1] = sigmaXX*sinTheta*sinTheta + sigmaYY*cosTheta*cosTheta - 2*tauXY*sinTheta*cosTheta;
    stressOut[2] = (sigmaYY-sigmaXX)*sinTheta*cosTheta + tauXY*(cosTheta*cosTheta-sinTheta*sinTheta);

}