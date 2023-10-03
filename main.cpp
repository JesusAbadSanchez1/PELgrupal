#include <iostream>
#include <list>
#include "usuario.h"
#include "libro.h"

void registroInicial(std::list<libro> listaLibros){
    libro libro;
    libro.duenhoActual = "";
    libro.categoria =  "Ciencia Ficción";
    libro.nombre =  "El Enigma de las Estrellas";
    listaLibros.push_back(libro);

    libro.categoria =  "Romance";
    libro.nombre =  "Amor en París";
    listaLibros.push_back(libro);

    libro.categoria =  "Aventura";
    libro.nombre =  "El Tesoro Perdido";
    listaLibros.push_back(libro);

    libro.categoria =  "Misterio";
    libro.nombre =  "El Misterio del Castillo Embrujado";
    listaLibros.push_back(libro);

    libro.categoria =  "Fantasía";
    libro.nombre =  "El Reino de las Sombras";
    listaLibros.push_back(libro);

    libro.categoria =  "Acción";
    libro.nombre =  "Cazadores de Peligro";
    listaLibros.push_back(libro);

    libro.categoria =  "Historia";
    libro.nombre =  "Los Secretos de la Antigua Roma";
    listaLibros.push_back(libro);

    libro.categoria =  "Biografía";
    libro.nombre =  "La Vida de Albert Einstein";
    listaLibros.push_back(libro);

    libro.categoria =  "Terror";
    libro.nombre =  "Pesadillas en la Mansión Abandonada";
    listaLibros.push_back(libro);

    libro.categoria =  "Autoayuda";
    libro.nombre =  "Enfrentando tus Miedos";
    listaLibros.push_back(libro);

    libro.categoria =  "Ciencia Ficción";
    libro.nombre =  "Viaje a las Estrellas";
    listaLibros.push_back(libro);

    libro.categoria =  "Romance";
    libro.nombre =  "Amor Prohibido";
    listaLibros.push_back(libro);

    libro.categoria =  "Aventura";
    libro.nombre =  "La Búsqueda del Tesoro Dorado";
    listaLibros.push_back(libro);

    libro.categoria =  "Misterio";
    libro.nombre =  "El Caso del Detective Novato";
    listaLibros.push_back(libro);

    libro.categoria =  "Fantasía";
    libro.nombre =  "El Reino de los Dragones";
    listaLibros.push_back(libro);

    libro.categoria =  "Acción";
    libro.nombre =  "Misión Imposible";
    listaLibros.push_back(libro);

    libro.categoria =  "Historia";
    libro.nombre =  "Los Secretos de la Revolución";
    listaLibros.push_back(libro);

    libro.categoria =  "Biografía";
    libro.nombre =  "La Vida de Marie Curie";
    listaLibros.push_back(libro);

    libro.categoria =  "Terror";
    libro.nombre =  "La Casa de los Horrores";
    listaLibros.push_back(libro);

    libro.categoria =  "Autoayuda";
    libro.nombre =  "Descubriendo la Felicidad Interior";
    listaLibros.push_back(libro);
}
void librosDisponibles(std::list<libro> listaLibros){
    for(libro libro : listaLibros)
    {
        if(libro.duenhoActual.empty()){
            std::cout << libro.nombre;
        }
    }
    std::cout << std::endl;
}

int main() {
    std::list<libro> listaLibros;
    registroInicial(listaLibros);
    librosDisponibles(listaLibros);
    return 0;
}
