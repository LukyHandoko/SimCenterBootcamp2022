#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;float y=RAND_MAX;
    int *ptrX=&x;

    printf("ptr : %p\n",ptrX);
    printf("value that pointed out : %d\n",*ptrX);
    printf("nilai y = %f\n",y);
    return 0;
}