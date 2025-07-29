#pragma once
#include "buscarProducto.h"
#include "Producto.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>


namespace proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de buscarProducto
	/// </summary>
	public ref class buscarProducto : public System::Windows::Forms::Form
	{
	public:
		buscarProducto(void)
		{
			InitializeComponent();
			cargarProductosDesdeArchivo();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~buscarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ btn_radioCod;
	private: System::Windows::Forms::RadioButton^ btn_radioNombre;
	private: System::Windows::Forms::TextBox^ tem_busqueda;
	private: System::Windows::Forms::Button^ btn_buscarProdu;
	private: System::Windows::Forms::DataGridView^ tabla_datosProducto;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_cargarDatos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(buscarProducto::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_radioCod = (gcnew System::Windows::Forms::RadioButton());
			this->btn_radioNombre = (gcnew System::Windows::Forms::RadioButton());
			this->tem_busqueda = (gcnew System::Windows::Forms::TextBox());
			this->btn_buscarProdu = (gcnew System::Windows::Forms::Button());
			this->tabla_datosProducto = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_cargarDatos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(738, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(745, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese Producto a Buscar";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(327, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(343, 60);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Buscar por:";
			this->label2->Click += gcnew System::EventHandler(this, &buscarProducto::label2_Click);
			// 
			// btn_radioCod
			// 
			this->btn_radioCod->AutoSize = true;
			this->btn_radioCod->BackColor = System::Drawing::Color::Transparent;
			this->btn_radioCod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_radioCod->Location = System::Drawing::Point(785, 170);
			this->btn_radioCod->Name = L"btn_radioCod";
			this->btn_radioCod->Size = System::Drawing::Size(130, 33);
			this->btn_radioCod->TabIndex = 2;
			this->btn_radioCod->TabStop = true;
			this->btn_radioCod->Text = L"Código ";
			this->btn_radioCod->UseVisualStyleBackColor = false;
			this->btn_radioCod->CheckedChanged += gcnew System::EventHandler(this, &buscarProducto::btn_radioCod_CheckedChanged);
			// 
			// btn_radioNombre
			// 
			this->btn_radioNombre->AutoSize = true;
			this->btn_radioNombre->BackColor = System::Drawing::Color::Transparent;
			this->btn_radioNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_radioNombre->Location = System::Drawing::Point(1001, 170);
			this->btn_radioNombre->Name = L"btn_radioNombre";
			this->btn_radioNombre->Size = System::Drawing::Size(132, 33);
			this->btn_radioNombre->TabIndex = 3;
			this->btn_radioNombre->TabStop = true;
			this->btn_radioNombre->Text = L"Nombre";
			this->btn_radioNombre->UseVisualStyleBackColor = false;
			// 
			// tem_busqueda
			// 
			this->tem_busqueda->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tem_busqueda->Location = System::Drawing::Point(277, 253);
			this->tem_busqueda->Name = L"tem_busqueda";
			this->tem_busqueda->Size = System::Drawing::Size(800, 46);
			this->tem_busqueda->TabIndex = 4;
			// 
			// btn_buscarProdu
			// 
			this->btn_buscarProdu->BackColor = System::Drawing::Color::Transparent;
			this->btn_buscarProdu->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_buscarProdu->Location = System::Drawing::Point(1346, 368);
			this->btn_buscarProdu->Name = L"btn_buscarProdu";
			this->btn_buscarProdu->Size = System::Drawing::Size(215, 68);
			this->btn_buscarProdu->TabIndex = 5;
			this->btn_buscarProdu->Text = L"Buscar";
			this->btn_buscarProdu->UseMnemonic = false;
			this->btn_buscarProdu->UseVisualStyleBackColor = false;
			this->btn_buscarProdu->Click += gcnew System::EventHandler(this, &buscarProducto::btn_buscarProdu_Click);
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
				this->Column1,
					this->Código, this->Nombre, this->Categoría, this->Precio, this->Stock
			});
			this->tabla_datosProducto->Location = System::Drawing::Point(295, 583);
			this->tabla_datosProducto->Name = L"tabla_datosProducto";
			this->tabla_datosProducto->RowHeadersWidth = 62;
			this->tabla_datosProducto->RowTemplate->Height = 28;
			this->tabla_datosProducto->Size = System::Drawing::Size(1487, 372);
			this->tabla_datosProducto->TabIndex = 6;
			this->tabla_datosProducto->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &buscarProducto::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Numero_Registro";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
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
			this->Stock->HeaderText = L"Stock   ";
			this->Stock->MinimumWidth = 8;
			this->Stock->Name = L"Stock";
			this->Stock->Width = 150;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(754, 501);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(687, 60);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Resultados encontrados";
			this->label3->Click += gcnew System::EventHandler(this, &buscarProducto::label3_Click);
			// 
			// btn_cargarDatos
			// 
			this->btn_cargarDatos->BackColor = System::Drawing::Color::Transparent;
			this->btn_cargarDatos->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cargarDatos->Location = System::Drawing::Point(287, 368);
			this->btn_cargarDatos->Name = L"btn_cargarDatos";
			this->btn_cargarDatos->Size = System::Drawing::Size(565, 62);
			this->btn_cargarDatos->TabIndex = 8;
			this->btn_cargarDatos->Text = L"Cargar Productos";
			this->btn_cargarDatos->UseMnemonic = false;
			this->btn_cargarDatos->UseVisualStyleBackColor = false;
			this->btn_cargarDatos->Click += gcnew System::EventHandler(this, &buscarProducto::btn_cargarDatos_Click);
			// 
			// buscarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1062);
			this->Controls->Add(this->btn_cargarDatos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tabla_datosProducto);
			this->Controls->Add(this->btn_buscarProdu);
			this->Controls->Add(this->tem_busqueda);
			this->Controls->Add(this->btn_radioNombre);
			this->Controls->Add(this->btn_radioCod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"buscarProducto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"buscarProducto";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void cargarProductosDesdeArchivo()
	{
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




	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_radioCod_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btn_buscarProdu_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ val_busqueda = tem_busqueda->Text->Trim();

	if (val_busqueda == "") {
		MessageBox::Show("Ingrese el código o nombre para la búsqueda del producto", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	System::IO::StreamReader^ archivo = gcnew System::IO::StreamReader("productos.txt");
	String^ linea;
	bool encontrado = false;

	while (!archivo->EndOfStream) {
		linea = archivo->ReadLine();

		if (String::IsNullOrWhiteSpace(linea)) continue;

		array<String^>^ campos = linea->Split(',');

		if (campos->Length == 6) { // Formato: registro,codigo,nombre,categoria,precio,stock
			String^ registro = campos[0]->Trim();
			String^ codigo = campos[1]->Trim();
			String^ nombre = campos[2]->Trim();
			String^ categoria = campos[3]->Trim();
			String^ precio = campos[4]->Trim();
			String^ stock = campos[5]->Trim();

			if (codigo->Contains(val_busqueda) || nombre->Contains(val_busqueda)) {
				// Mostrar solo el primer resultado que coincida
				tabla_datosProducto->Rows->Clear(); // Limpiar tabla antes de mostrar resultados
				tabla_datosProducto->Rows->Add(registro, codigo, nombre, categoria, precio, stock);
				encontrado = true;
				break; // Detener búsqueda al encontrar la primera coincidencia
			}
		}
	}

	archivo->Close();

	if (!encontrado) {
		MessageBox::Show("No existen datos del producto ingresado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btn_cargarDatos_Click(System::Object^ sender, System::EventArgs^ e) {
	

	cargarProductosDesdeArchivo();

	
}
};
}
