#include <stdio.h>

int main() {

    int hs,mins,segs,aux;

    printf("Ingresa una cantidad de segundos \n\n");
    scanf("%d", &segs);

    aux = (segs % 60);
    mins = (segs - aux) / 60;
    segs = aux;

    aux = (mins % 60);
    hs = (mins - aux) / 60;

    mins = aux;
    aux = 0;

    printf("Son :%d", hs);
    printf("horas. %d", mins);
    printf("minutos. %d", segs);
    printf("segundos. \n\n");

    printf("Fin del programa");
    return 0;
}




// Intercambiar números

// #include <stdio.h>

// int main() {

//     // Declarar Variables
//     int numA,numB,mem;

//     // Pedir valores al usuario
//     printf("Dame un primer valor: \n");
//     scanf("%d", &numA);
//     printf("Dame un segundo valor: \n");
//     scanf("%d", &numB);

//     // Proceso
//     mem = numA;
//     numA = numB;
//     numB = mem;

//     printf("Ahora los retorno desordenados: \n\n");
//     printf("Primer número: %d \n", numA);

//     printf("Aegundo número: %d \n", numB);
//     printf("Fin...");

//     // Fin de programa
//     return 0;
// }