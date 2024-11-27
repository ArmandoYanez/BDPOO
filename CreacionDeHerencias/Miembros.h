#pragma once
#include <iostream>
#include "Libros.h"

class Miembros
{
public:
	// Constructores
	Miembros();  // Constructor por defecto

	Miembros(std::string nombre, std::string direccion, std::string fechaDeRegistro, int telefono, Libros libroEnPosecion);

	// Destructor
	~Miembros();

	// Getters
	std::string getNombre() const;
	std::string getDireccion() const;
	std::string getFechaDeRegistro() const;
	int getTelefono() const;
	Libros getLibroEnPosecion() const;
	

	// Setters
	void setNombre(const std::string nombre);
	void setDireccion(const std::string direccion);  
	void setFechaDeRegistro(const std::string fechaDeRegistro);  
	void setTelefono(int telefono);
	void setLibroEnPosecion(const Libros libroEnPosecion);  
	  

private:
	std::string nombre;
	std::string direccion;
	std::string fechaDeRegistro;
	int telefono;

	Libros libroEnPosecion;  
	
};