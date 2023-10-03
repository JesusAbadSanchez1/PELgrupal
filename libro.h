//
// Created by aldry on 03/10/2023.
//

#ifndef PELGRUPAL_LIBRO_H
#define PELGRUPAL_LIBRO_H
class libro{
public:
    std::string nombre;
    std::string categoria;
    std::string duenhoActual;
    bool disponible = duenhoActual.empty();
};
#endif //PELGRUPAL_LIBRO_H
