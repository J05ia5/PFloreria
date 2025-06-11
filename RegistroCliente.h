// RegistroCliente.h
#pragma once

#include <string>
#include <list> // Usaremos una lista de C++ para el historial de pedidos

using namespace std;

// Estructura simple para un pedido individual
struct Pedido {
    string fecha;
    string listaArticulos; // Para simplificar, un solo string. Podría ser otra lista.
    double precioTotal;
    bool pagado;
};

// Clase principal para el registro de clientes en la lista
class RegistroCliente {
public:
    string nombre;
    string contacto;
    list<Pedido> historialPedidos; // Un cliente puede tener muchos pedidos

    // Constructor
    RegistroCliente(string _nombre, string _contacto) {
        nombre = _nombre;
        contacto = _contacto;
    }

    // Constructor por defecto
    RegistroCliente() {}
};