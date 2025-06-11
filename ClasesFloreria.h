#pragma once
using namespace std;
using namespace System;
using namespace System::Collections::Generic;


namespace ClasesFloreria {
	public ref class datos
	{

	private:
		String^ Nombre;
		String^ Contacto;
		String^ Hora_llegada;

	public:
		datos(String^ Nombre, String^ Contacto, String^ Hora_llegada) {
			this->Nombre = Nombre;
			this->Contacto = Contacto;
			this->Hora_llegada = Hora_llegada;
		}
		String^ getNombre() { return Nombre; }
		String^ getContacto() { return Contacto; }
		String^ getHora_llegada() { return Hora_llegada; }
		void setNombre(String^ _Nombre) { Nombre = _Nombre; }
		void setContacto(String^ _Contacto) { Contacto = _Contacto; }
		void setHora_llegada(String^ _Hora_llegada) { Hora_llegada = _Hora_llegada; }
	};


	public ref class cola_floreria
	{
	private:
		LinkedList<datos^>^ cola; //defino la decola 

	public:
		cola_floreria() {
			cola = gcnew LinkedList<datos^>();
		}

		void AgregarInicio(datos^ c) {
			cola->AddFirst(c);
		}

		void AgregarFinal(datos^ c) {
			cola->AddLast(c);
		}

		datos^ EliminarInicio() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->First->Value;
			cola->RemoveFirst();
			return dato;
		}

		datos^ EliminarFinal() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->Last->Value;
			cola->RemoveLast();
			return dato;
		}

		LinkedList<datos^>^ ObtenerLista() {
			return cola;
		}

		int ObtenerCantidad() {
			return cola->Count;
		}
	};

	public ref class pila_floreria
	{
	private:
		Stack <datos^>^ pila; //defino la pila 
	public:
		pila_floreria() {
			pila = gcnew Stack<datos^>();
		}
		void Agregar(datos^ c) {
			pila->Push(c);
		}
		datos^ Eliminar() {
			if (pila->Count == 0) return nullptr;
			datos^ dato = pila->Peek();
			pila->Pop();
			return dato;
		}
		int ObtenerCantidad() {
			return pila->Count;
		}
	};

	public ref class datos_atencion
	{
	private:
		datos^ cliente;
		String^ direccion;
	public:
		datos_atencion(datos^ paciente, String^ direccion) {
			this->cliente = paciente;
			this->direccion = direccion;
		}
		datos^ getcliente() { return cliente; }
		String^ getdireccion() { return direccion; }

		void setcliente(datos^ _cliente) { cliente = _cliente; }
		void setsexo(String^ _direccion) { direccion = _direccion; }

	};

	public ref class lista_Atencion_floreria
	{
	private:
		List <datos_atencion^>^ Lista; //defino la lista 

	public:
		lista_Atencion_floreria() {
			Lista = gcnew List<datos_atencion^>();
		}

		void Agregar(datos_atencion^ c) {
			Lista->Add(c);
		}

		datos_atencion^ Primero()
		{
			if (Lista->Count > 0)
				return Lista[0];
			else
				return nullptr;
		}

		datos_atencion^ Ultimo()
		{
			if (Lista->Count > 0)
				return Lista[Lista->Count - 1];
			else
				return nullptr;
		}

		datos_atencion^ Anterior(String^ nombreBuscado)
		{
			for (int i = 0; i < Lista->Count; i++) {
				if (Lista[i]->getcliente()->getNombre()->Equals(nombreBuscado,
					StringComparison::InvariantCultureIgnoreCase)) {
					if (i > 0)
						return Lista[i - 1]; // anterior 
					else
						return nullptr; // no hay anterior 
				}
			}
			return nullptr;
		}

		datos_atencion^ Siguiente(String^ nombreBuscado)
		{
			for (int i = 0; i < Lista->Count; i++) {
				if (Lista[i]->getcliente()->getNombre()->Equals(nombreBuscado, StringComparison::InvariantCultureIgnoreCase)) {
					if (i < Lista->Count - 1)
						return Lista[i + 1]; // siguiente 
					else
						return nullptr; // no hay siguiente 
				}
			}
			return nullptr;
		}

		int ObtenerCantidad() {
			return Lista->Count;
		}

		List<datos_atencion^>^ ObtenerLista() {
			return Lista;
		}

		bool Eliminar(String^ nombreBuscado) {
			for (int i = 0; i < Lista->Count; i++) {
				if (Lista[i]->getcliente()->getNombre()->Equals(nombreBuscado,
					StringComparison::InvariantCultureIgnoreCase)) {
					Lista->RemoveAt(i);// elimina
					return true;
				}
			}
			return false;

		}

	};
}
