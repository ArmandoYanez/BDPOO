#include "Prestamos.h"

// Constructores
Prestamos::Prestamos()
    : ISBN("N/a"), fechaDePrestamo("N/a"), fechaDeDevolucion("N/a"), miembro(Miembros()){}


Prestamos::Prestamos(const std::string ISBN, const std::string fechaDePrestamo, const std::string fechaDeDevolucion, Miembros miembro)
    : ISBN(ISBN), fechaDePrestamo(fechaDePrestamo), fechaDeDevolucion(fechaDeDevolucion), miembro(miembro)  {}

// Destructor
Prestamos::~Prestamos() {}

// Getters
std::string Prestamos::getISBN() const {
    return ISBN;
}

std::string Prestamos::getFechaDePrestamo() const {
    return fechaDePrestamo;
}

std::string Prestamos::getFechaDeDevolucion() const {
    return fechaDeDevolucion;
}

Miembros Prestamos::getMiembro() const
{
    return miembro;
}

// Setters
void Prestamos::setISBN(const std::string ISBN) {
    this->ISBN = ISBN;
}

void Prestamos::setFechaDePrestamo(const std::string fechaDePrestamo) {
    this->fechaDePrestamo = fechaDePrestamo;
}

void Prestamos::setFechaDeDevolucion(const std::string fechaDeDevolucion) {
    this->fechaDeDevolucion = fechaDeDevolucion;
}

void Prestamos::setMiembro(const Miembros miembro)
{
    this->miembro = miembro;
}
