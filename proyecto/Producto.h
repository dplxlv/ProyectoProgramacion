#pragma once
#include <string>

struct Producto {
	std::string registroId; 
	std::string codigo;
	std::string nombre;
	std::string categoria;
	std::string precio;
	std::string stock;

	std::string aLineaTexto() const {
		return registroId + "," + codigo + "," + nombre + "," + categoria + "," + precio + "," + stock;
	}
};
