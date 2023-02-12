//
// Created by poloa on 30/01/2023.
//
#include <stdlib.h>
#include "punto2D.h"
#include "stdio.h"
#include "math.h"
//se introducen las coordenadas para crear un punto
tPunto crearPunto (int x, int y)
{
    tPunto creado;
    creado.x=x, creado.y=y;
    return creado;
}
//imprime punto
void imprimirPunto (tPunto punto)
{
    printf("(%d, %d)",punto.x, punto.y);
}

//desplazaremos un punto retornando otro en el return
tPunto desplazarPunto(tPunto punto, int x, int y)
{
    tPunto desplazado;
    desplazado.x = punto.x+x;
    desplazado.y = punto.y+y;
    return desplazado;
}
// halla la diferencia de distancia entre ambos 2 puntos usando pitagoras
float diferenciaPuntos(tPunto p1, tPunto p2)
{
    int cateto1 = abs(p1.x-p2.x);
    int cateto2 = abs(p1.y-p2.y);
    int diferencia = pow(cateto1,2)+pow(cateto2,2);
    return pow(diferencia,0.5);
}