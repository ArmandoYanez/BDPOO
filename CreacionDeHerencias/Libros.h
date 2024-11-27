#pragma once
#include <iostream>
#include "Autores.h"

class Libros
{
public:
	// Constructores
	Libros();

	Libros(std::string titulo, std::string genero, int anioDePublicacion, int cantidadDisponble, Autores autor);

	// Destructor
	~Libros();

	// Getters
	std::string getTitulo() const;
	std::string getGenero() const;
	int getAnioDePublicacion() const;
	int getCantidadDisponible() const;
	Autores getAutor() const;

	// Setters
	void setTitulo(std::string titulo);
	void setGenero(std::string genero);
	void setAnioDePublicacion(int anioDePublicacion);
	void setCantidadDisponible(int cantidadDisponble);
	void setAutor(Autores autor);

private:
	std::string titulo;
	std::string genero;
	int anioDePublicacion;
	int cantidadDisponble;

	// Clase compuesta Autor
	Autores autor;
};

