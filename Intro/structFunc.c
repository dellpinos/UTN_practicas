#include <stdio.h>
#include <string.h>

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
}

int main(void)
{
    struct Sensor sensor_patio;

    sensor_patio.id = 1;
    sensor_patio.estado = 0;
    sensor_patio.valor_actual = 45.5;

    strcpy(sensor_patio.tipo, "Externo");

    printf("ID: %d\n", sensor_patio.id);
    printf("ESTADO: %d\n", sensor_patio.estado);
    printf("VALOR: %.2f\n", sensor_patio.valor_actual);
    printf("TIPO: %s\n\n\n", sensor_patio.tipo);

    calibrarSensor(&sensor_patio);

    printf("ID: %d\n", sensor_patio.id);
    printf("ESTADO: %d\n", sensor_patio.estado);
    printf("VALOR: %.2f\n", sensor_patio.valor_actual);
    printf("TIPO: %s\n", sensor_patio.tipo);
}
