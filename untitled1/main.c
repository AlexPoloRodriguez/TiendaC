#include <stdio.h>
#include "punto2D.h"

void main( ) {
    tPunto a = crearPunto(1,3);
    imprimirPunto(a);
    tPunto b = desplazarPunto(a,1,3);
    imprimirPunto(b);
    float dif = diferenciaPuntos(a,b);
    printf("%.2f",dif);
}


