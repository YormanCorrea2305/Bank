#include "Cliente.h"

// Constructor por defecto
Cliente::Cliente() : id(0), nombre(""), telefono("") {}

// Constructor con parámetros
Cliente::Cliente(int id, string nombre, string telefono)
    : id(id), nombre(nombre), telefono(telefono) {}

// Métodos getters
int Cliente::getId() const
{
    return id;
}

string Cliente::getNombre() const
{
    return nombre;
}

string Cliente::getTelefono() const
{
    return telefono;
}
