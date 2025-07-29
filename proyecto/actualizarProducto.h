	#pragma once
	#include <fstream>               
	#include <string>                
	#include <msclr/marshal_cppstd.h> 
	#include <sstream> 
	#include "Producto.h"
	namespace proyecto {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		public ref class actualizarProducto : public System::Windows::Forms::Form
		{
		public:
			actualizarProducto(void)
			{
				InitializeComponent();
			}

		protected:
			/// Limpiar los recursos que se estén usando.
			~actualizarProducto()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::TextBox^ textBox_CodProdu;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::TextBox^ textBox_NombreProdu;
		private: System::Windows::Forms::TextBox^ textBox_precioProdu;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Button^ btn_buscarProducto;
		private: System::Windows::Forms::Button^ btn_actulizarProducto;
		private: System::Windows::Forms::NumericUpDown^ cantidadStock_produ;
		private: System::Windows::Forms::ComboBox^ combo_Categori;
		private: System::Windows::Forms::DataGridView^ tabla_datosProducto;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numero_Registro;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;





		protected:
		private:
			/// Variable del diseñador necesaria.
			System::ComponentModel::Container ^components;
	#pragma region Windows Form Designer generated code
			/// Método necesario para admitir el Diseñador. No se puede modificar
			/// el contenido de este método con el editor de código.
			void InitializeComponent(void)
			{
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(actualizarProducto::typeid));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->textBox_CodProdu = (gcnew System::Windows::Forms::TextBox());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->textBox_NombreProdu = (gcnew System::Windows::Forms::TextBox());
				this->textBox_precioProdu = (gcnew System::Windows::Forms::TextBox());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->btn_buscarProducto = (gcnew System::Windows::Forms::Button());
				this->btn_actulizarProducto = (gcnew System::Windows::Forms::Button());
				this->cantidadStock_produ = (gcnew System::Windows::Forms::NumericUpDown());
				this->combo_Categori = (gcnew System::Windows::Forms::ComboBox());
				this->tabla_datosProducto = (gcnew System::Windows::Forms::DataGridView());
				this->Numero_Registro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidadStock_produ))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->BeginInit();
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::Transparent;
				this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label1->Location = System::Drawing::Point(505, 53);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(782, 60);
				this->label1->TabIndex = 0;
				this->label1->Text = L"Actualizacion de productos";
				this->label1->Click += gcnew System::EventHandler(this, &actualizarProducto::label1_Click);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->BackColor = System::Drawing::Color::DarkGray;
				this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label2->Location = System::Drawing::Point(296, 160);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(212, 60);
				this->label2->TabIndex = 1;
				this->label2->Text = L"Código";
				// 
				// textBox_CodProdu
				// 
				this->textBox_CodProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox_CodProdu->Location = System::Drawing::Point(592, 176);
				this->textBox_CodProdu->Name = L"textBox_CodProdu";
				this->textBox_CodProdu->Size = System::Drawing::Size(358, 44);
				this->textBox_CodProdu->TabIndex = 2;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->BackColor = System::Drawing::Color::DarkGray;
				this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label3->Location = System::Drawing::Point(282, 267);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(228, 60);
				this->label3->TabIndex = 3;
				this->label3->Text = L"Nombre";
				// 
				// textBox_NombreProdu
				// 
				this->textBox_NombreProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->textBox_NombreProdu->Location = System::Drawing::Point(592, 294);
				this->textBox_NombreProdu->Name = L"textBox_NombreProdu";
				this->textBox_NombreProdu->Size = System::Drawing::Size(358, 44);
				this->textBox_NombreProdu->TabIndex = 4;
				// 
				// textBox_precioProdu
				// 
				this->textBox_precioProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->textBox_precioProdu->Location = System::Drawing::Point(1458, 253);
				this->textBox_precioProdu->Name = L"textBox_precioProdu";
				this->textBox_precioProdu->Size = System::Drawing::Size(120, 44);
				this->textBox_precioProdu->TabIndex = 6;
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::DarkGray;
				this->label4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label4->Location = System::Drawing::Point(268, 387);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(297, 60);
				this->label4->TabIndex = 8;
				this->label4->Text = L"Categoria";
				this->label4->Click += gcnew System::EventHandler(this, &actualizarProducto::label4_Click);
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->BackColor = System::Drawing::Color::DarkGray;
				this->label5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label5->Location = System::Drawing::Point(1134, 236);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(204, 60);
				this->label5->TabIndex = 9;
				this->label5->Text = L"Precio";
				this->label5->Click += gcnew System::EventHandler(this, &actualizarProducto::label5_Click);
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->BackColor = System::Drawing::Color::DarkGray;
				this->label6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->label6->Location = System::Drawing::Point(1143, 327);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(181, 60);
				this->label6->TabIndex = 10;
				this->label6->Text = L"Stock";
				this->label6->Click += gcnew System::EventHandler(this, &actualizarProducto::label6_Click);
				// 
				// btn_buscarProducto
				// 
				this->btn_buscarProducto->BackColor = System::Drawing::Color::Transparent;
				this->btn_buscarProducto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_buscarProducto->Location = System::Drawing::Point(418, 485);
				this->btn_buscarProducto->Name = L"btn_buscarProducto";
				this->btn_buscarProducto->Size = System::Drawing::Size(218, 82);
				this->btn_buscarProducto->TabIndex = 11;
				this->btn_buscarProducto->Text = L"Buscar";
				this->btn_buscarProducto->UseVisualStyleBackColor = false;
				this->btn_buscarProducto->Click += gcnew System::EventHandler(this, &actualizarProducto::btn_buscarProducto_Click);
				// 
				// btn_actulizarProducto
				// 
				this->btn_actulizarProducto->BackColor = System::Drawing::Color::Transparent;
				this->btn_actulizarProducto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_actulizarProducto->Location = System::Drawing::Point(1039, 482);
				this->btn_actulizarProducto->Name = L"btn_actulizarProducto";
				this->btn_actulizarProducto->Size = System::Drawing::Size(320, 89);
				this->btn_actulizarProducto->TabIndex = 12;
				this->btn_actulizarProducto->Text = L"Actualizar";
				this->btn_actulizarProducto->UseVisualStyleBackColor = false;
				this->btn_actulizarProducto->Click += gcnew System::EventHandler(this, &actualizarProducto::btn_actulizarProducto_Click);
				// 
				// cantidadStock_produ
				// 
				this->cantidadStock_produ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->cantidadStock_produ->Location = System::Drawing::Point(1458, 314);
				this->cantidadStock_produ->Name = L"cantidadStock_produ";
				this->cantidadStock_produ->Size = System::Drawing::Size(120, 44);
				this->cantidadStock_produ->TabIndex = 13;
				// 
				// combo_Categori
				// 
				this->combo_Categori->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->combo_Categori->FormattingEnabled = true;
				this->combo_Categori->Location = System::Drawing::Point(592, 397);
				this->combo_Categori->Name = L"combo_Categori";
				this->combo_Categori->Size = System::Drawing::Size(358, 45);
				this->combo_Categori->TabIndex = 14;
				this->combo_Categori->SelectedIndexChanged += gcnew System::EventHandler(this, &actualizarProducto::combo_Categori_SelectedIndexChanged);
				// 
				// tabla_datosProducto
				// 
				dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
				dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->tabla_datosProducto->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
				this->tabla_datosProducto->Anchor = System::Windows::Forms::AnchorStyles::None;
				this->tabla_datosProducto->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
				this->tabla_datosProducto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->tabla_datosProducto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
					this->Numero_Registro,
						this->Código, this->Nombre, this->Categoría, this->Precio, this->Stock
				});
				this->tabla_datosProducto->Location = System::Drawing::Point(187, 644);
				this->tabla_datosProducto->Name = L"tabla_datosProducto";
				this->tabla_datosProducto->RowHeadersWidth = 62;
				this->tabla_datosProducto->RowTemplate->Height = 28;
				this->tabla_datosProducto->Size = System::Drawing::Size(1487, 372);
				this->tabla_datosProducto->TabIndex = 15;
				this->tabla_datosProducto->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &actualizarProducto::tabla_datosProducto_CellContentClick);
				// 
				// Numero_Registro
				// 
				this->Numero_Registro->HeaderText = L"Numero_Registro";
				this->Numero_Registro->MinimumWidth = 8;
				this->Numero_Registro->Name = L"Numero_Registro";
				this->Numero_Registro->Width = 150;
				// 
				// Código
				// 
				this->Código->HeaderText = L"Código";
				this->Código->MinimumWidth = 8;
				this->Código->Name = L"Código";
				this->Código->Width = 150;
				// 
				// Nombre
				// 
				this->Nombre->HeaderText = L"Nombre ";
				this->Nombre->MinimumWidth = 8;
				this->Nombre->Name = L"Nombre";
				this->Nombre->Width = 150;
				// 
				// Categoría
				// 
				this->Categoría->HeaderText = L"Categoría ";
				this->Categoría->MinimumWidth = 8;
				this->Categoría->Name = L"Categoría";
				this->Categoría->Width = 150;
				// 
				// Precio
				// 
				this->Precio->HeaderText = L"Precio ";
				this->Precio->MinimumWidth = 8;
				this->Precio->Name = L"Precio";
				this->Precio->Width = 150;
				// 
				// Stock
				// 
				this->Stock->HeaderText = L"Stock ";
				this->Stock->MinimumWidth = 8;
				this->Stock->Name = L"Stock";
				this->Stock->Width = 150;
				// 
				// actualizarProducto
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(1924, 1062);
				this->Controls->Add(this->tabla_datosProducto);
				this->Controls->Add(this->combo_Categori);
				this->Controls->Add(this->cantidadStock_produ);
				this->Controls->Add(this->btn_actulizarProducto);
				this->Controls->Add(this->btn_buscarProducto);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->textBox_precioProdu);
				this->Controls->Add(this->textBox_NombreProdu);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->textBox_CodProdu);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Name = L"actualizarProducto";
				this->Text = L"actualizarProducto";
				this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
				this->Load += gcnew System::EventHandler(this, &actualizarProducto::actualizarProducto_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidadStock_produ))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
		private: System::Void cargarProductosDesdeArchivo()
		{
			// Limpiar la tabla antes de cargar nuevos datos
			tabla_datosProducto->Rows->Clear();

			std::ifstream archivo("productos.txt");
			if (!archivo.is_open()) {
				MessageBox::Show("No se pudo abrir el archivo de productos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			std::string linea;
			while (std::getline(archivo, linea)) {
				Producto producto;
				std::stringstream ss(linea);
				std::getline(ss, producto.registroId, ','); 
				std::getline(ss, producto.codigo, ',');
				std::getline(ss, producto.nombre, ',');
				std::getline(ss, producto.categoria, ',');
				std::getline(ss, producto.precio, ',');
				std::getline(ss, producto.stock);

				// Añadir los datos del producto a la tabla
				tabla_datosProducto->Rows->Add(
					gcnew String(producto.registroId.c_str()),
					gcnew String(producto.codigo.c_str()),
					gcnew String(producto.nombre.c_str()),
					gcnew String(producto.categoria.c_str()),
					gcnew String(producto.precio.c_str()),
					gcnew String(producto.stock.c_str())
				);
			}

			archivo.close();
		}

		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void btn_buscarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ codBuscado = textBox_CodProdu->Text->Trim();
			String^ nomBuscado = textBox_NombreProdu->Text->Trim();

			if (codBuscado == "" && nomBuscado == "") {
				MessageBox::Show("Ingrese el código o nombre del producto para buscar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			std::string codigoBuscado = msclr::interop::marshal_as<std::string>(codBuscado);
			std::string nombreBuscado = msclr::interop::marshal_as<std::string>(nomBuscado);

			std::ifstream archivo("productos.txt");
			if (!archivo.is_open()) {
				MessageBox::Show("No se pudo abrir el archivo de productos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			std::string linea;
			bool encontrado = false;

			while (std::getline(archivo, linea)) {
				if (linea.empty()) continue;

				Producto producto;
				std::stringstream ss(linea);

				// LECTURA CON LA NUEVA ESTRUCTURA
				std::getline(ss, producto.registroId, ',');
				std::getline(ss, producto.codigo, ',');
				std::getline(ss, producto.nombre, ',');
				std::getline(ss, producto.categoria, ',');
				std::getline(ss, producto.precio, ',');
				std::getline(ss, producto.stock);

				// Verifica si coincide el código o el nombre
				if ((codigoBuscado != "" && producto.codigo == codigoBuscado) ||
					(nombreBuscado != "" && producto.nombre == nombreBuscado)) {

					// Muestra los datos encontrados en los controles
					textBox_CodProdu->Text = gcnew String(producto.codigo.c_str());
					textBox_NombreProdu->Text = gcnew String(producto.nombre.c_str());
					combo_Categori->Text = gcnew String(producto.categoria.c_str());
					textBox_precioProdu->Text = gcnew String(producto.precio.c_str());
					cantidadStock_produ->Value = Convert::ToInt32(gcnew String(producto.stock.c_str()));

					combo_Categori->DroppedDown = true;
					encontrado = true;
					break;
				}
			}
			archivo.close();

			if (!encontrado) {
				MessageBox::Show("Producto no encontrado.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	private: System::Void combo_Categori_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_actulizarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		// Primero validamos que los campos no estén vacíos
		if (textBox_CodProdu->Text == "" ||
			textBox_NombreProdu->Text == "" ||
			textBox_precioProdu->Text == "" ||
			combo_Categori->Text == "") {

			MessageBox::Show("Por favor, llena todos los campos.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Validamos que el precio sea un número válido y positivo
		std::string strPrecio = msclr::interop::marshal_as<std::string>(textBox_precioProdu->Text);
		double valorPrecio;

		try {
			valorPrecio = std::stod(strPrecio); // intentamos convertir a double
			if (valorPrecio < 0) {
				MessageBox::Show("El precio no puede ser negativo.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
		}
		catch (...) {
			MessageBox::Show("El precio ingresado no es válido. Usa solo números.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Validamos que el stock no sea negativo
		if (cantidadStock_produ->Value < 0) {
			MessageBox::Show("El stock no puede ser negativo.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Aquí empieza el proceso para actualizar el producto
		std::ifstream archivo("productos.txt"); // abrimos el archivo
		if (!archivo.is_open()) {
			MessageBox::Show("No se pudo abrir el archivo.", "Error");
			return;
		}

		// Convertimos el código que el usuario ingresó
		std::string codigoBuscado = msclr::interop::marshal_as<std::string>(textBox_CodProdu->Text);

		std::string nuevoContenido = ""; // Aquí guardaremos el nuevo contenido
		bool seActualizo = false; // Para saber si se hizo una actualización
		std::string linea;

		while (std::getline(archivo, linea)) {
			if (linea.empty()) continue; // si la línea está vacía, la saltamos

			std::stringstream ss(linea); // leemos los campos separados por coma
			std::string registroId, codigo, nombre, categoria, precio, stock;

			std::getline(ss, registroId, ',');
			std::getline(ss, codigo, ',');
			std::getline(ss, nombre, ',');
			std::getline(ss, categoria, ',');
			std::getline(ss, precio, ',');
			std::getline(ss, stock);

			if (codigo == codigoBuscado) {
				// Si encontramos el código, leemos los nuevos valores del formulario
				std::string nuevoNombre = msclr::interop::marshal_as<std::string>(textBox_NombreProdu->Text);
				std::string nuevaCategoria = msclr::interop::marshal_as<std::string>(combo_Categori->Text);
				std::string nuevoPrecio = msclr::interop::marshal_as<std::string>(textBox_precioProdu->Text);
				std::string nuevoStock = std::to_string((int)cantidadStock_produ->Value);

				// Si no hay cambios, avisamos
				if (nuevoNombre == nombre && nuevaCategoria == categoria &&
					nuevoPrecio == precio && nuevoStock == stock) {
					MessageBox::Show("No se han realizado cambios.", "Información");
					archivo.close();
					return;
				}

				// Si hay cambios, los guardamos en la variable
				nuevoContenido += registroId + "," + codigo + "," + nuevoNombre + "," + nuevaCategoria + "," + nuevoPrecio + "," + nuevoStock + "\n";
				seActualizo = true;
			}
			else {
				// Si no es el producto que buscamos, lo dejamos igual
				nuevoContenido += linea + "\n";
			}
		}
		archivo.close(); // cerramos el archivo de lectura

		// Si no se encontró el producto con ese código
		if (!seActualizo) {
			MessageBox::Show("No se encontró el producto.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Ahora escribimos el nuevo contenido en el archivo
		std::ofstream salida("productos.txt");
		if (!salida.is_open()) {
			MessageBox::Show("No se pudo guardar el archivo.", "Error");
			return;
		}
		salida << nuevoContenido;
		salida.close();

		// Mensaje de éxito
		MessageBox::Show("Producto actualizado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Recargamos la tabla
		CargarProductosEnTabla();

		// Limpiamos los campos
		textBox_CodProdu->Clear();
		textBox_NombreProdu->Clear();
		textBox_precioProdu->Clear();
		combo_Categori->Text = "";
		cantidadStock_produ->Value = 0;
	}
	private: System::Void actualizarProducto_Load(System::Object^ sender, System::EventArgs^ e) {
		// Cargar productos desde el archivo al cargar el formulario
		combo_Categori->Items->Add("Carnes y Pescados");
		combo_Categori->Items->Add("Embutidos y Conservas");
		combo_Categori->Items->Add("Lacteos y Huevos");
		combo_Categori->Items->Add("Bebidas");
		combo_Categori->Items->Add("Frutas y Verduras");
		combo_Categori->Items->Add("Panadería y repostería");
		combo_Categori->Items->Add("Cereales");
		combo_Categori->Items->Add("Snacks y Golosinas");
		combo_Categori->Items->Add("Productos de Limpieza para el Hogar");
		combo_Categori->Items->Add("Abarrotes");
		combo_Categori->Items->Add("Cuidado personal y belleza");
		cargarProductosDesdeArchivo();
	}
		   void CargarProductosEnTabla() {
			   tabla_datosProducto->Rows->Clear();
			   std::ifstream archivo("productos.txt");
			   if (!archivo.is_open()) {
				   MessageBox::Show("No se pudo abrir el archivo para leer.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return;
			   }

			   std::string linea;
			   while (std::getline(archivo, linea)) {
				   if (linea.empty()) continue;

				   size_t pos = 0;
				   Producto producto;

				   // ID (registro)
				   pos = linea.find(",");
				   if (pos == std::string::npos) continue;
				   producto.registroId = linea.substr(0, pos);
				   linea.erase(0, pos + 1);

				   // Código
				   pos = linea.find(",");
				   if (pos == std::string::npos) continue;
				   producto.codigo = linea.substr(0, pos);
				   linea.erase(0, pos + 1);

				   // Nombre
				   pos = linea.find(",");
				   if (pos == std::string::npos) continue;
				   producto.nombre = linea.substr(0, pos);
				   linea.erase(0, pos + 1);

				   // Categoría
				   pos = linea.find(",");
				   if (pos == std::string::npos) continue;
				   producto.categoria = linea.substr(0, pos);
				   linea.erase(0, pos + 1);

				   // Precio
				   pos = linea.find(",");
				   if (pos == std::string::npos) continue;
				   producto.precio = linea.substr(0, pos);
				   linea.erase(0, pos + 1);

				   // Stock
				   producto.stock = linea;

				   // Agregar a la tabla
				   tabla_datosProducto->Rows->Add(
					   gcnew String(producto.registroId.c_str()),
					   gcnew String(producto.codigo.c_str()),
					   gcnew String(producto.nombre.c_str()),
					   gcnew String(producto.categoria.c_str()),
					   gcnew String(producto.precio.c_str()),
					   gcnew String(producto.stock.c_str())
				   );
			   }
			   archivo.close();
		   }

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabla_datosProducto_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
	}
