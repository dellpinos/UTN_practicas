#include <stdio.h>

// Inicio Programa (Promedio Pesos)
int main() {
    // Declaro Variables
    float peso1,peso2,peso3,peso4,prom;
    
    // Inicio
    printf("Bienvenido al programa de promedio de pesos \n\n");

    // Ingreso de datos
    printf("Por favor indique el peso de la primer persona: \n");
    scanf("%f", &peso1);
    printf("Por favor indique el peso de la segunda persona: \n");
    scanf("%f", &peso2);
    printf("Por favor indique el peso de la tercera persona: \n");
    scanf("%f", &peso3);
    printf("Por favor indique el peso de la cuarta persona: \n");
    scanf("%f", &peso4);

    // Proceso
    prom = (peso1 + peso2 + peso3 + peso4)/4;

    // Imprimo el resultado
    printf("El peso promedio entre estas cuatro personas es de: %f \n", prom);

    // Fin Inicio
    return 0;
}