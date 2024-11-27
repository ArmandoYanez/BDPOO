#include "Miembros.h"

// Constructores
Miembros::Miembros()
    : nombre("N/a"), direccion("N/a"), fechaDeRegistro("N/a"), telefono(0), libroEnPosecion(Libros())
{
}

Miembros::Miembros(std::string nombre, std::string direccion, std::string fechaDeRegistro, int telefono, Libros libroEnPosecion)
    : nombre(nombre), direccion(direccion), fechaDeRegistro(fechaDeRegistro), telefono(telefono), libroEnPosecion(libroEnPosecion)
{
}

// Destructor
Miembros::~Miembros()
{
}

// Getters
std::string Miembros::getNombre() const {
    return nombre;
}

std::string Miembros::getDireccion() const {
    return direccion;
}

std::string Miembros::getFechaDeRegistro() const {
    return fechaDeRegistro;
}

int Miembros::getTelefono() const {
    return telefono;
}

Libros Miembros::getLibroEnPosecion() const {
    return libroEnPosecion;
}


// Setters
void Miembros::setNombre(const std::string nombre) {
    this->nombre = nombre;
}

void Miembros::setDireccion(const std::string direccion) {
    this->direccion = direccion;
}

void Miembros::setFechaDeRegistro(const std::string fechaDeRegistro) {
    this->fechaDeRegistro = fechaDeRegistro;
}

void Miembros::setTelefono(int telefono) {
    this->telefono = telefono;
}

void Miembros::setLibroEnPosecion(const Libros libroEnPosecion) {
    this->libroEnPosecion = libroEnPosecion;
}
