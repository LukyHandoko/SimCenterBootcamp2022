#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int no;
    int pojok[2];

} Element;



const L=20;
const dx=2.5;


int main (int argc, char **argv)
{
    int nEl = (int) L/dx;
    Element *El = malloc(nEl*sizeof(Element));
    float bt=0;
    float top=0;
    int pjk[2];
    for (int i=0;i<nEl;i++)
    {
        float tp = bt+dx;

        pjk[0] = i;
        pjk[1] = i+1;

        El -> no = i+1;
        El -> pojok = pjk;

    }

}