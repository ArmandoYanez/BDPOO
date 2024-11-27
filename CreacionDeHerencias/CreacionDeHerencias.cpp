// CreacionDeHerencias.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "Autores.h"
#include "Libros.h"
#include "Miembros.h"
#include "Prestamos.h"

int main()
{
    // Hora de probar que funciona en este caso comenzaremos creando 2 autores.
    Autores autor1("Armando", "Yanez", "09/02/2004");
    Autores autor2("Esdras", "Gonzales", "12/23/2003");

    // Ahora crearemos libros para estos autores
    Libros libro("Un libro de locura", "Comedia", 2023, 24, autor1); 
    Libros libro2("La vida de un sabio", "Politica", 2020, 3, autor2);

    // Aqui tenemos guardado 2 autores con 2 respectivos libros cada uno, esto nos permite acceder desde el libro al autor, por ejemplo:
    std::cout << "Libro: " << libro.getTitulo()<<std::endl << "Autor: " << libro.getAutor().getNombre() << " " << libro.getAutor().getApellido() << std::endl << "Genero: " << libro.getGenero() << std::endl
        << "Anio de publicacion: " << libro.getAnioDePublicacion() << std::endl << std::endl;
    // Con esta linea de codigo accedemos desde libro a autor, esto con los metodos que se incluyen en el mismo, con esto podemos crear un resumen del libro de forma practica.


    // Ahora crearemos un miembro
    Miembros miembro1("Angel", "Velino M presa #1570", "08/02/2024", 3318002002, libro); // Con esto podemos darnos cuenta que miembro contiene libro y libro autor, entonces podemos usar los metodos para convivir con los datos.

   
    // Por ultimo podemos crear un prestamo, este se creara de la siguiente forma
    Prestamos prestamo("978-3-16-148410-0","02/12/2024", "01/01/2025", miembro1);

    
    std::cout << "Ejemplo de resumen completo apartir de un prestamo: " << std::endl << std::endl;

    // De esta forma podemos crear un resumen de orden "completo como:"
    std::cout << "Libro: " << prestamo.getMiembro().getLibroEnPosecion().getTitulo() << std::endl << "Autor: " << prestamo.getMiembro().getLibroEnPosecion().getAutor().getNombre()
        << " " << prestamo.getMiembro().getLibroEnPosecion().getAutor().getApellido() << std::endl << "Prestado a " << prestamo.getMiembro().getNombre() << " el dia " << prestamo.getFechaDePrestamo() << std::endl;


  
}
