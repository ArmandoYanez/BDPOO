#include "Autores.h"

// Constructor por defecto
Autores::Autores()
    : nombre("N/a"), apellido("N/a"), fechaDeNacimiento("N/a")
{
}

// Constructor con parámetros
Autores::Autores(const std::string nombre, const std::string apellido, const std::string fechaDeNacimiento)
    : nombre(nombre), apellido(apellido), fechaDeNacimiento(fechaDeNacimiento)  
{
}

// Destructor
Autores::~Autores()
{
}

// Getters
std::string Autores::getNombre() const {
    return nombre;
}

std::string Autores::getApellido() const {
    return apellido;
}

std::string Autores::getFechaDeNacimiento() const {
    return fechaDeNacimiento;
}


// Setters
void Autores::setNombre(const std::string nombre) {
    this->nombre = nombre;
}

void Autores::setApellido(const std::string apellido) {
    this->apellido = apellido;
}

void Autores::setFechaDeNacimiento(const std::string fechaDeNacimiento) {
    this->fechaDeNacimiento = fechaDeNacimiento;
}

