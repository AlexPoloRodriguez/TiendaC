//
// Created by poloa on 09/02/2023.
//

#ifndef UNTITLED2_RACIONAL_H
#define UNTITLED2_RACIONAL_H

#endif //UNTITLED2_RACIONAL_H

typedef struct{
    int numerador;
    int denominador;
} Racional;

int mcd(int op1,int op2);
Racional multRacional(Racional r1, Racional r2);
Racional sumarRacional(Racional r1, Racional r2);
void simplificar(Racional * r1);
void escribir(Racional r);
Racional crearRacional(int numerador, int denominador);