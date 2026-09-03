#include <stdio.h>

int encontrarMayor(int nums[]) {

    int mayor = 0;

    for(int i = 0; i < 10; i++) {
        printf("Evaluado indice: %d", i);
        printf(" Número: %d \n", nums[i]);

        if( nums[i] > mayor) {
            mayor = nums[i];
        }
    }

    return mayor;

}


int main() {

    int vals[10] = {4, 5, 7, 77, 23, 1, 0, -44, 2, 11};

    int resultado = encontrarMayor(vals);

    printf("Resultado: %d \n\n", resultado);
    
}