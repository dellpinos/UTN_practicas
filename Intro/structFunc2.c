#include <stdio.h>
#include <string.h>

const int cantSensores = 3;
const int sensorBuscado = 2;

struct Sensor
{
    int id;
    char tipo[20];
    float valor_actual;
    int estado;
};

void calibrarSensor(struct Sensor *sensor)
{
    sensor->valor_actual = 0.0;
    sensor->estado = 1;
    strcpy(sensor->tipo, "Calibrado");
}

int buscarSensor(struct Sensor sensores[], int id)
{
    for (int i = 0; i < cantSensores; i++)
    {
        if (id == sensores[i].id)
        {
            printf("Sensor encontrardo: %d \n", id);
            return sensores[i].id;
        }
    }

    return -1;
}

int main(void)
{
    printf("-- Inicia Programa -- \n");
    struct Sensor sensores[cantSensores];

    for (int i = 0; i < cantSensores; i++)
    {
        sensores[i].id = i;
        sensores[i].estado = 0;
        sensores[i].valor_actual = 12.2;
        strcpy(sensores[i].tipo, "Default");
    }

    printf("-- Valores Default de las variables: -- \n");
    for (int i = 0; i < cantSensores; i++)
    {
        printf("ID: %d\n", sensores[i].id);
        printf("ESTADO: %d\n", sensores[i].estado);
        printf("VALOR: %.2f\n", sensores[i].valor_actual);
        printf("TIPO: %s\n\n\n", sensores[i].tipo);
    }

    for (int i = 0; i < cantSensores; i++)
    {
        calibrarSensor(&sensores[i]);
    }

    printf("-- Sensores Calibrados: -- \n");

    for (int i = 0; i < cantSensores; i++)
    {
        printf("ID: %d\n", sensores[i].id);
        printf("ESTADO: %d\n", sensores[i].estado);
        printf("VALOR: %.2f\n", sensores[i].valor_actual);
        printf("TIPO: %s\n\n\n", sensores[i].tipo);
    }

    printf("Buscar sensor Nro: %d\n", sensorBuscado);
    int sensorEncontrado = buscarSensor(sensores, sensorBuscado);

    printf("Se retorna el sensor Nro: %d\n", sensorEncontrado);

    printf("-- Fin de Programa -- \n");
}
