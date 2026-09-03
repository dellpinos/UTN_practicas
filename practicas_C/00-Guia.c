// Estructuras de control //

// IF
int edad = 20;

if (edad >= 18) {
    printf("Mayor de edad\n");
} else if (edad == 17) {
    printf("Casi mayor\n");
} else {
    printf("Menor de edad\n");
}

// SWITCH
int opcion = 1;

switch (opcion) {
    case 1:
        printf("Opción 1\n");
        break;
    default:
        printf("Otra opción\n");
}

// ITERADORES //
// Con un compilador moderno, podés declarar la variable dentro del for
for (int i = 0; i < 5; i++) {
    printf("Iteración: %d\n", i);
}

int contador = 0;
while (contador < 5) {
    printf("Contador: %d\n", contador);
    contador++;
}

// LEER DATOS DEL USUARIO //
#include <stdio.h>

int main() {
    int numero;
    printf("Ingresa un número: ");
    
    // %d indica que leemos un entero. 
    // &numero le pasa a scanf la "dirección de memoria" de la variable.
    scanf("%d", &numero); 
    
    printf("Ingresaste el: %d\n", numero);
    return 0;
}

// FUNCIONES //
// Tipo_que_devuelve | Nombre | (Tipo parametro1, Tipo parametro2)
int sumar(int a, int b) {
    return a + b;
}

void saludar() {
    // 'void' significa vacío. Se usa cuando la función no tiene 'return'
    printf("Hola Martin\n"); 
}

int main() {
    int resultado = sumar(5, 10);
    saludar();
    return 0;
}

// ARRAYS //
// Declaras un array de 5 enteros. Una vez creado, no puedes agregar un sexto elemento.
int numeros[5] = {10, 20, 30, 40, 50};

// Se accede y se modifica exactamente igual que en JS
numeros[0] = 15; 
printf("El primer numero es %d\n", numeros[0]);

// STRINGS //
// Se crea un array de letras
char nombre[] = "Martin";

// ESTRUCTURAS //
// 1. Defines la "plantilla" de la estructura
struct Persona {
    int edad;
    float altura;
};

int main() {
    // 2. Creas una variable usando esa estructura
    struct Persona usuario;
    
    // 3. Accedes a las propiedades con el punto, igual que en JS
    usuario.edad = 38;
    usuario.altura = 1.68;
    
    printf("Edad: %d, Altura: %f\n", usuario.edad, usuario.altura);
    return 0;
}