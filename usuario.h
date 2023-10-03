//
// Created by aldry on 03/10/2023.
//

#ifndef PELGRUPAL_USUARIO_H
#define PELGRUPAL_USUARIO_H
#include "libro.h"
class Usuario{
public:
    std::string nombre;
    std::string dni;
    std::string historial;
    std::string libroActualUsuario;

    std::string libroActual(){
        return libroActualUsuario;
    }
    void devolverLibro(){
        libroActualUsuario = "";

    }
    void sacarLibro(libro libro){
        if (!libro.duenhoActual.empty() && !libroActualUsuario.empty()){
            libro.duenhoActual = nombre;
            libroActualUsuario = libro.nombre;
        }
    }
};



#endif //PELGRUPAL_USUARIO_H
