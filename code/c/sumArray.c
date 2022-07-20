#include <stdio.h>

int sumArray(int *ptr,int lenArray);

int main (int argc,char **argv){
    int intArray[7]={1,2,3,4,5,6,7};
    int sumAll=sumArray(intArray,7);
    printf("sum of all inside the array is %d\n",sumAll);

}

int sumArray(int *ptr,int lenArray){
    int sum=0;
    for (int i=0;i<lenArray;i++,ptr++){
        sum+=*ptr;
    }
    return sum;

}