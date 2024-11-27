#include "Libros.h"

// Constructores
Libros::Libros() : titulo("N/a"), genero("N/a"), anioDePublicacion(0), cantidadDisponble(0), autor(Autores()) {}

Libros::Libros(std::string titulo, std::string genero, int anioDePublicacion, int cantidadDisponble, Autores autor)
    : titulo(titulo), genero(genero), anioDePublicacion(anioDePublicacion), cantidadDisponble(cantidadDisponble), autor(autor) {}


// Destructor
Libros::~Libros() {}

// Getters
std::string Libros::getTitulo() const {
    return titulo;
}

std::string Libros::getGenero() const {
    return genero;
}

int Libros::getAnioDePublicacion() const {
    return anioDePublicacion;
}

int Libros::getCantidadDisponible() const {
    return cantidadDisponble;
}

Autores Libros::getAutor() const {
    return autor;
}

// Setters
void Libros::setTitulo(const std::string titulo) {
    this->titulo = titulo;
}

void Libros::setGenero(const std::string genero) {
    this->genero = genero;
}

void Libros::setAnioDePublicacion(int anioDePublicacion) {
    this->anioDePublicacion = anioDePublicacion;
}

void Libros::setCantidadDisponible(int cantidadDisponble) {
    this->cantidadDisponble = cantidadDisponble;
}

void Libros::setAutor(const Autores autor) {
    this->autor = autor;
}
