#include "Cuenta.h"
#include <iostream>
using namespace std;

Cuenta::Cuenta() : numCuenta(0), saldo(0) {}
Cuenta::Cuenta(int numeroDeCuenta, double saldo) : numCuenta(numeroDeCuenta), saldo(saldo) {}

double Cuenta::getSaldo() const
{
    return saldo;
}

void Cuenta::deposito(double dineroAAgregar)
{
    saldo += dineroAAgregar;
    cout << "Nuevo saldo: " << saldo << endl;
}

void Cuenta::retiro(double dineroARetirar)
{
    if (dineroARetirar > saldo)
    {
        cout << "Fondos Insuficientes. Tienes: " << saldo << endl;
    }
    else
    {
        saldo -= dineroARetirar;
        cout << "Nuevo saldo: " << saldo << endl;
    }
}