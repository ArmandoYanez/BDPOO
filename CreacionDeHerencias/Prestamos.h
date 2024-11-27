#pragma once
#include <iostream>
#include "Miembros.h"

class Prestamos 
{
public:
	// Constructores
	Prestamos();

	Prestamos(std::string ISBN, std::string fechaDePrestamo, std::string fechaDeDevolucion, Miembros miembro);

	// Destructor
	~Prestamos();

    // Getters
    std::string getISBN() const;
    std::string getFechaDePrestamo() const;
    std::string getFechaDeDevolucion() const;
    Miembros getMiembro() const;

    // Setters
    void setISBN(const std::string ISBN);
    void setFechaDePrestamo(const std::string fechaDePrestamo);
    void setFechaDeDevolucion(const std::string fechaDeDevolucion);
    void setMiembro(const Miembros miembro);


private:
	std::string ISBN;
	std::string fechaDePrestamo;
	std::string fechaDeDevolucion;

	Miembros miembro;
};

