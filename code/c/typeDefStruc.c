#include <stdio.h>
#include <string.h>

typedef struct Mobil {
    int harga;
    int maxSpeed;
    char *engine;
} Mobil;


int main ()
{
    Mobil Avanza = {130,200,"XX1454"};

    printf("Avanza:\n");
    printf("harga : %d\n",Avanza.harga);
    printf("maxSpeed : %d\n",Avanza.maxSpeed);
    printf("engine : %s\n",Avanza.engine);
}