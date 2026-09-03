#include <stdio.h>

int esPalindromo(char palabra[]){
    int flag = 1;
    int acu = 0; // Cantidad de letras del 0 en adelante
    int acu2 = 0;
    int acuSE = 0; // ACU sin espacios
    
    // Calcular dimensiones del array
    while(flag) {
        if( palabra[acu] ) {
            if( palabra[acu] != ' ') {
                // Acumulador sin espacios
                acuSE++;
            }

            acu++;
        } else {
            // Se acabó el array
            flag = 0;
        }
    }

    char palabra2[acuSE + 1];
    int acuNuevo = 0;

    for(int i = 0; i < acu; i ++){
        if( palabra[i] != ' ') {
            palabra2[acuNuevo] = palabra[i];
            acuNuevo++;

        }
    }
    palabra2[acuNuevo] = '\0';

    // Declaro la extensión del nuevo array teniendo en cuenta los espacios extra para \0 como en cualquier string de C
    char textoRev[acuNuevo + 1];

    // Generar copia invertida
    for( int i = acuNuevo; i > 0; i--) {
        textoRev[acu2] = palabra2[i - 1];
        acu2++;
    }

    textoRev[acu2] = '\0';

    // Compara strings
    for( int i = 0; i < acuNuevo; i++) {
        if(textoRev[i] != palabra2[i]) {
            return 0;
        }
    }
    return 1;
}

int main()
{

    // char texto[] = "pepe";
    // char texto[] = "esperma";
    // char texto[] = "cable";
    // char texto[] = "estructura de datos y problemas diversos";
    // char texto[] = "somos";
    
    // char texto[] = "radar";
    char texto[] = "isaac no ronca asi";
    // char texto[] = "la ruta natural";
    // char texto[] = "anita lava la tina";
    int resultado = esPalindromo(texto);

    if(resultado) {
        printf("\nEs un Palindromo!\n\n");
    } else {
        printf("\n> NO es un Palindromo\n\n");
    }

    return 0;
}