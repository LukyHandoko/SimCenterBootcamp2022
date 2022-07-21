#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int no;
    ElNode pojok;

} Element;

struct elNode
{
    int bot;
    int top;
} ElNode;

const L=20;
const dx=2.5;


int main (int argc, char **argv)
{
    int nEl = (int) L/dx;
    Element *El = malloc(nEl*sizeof(Element));
    float bt=0;
    float top=0;
    for (int i=0;i<nEl;i++)
    {
        float tp = bt+dx;

        ElNode.bot = i;
        ElNode.top = i+1;

        El -> no = i+1;
        El -> pojok = ElNode;

    }

}