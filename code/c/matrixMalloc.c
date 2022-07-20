#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    // program ini harus punya input 2, kalau tidak, maka kita perlu info ke pengguna
    if (argc!=3){
        printf("Tolong masukkan 2 argumen: NamaApp m n");
        return -1;
    }
    int m=atoi(argv[1]);
    int n=atoi(argv[2]);
    double **Array;
    Array = (double **)malloc(m*sizeof(double *));

    for (int i=0;i<m;i++){
        Array[i]=(double *)malloc(n*sizeof(double));
        for (int j=0;j<n;j++){
            Array[i][j]=j;
        }
    }
    printf("matriks %d x %d:\n",m,n);
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%f ",Array[i][j]);
        }
        printf("\n");
    }

    //free data
    for (int i=0;i<m;i++){
        free(Array[i]);
    }
    free(Array);





}