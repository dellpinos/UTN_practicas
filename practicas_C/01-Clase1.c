#include <stdio.h>

// Inicio Programa (Imprimir Datos)

int main() {

    // Declaro Variables
    int num = 89;
    const float pi = 3.141592654;
    
    // Inicio
    printf("El valor de la variable 'num' es: %d \n", num);
    printf("Cambia su valor: \n");
    
    scanf("%d", &num);


    printf("El nuevo valor de 'num' es: %d \n", num);
    printf("También tengo una constante llamada 'pi' cuyo valor es: %f \n", pi);

    printf("Adios!");


    // Fin Inicio
    return 0;
}