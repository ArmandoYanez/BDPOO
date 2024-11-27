#pragma once
#include <iostream>
#include <string>

class Autores
{
public:
    // Constructores
    Autores();

    Autores(const std::string nombre, const std::string apellido, const std::string fechaDeNacimiento);

    // Destructor
    ~Autores();

    // Getters
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getFechaDeNacimiento() const;

    // Setters
    void setNombre(const std::string nombre);
    void setApellido(const std::string apellido);
    void setFechaDeNacimiento(const std::string fechaDeNacimiento);
   

private:
    std::string nombre;
    std::string apellido;
    std::string fechaDeNacimiento;
};
