#include <iostream>
#include "Banco.h"
using namespace std;

int main()
{
    Banco banco;

    Cliente *cliente1 = banco.crearCliente(1, "123456789", "Juan Perez");
    Cliente *cliente2 = banco.crearCliente(2, "987654321", "Maria Lopez");

    Cuenta *cuenta1 = banco.crearCuenta(1001, 500.0);
    cuenta1->deposito(200.0);
    cuenta1->retiro(100.0);

    banco.imprimirInforme();

    cout << "Saldo promedio de las cuentas: " << banco.calcularSaldoPromedio() << endl;

    return 0;
}
