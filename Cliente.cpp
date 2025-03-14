#include <iostream>
#include "Cliente.h"
using namespace std;

/* Constructor vacio. Instancia con valores iniciales */
Cliente::Cliente()
{
    id = 0;
    telefono = 0;
    nombre = "";
}

/* Constructor con valores reales */
Cliente::Cliente(int id, int telefono, string nombre)
{
    id = cedula;
    telefono = celular;
    nombre = sunombre;
}