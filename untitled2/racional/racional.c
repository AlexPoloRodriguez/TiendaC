//
// Created by poloa on 09/02/2023.
//
#include <stdio.h>
#include "racional.h"
#include  <assert.h>
#include "math.h"

Racional crearRacional(int numerador, int denominador){
    assert(denominador !=0);
    if (denominador<0){
        denominador = -denominador;
        numerador = -numerador;
    }
    Racional res;
    res.numerador = numerador;
    res.denominador = denominador;

    return res;
}
Racional sumarRacional(Racional sumando1, Racional sumando2){

    // Sacamos los numeradores y denominadores de los dos sumandos
    int numerador1 = sumando1.numerador;
    int denominador1 = sumando1.denominador;
    int numerador2 = sumando2.numerador;
    int denominador2 = sumando2.denominador;

    int nuevoDenominador; // Nuevo denominador de la fraccion resultante
    int nuevoNumerador;   // Nuevo numerador de la fracción resultante

    // El nuevo denominador común del resultado idealmente seria el mínimo comun múltiplo, pero
    // para simplificar hacemos que sea la multiplicación de ambos denominadores
    nuevoDenominador = denominador1 * denominador2;

    // A partir del nuevo denominador común, calculamos los nuevos numeradores de los sumandos
    numerador1 = numerador1 * denominador2;
    numerador2 = numerador2 * denominador1;

    // Calculamos el numerador del resultado
    nuevoNumerador = numerador1 + numerador2;

    // Creamos la fracción resultado y lo devolvemos
    Racional r;
    r.numerador = nuevoNumerador;
    r.denominador = nuevoDenominador;
    return (r);
}
Racional multRacional(Racional r1, Racional r2){
    Racional res;
    res.numerador = r1.numerador*r2.numerador;
    res.denominador = r1.denominador*r2.denominador;

    return res;
}

int mcd(int op1, int op2){
    assert(op1>=0 && op2>=0);
    while(op2!=0){
        int resto = op1%op2;
        op1 = op2;
        op2 = resto;
    }

    return op1;
}
void simplificar(Racional * r1){
    int mcda;
    mcda = mcd(abs(r1->numerador),abs(r1->denominador));
    r1->numerador = r1->numerador/mcda;
    r1->denominador = r1->denominador/mcda;
}

void escribir(Racional r){
    if(r.numerador==0 || r.denominador==1){
        printf("%d",r.numerador);
    }else{
        printf("%d/%d",r.numerador,r.denominador);
    }

}