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
    libro libroActual;
};

#endif //PELGRUPAL_USUARIO_H
