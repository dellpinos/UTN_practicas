#include <stdio.h>;

void noFunciona(int copia) {
    copia = 20;
}

void siFunciona(int *p) {
    *p = 20;
}

int main(void) {

    int i = 10;
    noFunciona(i);
    printf("Después de noFunciona: %d\n", i);

    siFunciona(&i);
    printf("Después de siFunciona: %d\n", i);


    int numero;
    numero = 12;

    printf("Número 12: %d \n\n", numero);

    int *direc = &numero;

    printf(" Dirección: %p \n\n", direc);

    return 0;

}