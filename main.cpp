#include <iostream>
#include "Pila.h"
#include "usuario.h"
#include "libro.h"

Pila<libro> registroInicial(Pila<libro> listaLibros){
    libro libro;
    std::string vacio;
    libro.duenhoActual = vacio;
    libro.categoria =  "Ciencia Ficción";
    libro.nombre =  "El Enigma de las Estrellas";
    listaLibros.insert(libro);

    libro.categoria =  "Romance";
    libro.nombre =  "Amor en París";
    listaLibros.insert(libro);

    libro.categoria =  "Aventura";
    libro.nombre =  "El Tesoro Perdido";
    listaLibros.insert(libro);

    libro.categoria =  "Misterio";
    libro.nombre =  "El Misterio del Castillo Embrujado";
    listaLibros.insert(libro);

    libro.categoria =  "Fantasía";
    libro.nombre =  "El Reino de las Sombras";
    listaLibros.insert(libro);

    libro.categoria =  "Acción";
    libro.nombre =  "Cazadores de Peligro";
    listaLibros.insert(libro);

    libro.categoria =  "Historia";
    libro.nombre =  "Los Secretos de la Antigua Roma";
    listaLibros.insert(libro);

    libro.categoria =  "Biografía";
    libro.nombre =  "La Vida de Albert Einstein";
    listaLibros.insert(libro);

    libro.categoria =  "Terror";
    libro.nombre =  "Pesadillas en la Mansión Abandonada";
    listaLibros.insert(libro);

    libro.categoria =  "Autoayuda";
    libro.nombre =  "Enfrentando tus Miedos";
    listaLibros.insert(libro);

    libro.categoria =  "Ciencia Ficción";
    libro.nombre =  "Viaje a las Estrellas";
    listaLibros.insert(libro);

    libro.categoria =  "Romance";
    libro.nombre =  "Amor Prohibido";
    listaLibros.insert(libro);

    libro.categoria =  "Aventura";
    libro.nombre =  "La Búsqueda del Tesoro Dorado";
    listaLibros.insert(libro);

    libro.categoria =  "Misterio";
    libro.nombre =  "El Caso del Detective Novato";
    listaLibros.insert(libro);

    libro.categoria =  "Fantasía";
    libro.nombre =  "El Reino de los Dragones";
    listaLibros.insert(libro);

    libro.categoria =  "Acción";
    libro.nombre =  "Misión Imposible";
    listaLibros.insert(libro);

    libro.categoria =  "Historia";
    libro.nombre =  "Los Secretos de la Revolución";
    listaLibros.insert(libro);

    libro.categoria =  "Biografía";
    libro.nombre =  "La Vida de Marie Curie";
    listaLibros.insert(libro);

    libro.categoria =  "Terror";
    libro.nombre =  "La Casa de los Horrores";
    listaLibros.insert(libro);

    libro.categoria =  "Autoayuda";
    libro.nombre =  "Descubriendo la Felicidad Interior";
    listaLibros.insert(libro);
    return listaLibros;
}
void librosDisponibles(Pila<libro> listaLibros){

    for(int i = 0; i < listaLibros.elementos;i++)
    {

        //if(listaLibros.datos[i].duenhoActual.empty()){
            std::cout << listaLibros.datos[i].nombre;
            std::cout << listaLibros.elementos;
        //}

    }
    std::cout << std::endl;
}

int main() {
    Pila<libro> listaLibros;
    listaLibros = registroInicial(listaLibros);
    librosDisponibles(listaLibros);
    return 0;
}
