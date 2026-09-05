#include <stdio.h>

int main()
{
    int edad;     // reserva 4B en memoria -> el número más alto sería 2^31 - 1 = 2.147.483.647 (4B = 32b - 1b para el signo)
    float precio; // reserva 4B en memoria
    char inicial; // reserva 1B en memoria

    edad = 38;
    printf("%d", edad);
    
    edad = 132123;
    printf("%d", edad);
    
    edad = 31231;
    printf("%d", edad);

    return 0;
}
