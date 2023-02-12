//
// Created by poloa on 12/02/2023.
//

#ifndef UNTITLED4_USUARIO_H
#define UNTITLED4_USUARIO_H

#endif //UNTITLED4_USUARIO_H

typedef struct{
    char *nombre;
    char *apellidos;
    char *contrasena;
}Tusuario;

Tusuario usuarios[255];
void anadirU(Tusuario user);
Tusuario crearU(char nombre, char apellidos, char contrasena);