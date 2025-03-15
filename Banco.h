#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;

class Banco {
public:
    vector<Cliente> clientes;
    vector<Cuenta> cuentas;

    Cliente* crearCliente(int id, string nombre, int telefono);
    Cuenta* crearCuenta(int numeroCuenta, double saldoInicial);
    Cuenta* buscarCuenta(int numeroCuenta);
    Cliente* buscarCliente(int id);
    double calcularPromedioSaldos();
    void mostrarInforme();
};

#endif
#ifndef BANCO_H
#define BANCO_H

#include <vector>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;

class Banco
{
private:
    vector<Cliente> clientes;
    vector<Cuenta> cuentas;

public:
    Banco();
    Cliente *crearCliente(int id, string telefono, string nombre);
    Cuenta *crearCuenta(int numCuenta, double saldoInicial = 0.0);
    double calcularSaldoPromedio() const;
    void imprimirInforme() const;
};

#endif // BANCO_H