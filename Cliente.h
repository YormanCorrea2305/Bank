#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{
private:
    int id;
    string telefono;
    string nombre;

public:
    Cliente();
    Cliente(int id, string telefono, string nombre);

    int getId() const;
    string getTelefono() const;
    string getNombre() const;
};

#endif // CLIENTE_H
