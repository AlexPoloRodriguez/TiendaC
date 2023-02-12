//
// Created by poloa on 30/01/2023.
//

#ifndef UNTITLED1_PUNTO2D_H
#define UNTITLED1_PUNTO2D_H

#endif //UNTITLED1_PUNTO2D_H

typedef struct {
    int x;
    int y;
}tPunto;

//crea un punto con las coordenadas dadas
tPunto crearPunto(int x, int y);


//imprime las cordenadas de dicho punto
void imprimirPunto(tPunto punto);

//desplazaremos un punto retornando otro en el return
tPunto desplazarPunto(tPunto punto, int x, int y);

// halla la diferencia de distancia entre ambos 2 puntos usando pitagoras
float diferenciaPuntos(tPunto p1, tPunto p2);