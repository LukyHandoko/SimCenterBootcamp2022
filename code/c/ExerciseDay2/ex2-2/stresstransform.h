#ifndef STRESSTRANSFORM_H
#define STRESSTRANSFORM_H


// DEFINE S typedef struct STRESS ...
typedef struct STRESS {
    float sigx;
    float sigy;
    float tau;

} STRESS;


void StressTransform(STRESS s, STRESS *sp, double theta);

#endif

