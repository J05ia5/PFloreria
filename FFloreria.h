#pragma once

#include "ClasesFloreria.h"

using namespace ClasesFloreria;
using namespace std;

namespace PFloreria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FFloreria
	/// </summary>
	public ref class FFloreria : public System::Windows::Forms::Form
	{
	public:
		cola_floreria^ cola_clientes;
		lista_Atencion_floreria^ lista_atencion;
		pila_floreria^ pila_clientes;
	private: System::Windows::Forms::Button^ btnUltimo;

	private: System::Windows::Forms::Button^ btnSiguiente;

	private: System::Windows::Forms::Button^ btnAnterior;

	private: System::Windows::Forms::Button^ btnPrimero;

	private: System::Windows::Forms::Button^ btnEliminarLista;

	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::TextBox^ txtDireccion;


	private: System::Windows::Forms::Label^ DireccionEntrega;
	public:
		   
		FFloreria(void)
		{
			InitializeComponent();
			cola_clientes = gcnew cola_floreria();
			lista_atencion = gcnew lista_Atencion_floreria();
			pila_clientes = gcnew pila_floreria();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FFloreria()
		{
			if (components)
			{
				delete components;
			}
		}

		// --> NUEVO MÉTODO: Función centralizada para actualizar el DataGridView
	// Esto asegura que la tabla SIEMPRE refleje el estado real de la 'cola_clientes'.
	private: void ActualizarGrid() {
		dvgCola->Rows->Clear(); // Limpia la tabla completamente

		// Obtiene la lista vinculada desde la clase de la cola
		LinkedList<datos^>^ lista_actual = cola_clientes->ObtenerLista();

		// Itera sobre cada elemento de la lista y lo añade a la tabla
		for each (datos ^ cliente in lista_actual) {
			array<String^>^ fila = gcnew array<String^>{
				cliente->getNombre(),
					cliente->getContacto(),
					cliente->getHora_llegada()
			};
			dvgCola->Rows->Add(fila);
		}
	}

		   // --> NUEVO MÉTODO: Función para limpiar los campos de texto del panel de cola.
	private: void LimpiarPanelCola() {
		txtNombre->Clear();
		txtContacto->Clear();
		txtNombre->Focus(); // Pone el cursor en el campo de nombre
	}

		   // --> NUEVO MÉTODO: Función para limpiar los campos del panel de atención.
	private: void LimpiarPanelAtencion() {
		txtPNombre->Clear();
		txtPContacto->Clear();
		txtPHora->Clear();
		txtDireccion->Clear();
	}

	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Button^ btnAtencionFloreria;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Panel^ PanelCola;
	private: System::Windows::Forms::Label^ Nombre;
	private: System::Windows::Forms::Label^ Hora;
	private: System::Windows::Forms::TextBox^ txtContacto;

	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ Contacto;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dtpHoraLlegada;
	private: System::Windows::Forms::DataGridView^ dvgCola;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colContacto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colHoraLlegada;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Panel^ PanelAtencion;


	private: System::Windows::Forms::Label^ NombreCliente;
	private: System::Windows::Forms::TextBox^ txtPNombre;

	private: System::Windows::Forms::Label^ HoraLlegada;
	private: System::Windows::Forms::Label^ InformacionContacto;
	private: System::Windows::Forms::Button^ btnDeshacer;

	private: System::Windows::Forms::Button^ btnAtender;
	private: System::Windows::Forms::TextBox^ txtPHora;


	private: System::Windows::Forms::TextBox^ txtPContacto;




	protected:










	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnAtencionFloreria = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnDeshacer = (gcnew System::Windows::Forms::Button());
			this->btnAtender = (gcnew System::Windows::Forms::Button());
			this->PanelAtencion = (gcnew System::Windows::Forms::Panel());
			this->btnUltimo = (gcnew System::Windows::Forms::Button());
			this->btnSiguiente = (gcnew System::Windows::Forms::Button());
			this->btnAnterior = (gcnew System::Windows::Forms::Button());
			this->btnPrimero = (gcnew System::Windows::Forms::Button());
			this->btnEliminarLista = (gcnew System::Windows::Forms::Button());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->DireccionEntrega = (gcnew System::Windows::Forms::Label());
			this->txtPHora = (gcnew System::Windows::Forms::TextBox());
			this->txtPContacto = (gcnew System::Windows::Forms::TextBox());
			this->txtPNombre = (gcnew System::Windows::Forms::TextBox());
			this->HoraLlegada = (gcnew System::Windows::Forms::Label());
			this->InformacionContacto = (gcnew System::Windows::Forms::Label());
			this->NombreCliente = (gcnew System::Windows::Forms::Label());
			this->dvgCola = (gcnew System::Windows::Forms::DataGridView());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colContacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHoraLlegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PanelCola = (gcnew System::Windows::Forms::Panel());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->dtpHoraLlegada = (gcnew System::Windows::Forms::DateTimePicker());
			this->Hora = (gcnew System::Windows::Forms::Label());
			this->txtContacto = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->Contacto = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->PanelAtencion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgCola))->BeginInit();
			this->PanelCola->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnAtencionFloreria);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(139, 478);
			this->panel1->TabIndex = 0;
			// 
			// btnAtencionFloreria
			// 
			this->btnAtencionFloreria->AutoSize = true;
			this->btnAtencionFloreria->Location = System::Drawing::Point(12, 126);
			this->btnAtencionFloreria->Name = L"btnAtencionFloreria";
			this->btnAtencionFloreria->Size = System::Drawing::Size(111, 38);
			this->btnAtencionFloreria->TabIndex = 1;
			this->btnAtencionFloreria->Text = L"Atencion en Floreria";
			this->btnAtencionFloreria->UseVisualStyleBackColor = true;
			this->btnAtencionFloreria->Click += gcnew System::EventHandler(this, &FFloreria::btnAtencionFloreria_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(12, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cola de Ingreso";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FFloreria::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->lblTitulo);
			this->panel2->Controls->Add(this->dateTimePicker1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(139, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(689, 62);
			this->panel2->TabIndex = 1;
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(48, 19);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(60, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Cola";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(355, 22);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(97, 20);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnDeshacer);
			this->panel3->Controls->Add(this->btnAtender);
			this->panel3->Controls->Add(this->PanelAtencion);
			this->panel3->Controls->Add(this->dvgCola);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->PanelCola);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(139, 62);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(689, 416);
			this->panel3->TabIndex = 2;
			// 
			// btnDeshacer
			// 
			this->btnDeshacer->AutoSize = true;
			this->btnDeshacer->Location = System::Drawing::Point(517, 206);
			this->btnDeshacer->Name = L"btnDeshacer";
			this->btnDeshacer->Size = System::Drawing::Size(108, 34);
			this->btnDeshacer->TabIndex = 5;
			this->btnDeshacer->Text = L"Deshacer Atencion";
			this->btnDeshacer->UseVisualStyleBackColor = true;
			this->btnDeshacer->Visible = false;
			this->btnDeshacer->Click += gcnew System::EventHandler(this, &FFloreria::btnDeshacer_Click);
			// 
			// btnAtender
			// 
			this->btnAtender->Location = System::Drawing::Point(371, 206);
			this->btnAtender->Name = L"btnAtender";
			this->btnAtender->Size = System::Drawing::Size(108, 34);
			this->btnAtender->TabIndex = 4;
			this->btnAtender->Text = L"Atender";
			this->btnAtender->UseVisualStyleBackColor = true;
			this->btnAtender->Visible = false;
			this->btnAtender->Click += gcnew System::EventHandler(this, &FFloreria::btnAtender_Click_1);
			// 
			// PanelAtencion
			// 
			this->PanelAtencion->Controls->Add(this->btnUltimo);
			this->PanelAtencion->Controls->Add(this->btnSiguiente);
			this->PanelAtencion->Controls->Add(this->btnAnterior);
			this->PanelAtencion->Controls->Add(this->btnPrimero);
			this->PanelAtencion->Controls->Add(this->btnEliminarLista);
			this->PanelAtencion->Controls->Add(this->btnInsertar);
			this->PanelAtencion->Controls->Add(this->txtDireccion);
			this->PanelAtencion->Controls->Add(this->DireccionEntrega);
			this->PanelAtencion->Controls->Add(this->txtPHora);
			this->PanelAtencion->Controls->Add(this->txtPContacto);
			this->PanelAtencion->Controls->Add(this->txtPNombre);
			this->PanelAtencion->Controls->Add(this->HoraLlegada);
			this->PanelAtencion->Controls->Add(this->InformacionContacto);
			this->PanelAtencion->Controls->Add(this->NombreCliente);
			this->PanelAtencion->Location = System::Drawing::Point(6, 32);
			this->PanelAtencion->Name = L"PanelAtencion";
			this->PanelAtencion->Size = System::Drawing::Size(308, 248);
			this->PanelAtencion->TabIndex = 3;
			this->PanelAtencion->Visible = false;
			// 
			// btnUltimo
			// 
			this->btnUltimo->Location = System::Drawing::Point(218, 178);
			this->btnUltimo->Name = L"btnUltimo";
			this->btnUltimo->Size = System::Drawing::Size(46, 23);
			this->btnUltimo->TabIndex = 13;
			this->btnUltimo->Text = L"Ultimo";
			this->btnUltimo->UseVisualStyleBackColor = true;
			this->btnUltimo->Click += gcnew System::EventHandler(this, &FFloreria::btnUltimo_Click);
			// 
			// btnSiguiente
			// 
			this->btnSiguiente->Location = System::Drawing::Point(146, 178);
			this->btnSiguiente->Name = L"btnSiguiente";
			this->btnSiguiente->Size = System::Drawing::Size(68, 23);
			this->btnSiguiente->TabIndex = 12;
			this->btnSiguiente->Text = L"Siguiente";
			this->btnSiguiente->UseVisualStyleBackColor = true;
			this->btnSiguiente->Click += gcnew System::EventHandler(this, &FFloreria::btnSiguiente_Click);
			// 
			// btnAnterior
			// 
			this->btnAnterior->AutoSize = true;
			this->btnAnterior->Location = System::Drawing::Point(78, 178);
			this->btnAnterior->Name = L"btnAnterior";
			this->btnAnterior->Size = System::Drawing::Size(62, 23);
			this->btnAnterior->TabIndex = 11;
			this->btnAnterior->Text = L"Anterior";
			this->btnAnterior->UseVisualStyleBackColor = true;
			this->btnAnterior->Click += gcnew System::EventHandler(this, &FFloreria::btnAnterior_Click);
			// 
			// btnPrimero
			// 
			this->btnPrimero->AutoSize = true;
			this->btnPrimero->Location = System::Drawing::Point(18, 178);
			this->btnPrimero->Name = L"btnPrimero";
			this->btnPrimero->Size = System::Drawing::Size(54, 23);
			this->btnPrimero->TabIndex = 10;
			this->btnPrimero->Text = L"Primero";
			this->btnPrimero->UseVisualStyleBackColor = true;
			this->btnPrimero->Click += gcnew System::EventHandler(this, &FFloreria::btnPrimero_Click);
			// 
			// btnEliminarLista
			// 
			this->btnEliminarLista->Location = System::Drawing::Point(143, 149);
			this->btnEliminarLista->Name = L"btnEliminarLista";
			this->btnEliminarLista->Size = System::Drawing::Size(121, 23);
			this->btnEliminarLista->TabIndex = 9;
			this->btnEliminarLista->Text = L"Eliminar";
			this->btnEliminarLista->UseVisualStyleBackColor = true;
			this->btnEliminarLista->Click += gcnew System::EventHandler(this, &FFloreria::btnEliminarLista_Click);
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(19, 149);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(120, 23);
			this->btnInsertar->TabIndex = 8;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &FFloreria::btnInsertar_Click);
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(148, 76);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(100, 20);
			this->txtDireccion->TabIndex = 7;
			// 
			// DireccionEntrega
			// 
			this->DireccionEntrega->AutoSize = true;
			this->DireccionEntrega->Location = System::Drawing::Point(148, 55);
			this->DireccionEntrega->Name = L"DireccionEntrega";
			this->DireccionEntrega->Size = System::Drawing::Size(107, 13);
			this->DireccionEntrega->TabIndex = 6;
			this->DireccionEntrega->Text = L"Direccion de Entrega";
			// 
			// txtPHora
			// 
			this->txtPHora->Location = System::Drawing::Point(18, 76);
			this->txtPHora->Name = L"txtPHora";
			this->txtPHora->Size = System::Drawing::Size(100, 20);
			this->txtPHora->TabIndex = 5;
			// 
			// txtPContacto
			// 
			this->txtPContacto->Location = System::Drawing::Point(148, 28);
			this->txtPContacto->Name = L"txtPContacto";
			this->txtPContacto->Size = System::Drawing::Size(100, 20);
			this->txtPContacto->TabIndex = 4;
			// 
			// txtPNombre
			// 
			this->txtPNombre->Location = System::Drawing::Point(18, 28);
			this->txtPNombre->Name = L"txtPNombre";
			this->txtPNombre->Size = System::Drawing::Size(100, 20);
			this->txtPNombre->TabIndex = 3;
			// 
			// HoraLlegada
			// 
			this->HoraLlegada->AutoSize = true;
			this->HoraLlegada->Location = System::Drawing::Point(15, 60);
			this->HoraLlegada->Name = L"HoraLlegada";
			this->HoraLlegada->Size = System::Drawing::Size(86, 13);
			this->HoraLlegada->TabIndex = 2;
			this->HoraLlegada->Text = L"Hora de Llegada";
			// 
			// InformacionContacto
			// 
			this->InformacionContacto->AutoSize = true;
			this->InformacionContacto->Location = System::Drawing::Point(145, 12);
			this->InformacionContacto->Name = L"InformacionContacto";
			this->InformacionContacto->Size = System::Drawing::Size(123, 13);
			this->InformacionContacto->TabIndex = 1;
			this->InformacionContacto->Text = L"Informacion de Contacto";
			// 
			// NombreCliente
			// 
			this->NombreCliente->AutoSize = true;
			this->NombreCliente->Location = System::Drawing::Point(16, 12);
			this->NombreCliente->Name = L"NombreCliente";
			this->NombreCliente->Size = System::Drawing::Size(96, 13);
			this->NombreCliente->TabIndex = 0;
			this->NombreCliente->Text = L"Nombre del Cliente";
			// 
			// dvgCola
			// 
			this->dvgCola->AllowUserToAddRows = false;
			this->dvgCola->AllowUserToDeleteRows = false;
			this->dvgCola->AllowUserToResizeColumns = false;
			this->dvgCola->AllowUserToResizeRows = false;
			this->dvgCola->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dvgCola->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgCola->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colNombre, this->colContacto,
					this->colHoraLlegada
			});
			this->dvgCola->Location = System::Drawing::Point(337, 41);
			this->dvgCola->Name = L"dvgCola";
			this->dvgCola->ReadOnly = true;
			this->dvgCola->Size = System::Drawing::Size(328, 150);
			this->dvgCola->TabIndex = 2;
			this->dvgCola->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FFloreria::dvgCola_CellContentClick);
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			// 
			// colContacto
			// 
			this->colContacto->HeaderText = L"Informacion de Contacto";
			this->colContacto->Name = L"colContacto";
			this->colContacto->ReadOnly = true;
			// 
			// colHoraLlegada
			// 
			this->colHoraLlegada->HeaderText = L"Hora de Llegada";
			this->colHoraLlegada->Name = L"colHoraLlegada";
			this->colHoraLlegada->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(332, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"COLA DE ATENCION";
			// 
			// PanelCola
			// 
			this->PanelCola->Controls->Add(this->btnLimpiar);
			this->PanelCola->Controls->Add(this->btnEliminar);
			this->PanelCola->Controls->Add(this->btnAgregar);
			this->PanelCola->Controls->Add(this->dtpHoraLlegada);
			this->PanelCola->Controls->Add(this->Hora);
			this->PanelCola->Controls->Add(this->txtContacto);
			this->PanelCola->Controls->Add(this->txtNombre);
			this->PanelCola->Controls->Add(this->Contacto);
			this->PanelCola->Controls->Add(this->Nombre);
			this->PanelCola->Location = System::Drawing::Point(18, 13);
			this->PanelCola->Name = L"PanelCola";
			this->PanelCola->Size = System::Drawing::Size(263, 210);
			this->PanelCola->TabIndex = 0;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(177, 135);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(75, 39);
			this->btnLimpiar->TabIndex = 8;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &FFloreria::btnLimpiar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(177, 79);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 35);
			this->btnEliminar->TabIndex = 7;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &FFloreria::btnAtender_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(177, 26);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 36);
			this->btnAgregar->TabIndex = 6;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &FFloreria::btnAgregar_Click);
			// 
			// dtpHoraLlegada
			// 
			this->dtpHoraLlegada->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpHoraLlegada->Location = System::Drawing::Point(19, 142);
			this->dtpHoraLlegada->Name = L"dtpHoraLlegada";
			this->dtpHoraLlegada->Size = System::Drawing::Size(120, 20);
			this->dtpHoraLlegada->TabIndex = 5;
			// 
			// Hora
			// 
			this->Hora->AutoSize = true;
			this->Hora->Location = System::Drawing::Point(16, 126);
			this->Hora->Name = L"Hora";
			this->Hora->Size = System::Drawing::Size(86, 13);
			this->Hora->TabIndex = 4;
			this->Hora->Text = L"Hora de Llegada";
			// 
			// txtContacto
			// 
			this->txtContacto->Location = System::Drawing::Point(18, 87);
			this->txtContacto->Name = L"txtContacto";
			this->txtContacto->Size = System::Drawing::Size(121, 20);
			this->txtContacto->TabIndex = 3;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(18, 35);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(121, 20);
			this->txtNombre->TabIndex = 2;
			// 
			// Contacto
			// 
			this->Contacto->AutoSize = true;
			this->Contacto->Location = System::Drawing::Point(16, 71);
			this->Contacto->Name = L"Contacto";
			this->Contacto->Size = System::Drawing::Size(123, 13);
			this->Contacto->TabIndex = 1;
			this->Contacto->Text = L"Informacion de Contacto";
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(16, 19);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(44, 13);
			this->Nombre->TabIndex = 0;
			this->Nombre->Text = L"Nombre";
			// 
			// FFloreria
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 478);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"FFloreria";
			this->Text = L"Floreria";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->PanelAtencion->ResumeLayout(false);
			this->PanelAtencion->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgCola))->EndInit();
			this->PanelCola->ResumeLayout(false);
			this->PanelCola->PerformLayout();
			this->ResumeLayout(false);

		}
     #pragma endregion

		

	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txtNombre->Text) || String::IsNullOrWhiteSpace(txtContacto->Text)) {
			MessageBox::Show("Por favor, ingrese el nombre y contacto del cliente.", "Datos Faltantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		datos^ nueva = gcnew datos(txtNombre->Text, txtContacto->Text, dtpHoraLlegada->Text);
		cola_clientes->AgregarFinal(nueva);

		// --> MODIFICADO: Se llama a la función centralizada para actualizar la tabla.
		ActualizarGrid();
		LimpiarPanelCola();
	}

	private: System::Void btnAtender_Click(System::Object^ sender, System::EventArgs^ e) {
		btnAtender_Click_1(sender, e);
	}
	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		LimpiarPanelCola();
	}

private: System::Void btnAtencionFloreria_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelCola->Visible = false;
	PanelAtencion->Visible = true;
	lblTitulo->Text = "ATENCION A CLIENTE";
	btnAtender->Visible = true;
	btnDeshacer->Visible = true;
}
private: System::Void dvgCola_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelCola->Visible = true;
	PanelAtencion->Visible = false;
	lblTitulo->Text = "COLA";
	btnAtender->Visible = false;
	btnDeshacer->Visible = false;
}
private: System::Void btnAtender_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (cola_clientes->ObtenerCantidad() == 0) {
		MessageBox::Show("No hay clientes en la cola para atender.", "Cola Vacía", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// --> MODIFICADO: Flujo lógico corregido.
	// 1. Sacar el dato de la estructura de la cola.
	datos^ clienteAtendido = cola_clientes->EliminarInicio();

	// 2. Si el dato es válido, pasarlo a la pila.
	if (clienteAtendido != nullptr) {
		pila_clientes->Agregar(clienteAtendido);

		// 3. Mostrar los datos del cliente atendido en el panel de atención.
		txtPNombre->Text = clienteAtendido->getNombre();
		txtPContacto->Text = clienteAtendido->getContacto();
		txtPHora->Text = clienteAtendido->getHora_llegada();
		txtDireccion->Clear(); // Limpiar la dirección para el nuevo cliente
		txtDireccion->Focus();

		// 4. Actualizar la tabla para que ya no muestre al cliente atendido.
		ActualizarGrid();
	}
}
	   private: System::Void clear_atencion() {
		   txtPNombre->Text = "";
		   txtPContacto->Text = "";
		   txtPHora->Text = "";
	   }

private: System::Void btnDeshacer_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Sacar el último cliente atendido de la pila.
	datos^ clienteDevuelto = pila_clientes->Eliminar();

	// 2. Si había alguien en la pila...
	if (clienteDevuelto != nullptr) {
		// 3. Devolverlo al inicio de la cola.
		cola_clientes->AgregarInicio(clienteDevuelto);

		// 4. Actualizar la tabla para que vuelva a mostrar al cliente.
		ActualizarGrid();

		// 5. Limpiar el panel de atención.
		LimpiarPanelAtencion();
		MessageBox::Show("Se deshizo la última atención. El cliente " + clienteDevuelto->getNombre() + " ha vuelto a la cola.", "Operación Deshecha", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("No hay atenciones en el historial para deshacer.", "Historial Vacío", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrWhiteSpace(txtPNombre->Text)) {
		// Crea el objeto 'datos' a partir de los campos del panel de atención.
		datos^ clienteActual = gcnew datos(txtPNombre->Text, txtPContacto->Text, txtPHora->Text);
		// Crea el objeto 'datos_atencion' con la dirección.
		datos_atencion^ nuevaAtencion = gcnew datos_atencion(clienteActual, txtDireccion->Text);

		lista_atencion->Agregar(nuevaAtencion);
		MessageBox::Show("Cliente " + clienteActual->getNombre() + " guardado en la lista de atención.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		LimpiarPanelAtencion();
	}
	else {
		MessageBox::Show("No hay un cliente atendido para insertar en la lista.", "Datos Faltantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
	private: System::Void clear_ventana() {
		clear_atencion();
		txtDireccion->Text = "";
	}
private: System::Void btnPrimero_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ primero = lista_atencion->Primero();
	if (primero != nullptr) {
		txtPNombre->Text = primero->getcliente()->getNombre();
		txtPContacto->Text = primero->getcliente()->getContacto();
		txtPHora->Text = primero->getcliente()->getHora_llegada();
		txtDireccion->Text = primero->getdireccion();
	}
}
private: System::Void btnUltimo_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ ultimo = lista_atencion->Ultimo();
	if (ultimo != nullptr) {
		txtPNombre->Text = ultimo->getcliente()->getNombre();
		txtPContacto->Text = ultimo->getcliente()->getContacto();
		txtPHora->Text = ultimo->getcliente()->getHora_llegada();
		txtDireccion->Text = ultimo->getdireccion();
	}
}
private: System::Void btnAnterior_Click(System::Object^ sender, System::EventArgs^ e) {
	// --> MODIFICADO: Usa el nombre del panel de atención (txtPNombre) para la búsqueda.
	datos_atencion^ anterior = lista_atencion->Anterior(txtPNombre->Text);
	if (anterior != nullptr) {
		txtPNombre->Text = anterior->getcliente()->getNombre();
		txtPContacto->Text = anterior->getcliente()->getContacto();
		txtPHora->Text = anterior->getcliente()->getHora_llegada();
		txtDireccion->Text = anterior->getdireccion();
	}
}
private: System::Void btnSiguiente_Click(System::Object^ sender, System::EventArgs^ e) {
	// --> MODIFICADO: Usa el nombre del panel de atención (txtPNombre) para la búsqueda.
	datos_atencion^ siguiente = lista_atencion->Siguiente(txtPNombre->Text);
	if (siguiente != nullptr) {
		txtPNombre->Text = siguiente->getcliente()->getNombre();
		txtPContacto->Text = siguiente->getcliente()->getContacto();
		txtPHora->Text = siguiente->getcliente()->getHora_llegada();
		txtDireccion->Text = siguiente->getdireccion();
	}
}
private: System::Void btnEliminarLista_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lista_atencion->Eliminar(txtPNombre->Text)) {
		MessageBox::Show("Se eliminó con éxito de la lista de atención.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		LimpiarPanelAtencion();
	}
	else {
		MessageBox::Show("No se encontró ese nombre en la lista de atención.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
