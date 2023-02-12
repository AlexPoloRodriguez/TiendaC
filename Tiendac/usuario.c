//
// Created by poloa on 12/02/2023.
//

#include "usuario.h"
#include <stdio.h>
#include <string.h>

void anadirU(Tusuario user){
    for(int i = 0; i<255; i++){
        if(usuarios[i].nombre != NULL){
            usuarios[i] = user;
        }
        printf("%c",usuarios[i]);
    }

}
Tusuario crearU(char nombre, char apellidos, char contrasena){
    Tusuario user;
    strcpy(user.nombre,&nombre);
    strcpy(user.apellidos,&apellidos);
    strcpy(user.contrasena,&contrasena);

    return user;
}