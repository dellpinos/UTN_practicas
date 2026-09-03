#include <stdio.h>

struct Medicamento
{
    int codigo;
    float precio;
};

float sumaPrecio(struct Medicamento meds[]) {
    float total = 0;

    for( int i = 0; i < 3; i++) {
        total = meds[i].precio + total;
    };

    return total;
}

int main()
{

    struct Medicamento med1 = {12,12.3};

    struct Medicamento med2 = {1,1.33};

    struct Medicamento med3 = {2,526.1};

    struct Medicamento conjunto[3] = {med1, med2, med3};

    float total = sumaPrecio(conjunto);

    printf("Suma total de todos los precios: %.2f", total);

    return 0;
}

// gcc -Wall -Wextra tu_archivo.c -o tu_programa
// ./tu_programa