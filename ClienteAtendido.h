// ClienteAtendido.h
#pragma once

#include "Cliente.h" // Incluimos la clase base

class ClienteAtendido : public Cliente {
public:
    // Atributos adicionales para el historial
    double costoTotal;
    bool pagado;

    // Constructor
    ClienteAtendido(Cliente cliente, double _costo, bool _pagado) {
        // Copiamos los datos del cliente base
        nombre = cliente.nombre;
        contacto = cliente.contacto;
        fechaLlegada = cliente.fechaLlegada;
        horaLlegada = cliente.horaLlegada;

        // Asignamos los nuevos atributos
        costoTotal = _costo;
        pagado = _pagado;
    }

    // Constructor por defecto
    ClienteAtendido() {}
};