#include "Banco.h"
#include <iostream>
using namespace std;

Banco::Banco() {}

Cliente *Banco::crearCliente(int id, string telefono, string nombre)
{
    clientes.push_back(Cliente(id, telefono, nombre));
    return &clientes.back();
}

Cuenta *Banco::crearCuenta(int numCuenta, double saldoInicial)
{
    cuentas.push_back(Cuenta(numCuenta, saldoInicial));
    return &cuentas.back();
}

double Banco::calcularSaldoPromedio() const
{
    if (cuentas.empty())
        return 0.0;
    double totalSaldo = 0.0;
    for (const Cuenta &cuenta : cuentas)
    {
        totalSaldo += cuenta.getSaldo();
    }
    return totalSaldo / cuentas.size();
}

void Banco::imprimirInforme() const
{
    cout << "==== INFORME DEL BANCO ====" << endl;
    for (const Cuenta &cuenta : cuentas)
    {
        cout << "Cuenta N°: " << cuenta.getSaldo() << endl;
    }
    cout << "============================" << endl;
}
