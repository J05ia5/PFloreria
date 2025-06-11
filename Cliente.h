// Cliente.h
#pragma once // Evita que el archivo se incluya múltiples veces

#include <string>

// Usamos el espacio de nombres std para no tener que escribir std:: a cada rato
using namespace std;

class Cliente {
public:
    // Atributos del cliente en la cola
    string nombre;
    string contacto;
    string fechaLlegada;
    string horaLlegada;

    // Constructor para crear un cliente fácilmente
    Cliente(string _nombre, string _contacto, string _fecha, string _hora) {
        nombre = _nombre;
        contacto = _contacto;
        fechaLlegada = _fecha;
        horaLlegada = _hora;
    }

    // Constructor por defecto (necesario para algunas operaciones de las colecciones)
    Cliente() {}
};