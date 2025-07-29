#pragma once
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include "Producto.h"
#include <sstream>


namespace proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class agregarProducto : public System::Windows::Forms::Form
	{
	public:
		agregarProducto(void)
		{
			InitializeComponent();
		}

	protected:
		~agregarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ cod_producto;
	private: System::Windows::Forms::Label^ nom_producto;
	private: System::Windows::Forms::Label^ categoria_producto;
	private: System::Windows::Forms::Label^ precio_producto;
	private: System::Windows::Forms::Label^ stock_producto;
	private: System::Windows::Forms::TextBox^ textBox_CodProdu;
	private: System::Windows::Forms::TextBox^ textBox_NombreProdu;
	private: System::Windows::Forms::ComboBox^ combo_Categori;
	private: System::Windows::Forms::TextBox^ textBoc_precioProdu;
	private: System::Windows::Forms::NumericUpDown^ cantidaStock_produ;
	private: System::Windows::Forms::Button^ btn_guardar_producto;
	private: System::Windows::Forms::DataGridView^ tabla_datosProducto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numero_Registro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;






	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(agregarProducto::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cod_producto = (gcnew System::Windows::Forms::Label());
			this->nom_producto = (gcnew System::Windows::Forms::Label());
			this->categoria_producto = (gcnew System::Windows::Forms::Label());
			this->precio_producto = (gcnew System::Windows::Forms::Label());
			this->stock_producto = (gcnew System::Windows::Forms::Label());
			this->textBox_CodProdu = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NombreProdu = (gcnew System::Windows::Forms::TextBox());
			this->combo_Categori = (gcnew System::Windows::Forms::ComboBox());
			this->textBoc_precioProdu = (gcnew System::Windows::Forms::TextBox());
			this->cantidaStock_produ = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_guardar_producto = (gcnew System::Windows::Forms::Button());
			this->tabla_datosProducto = (gcnew System::Windows::Forms::DataGridView());
			this->Numero_Registro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidaStock_produ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::GhostWhite;
			this->label1->Location = System::Drawing::Point(550, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(780, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Agregar Producto";
			// 
			// cod_producto
			// 
			this->cod_producto->AutoSize = true;
			this->cod_producto->BackColor = System::Drawing::Color::Transparent;
			this->cod_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold));
			this->cod_producto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cod_producto->Location = System::Drawing::Point(72, 96);
			this->cod_producto->Name = L"cod_producto";
			this->cod_producto->Size = System::Drawing::Size(307, 120);
			this->cod_producto->TabIndex = 1;
			this->cod_producto->Text = L"Código \r\nProducto:";
			this->cod_producto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cod_producto->Click += gcnew System::EventHandler(this, &agregarProducto::label2_Click);
			// 
			// nom_producto
			// 
			this->nom_producto->AutoSize = true;
			this->nom_producto->BackColor = System::Drawing::Color::Transparent;
			this->nom_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom_producto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nom_producto->Location = System::Drawing::Point(109, 271);
			this->nom_producto->Name = L"nom_producto";
			this->nom_producto->Size = System::Drawing::Size(339, 120);
			this->nom_producto->TabIndex = 2;
			this->nom_producto->Text = L"Nombre del \r\nProducto: ";
			this->nom_producto->Click += gcnew System::EventHandler(this, &agregarProducto::label3_Click);
			// 
			// categoria_producto
			// 
			this->categoria_producto->AutoSize = true;
			this->categoria_producto->BackColor = System::Drawing::Color::Transparent;
			this->categoria_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->categoria_producto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->categoria_producto->Location = System::Drawing::Point(1057, 159);
			this->categoria_producto->Name = L"categoria_producto";
			this->categoria_producto->Size = System::Drawing::Size(408, 120);
			this->categoria_producto->TabIndex = 3;
			this->categoria_producto->Text = L"Categoría del \r\nProducto:";
			this->categoria_producto->Click += gcnew System::EventHandler(this, &agregarProducto::categoria_producto_Click);
			// 
			// precio_producto
			// 
			this->precio_producto->AutoSize = true;
			this->precio_producto->BackColor = System::Drawing::Color::Transparent;
			this->precio_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio_producto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->precio_producto->Location = System::Drawing::Point(1057, 311);
			this->precio_producto->Name = L"precio_producto";
			this->precio_producto->Size = System::Drawing::Size(315, 120);
			this->precio_producto->TabIndex = 4;
			this->precio_producto->Text = L"Precio del \r\nProducto:";
			this->precio_producto->Click += gcnew System::EventHandler(this, &agregarProducto::label5_Click);
			// 
			// stock_producto
			// 
			this->stock_producto->AutoSize = true;
			this->stock_producto->BackColor = System::Drawing::Color::Transparent;
			this->stock_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stock_producto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->stock_producto->Location = System::Drawing::Point(132, 449);
			this->stock_producto->Name = L"stock_producto";
			this->stock_producto->Size = System::Drawing::Size(307, 120);
			this->stock_producto->TabIndex = 5;
			this->stock_producto->Text = L"Stock del \r\nProducto:";
			// 
			// textBox_CodProdu
			// 
			this->textBox_CodProdu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox_CodProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_CodProdu->Location = System::Drawing::Point(414, 158);
			this->textBox_CodProdu->Name = L"textBox_CodProdu";
			this->textBox_CodProdu->Size = System::Drawing::Size(457, 44);
			this->textBox_CodProdu->TabIndex = 6;
			this->textBox_CodProdu->Text = L" ";
			// 
			// textBox_NombreProdu
			// 
			this->textBox_NombreProdu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox_NombreProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NombreProdu->Location = System::Drawing::Point(425, 329);
			this->textBox_NombreProdu->Name = L"textBox_NombreProdu";
			this->textBox_NombreProdu->Size = System::Drawing::Size(457, 44);
			this->textBox_NombreProdu->TabIndex = 7;
			// 
			// combo_Categori
			// 
			this->combo_Categori->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->combo_Categori->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Categori->FormattingEnabled = true;
			this->combo_Categori->Location = System::Drawing::Point(1394, 234);
			this->combo_Categori->Name = L"combo_Categori";
			this->combo_Categori->Size = System::Drawing::Size(427, 45);
			this->combo_Categori->TabIndex = 8;
			this->combo_Categori->SelectedIndexChanged += gcnew System::EventHandler(this, &agregarProducto::combo_Categori_SelectedIndexChanged);
			// 
			// textBoc_precioProdu
			// 
			this->textBoc_precioProdu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoc_precioProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoc_precioProdu->Location = System::Drawing::Point(1367, 374);
			this->textBoc_precioProdu->Name = L"textBoc_precioProdu";
			this->textBoc_precioProdu->Size = System::Drawing::Size(427, 44);
			this->textBoc_precioProdu->TabIndex = 9;
			this->textBoc_precioProdu->TextChanged += gcnew System::EventHandler(this, &agregarProducto::textBoc_precioProdu_TextChanged);
			// 
			// cantidaStock_produ
			// 
			this->cantidaStock_produ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantidaStock_produ->Location = System::Drawing::Point(469, 516);
			this->cantidaStock_produ->Name = L"cantidaStock_produ";
			this->cantidaStock_produ->Size = System::Drawing::Size(70, 44);
			this->cantidaStock_produ->TabIndex = 10;
			// 
			// btn_guardar_producto
			// 
			this->btn_guardar_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold));
			this->btn_guardar_producto->Location = System::Drawing::Point(1342, 449);
			this->btn_guardar_producto->Name = L"btn_guardar_producto";
			this->btn_guardar_producto->Size = System::Drawing::Size(287, 86);
			this->btn_guardar_producto->TabIndex = 11;
			this->btn_guardar_producto->Text = L"Guardar Producto";
			this->btn_guardar_producto->UseVisualStyleBackColor = true;
			this->btn_guardar_producto->Click += gcnew System::EventHandler(this, &agregarProducto::button1_Click);
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
			this->tabla_datosProducto->Location = System::Drawing::Point(162, 661);
			this->tabla_datosProducto->Name = L"tabla_datosProducto";
			this->tabla_datosProducto->RowHeadersWidth = 62;
			this->tabla_datosProducto->RowTemplate->Height = 28;
			this->tabla_datosProducto->Size = System::Drawing::Size(1487, 372);
			this->tabla_datosProducto->TabIndex = 12;
			this->tabla_datosProducto->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &agregarProducto::tabla_datosProducto_CellContentClick);
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
			// agregarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1062);
			this->Controls->Add(this->tabla_datosProducto);
			this->Controls->Add(this->btn_guardar_producto);
			this->Controls->Add(this->cantidaStock_produ);
			this->Controls->Add(this->textBoc_precioProdu);
			this->Controls->Add(this->combo_Categori);
			this->Controls->Add(this->textBox_NombreProdu);
			this->Controls->Add(this->textBox_CodProdu);
			this->Controls->Add(this->stock_producto);
			this->Controls->Add(this->precio_producto);
			this->Controls->Add(this->categoria_producto);
			this->Controls->Add(this->nom_producto);
			this->Controls->Add(this->cod_producto);
			this->Controls->Add(this->label1);
			this->Name = L"agregarProducto";
			this->Text = L"agregarProducto";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &agregarProducto::agregarProducto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidaStock_produ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Datos del combo box 
	private: System::Void agregarProducto_Load(System::Object^ sender, System::EventArgs^ e) {
		// Cargar productos desde el archivo al cargar el formulario
		combo_Categori->Items->Add("Carnes y Pescados");
		combo_Categori->Items->Add("Embutidos y Conservas");
		combo_Categori->Items->Add("Lácteos y Huevos");
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
bool existeCodigoProducto(std::string codigoBuscado) {
					  std::ifstream archivo("productos.txt");
					  std::string linea;
					  while (std::getline(archivo, linea)) {
						  if (linea.empty()) continue;

						  std::stringstream ss(linea);
						  std::string id, codigo;

						  std::getline(ss, id, ',');       // ID
						  std::getline(ss, codigo, ',');   // Código

						  if (codigo == codigoBuscado) {
							  return true;
						  }
					  }
					  return false;
				  }

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void categoria_producto_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Lectura de los datos
	String^ codigo = textBox_CodProdu->Text->Trim();
	String^ nombre = textBox_NombreProdu->Text->Trim();
	String^ categoria = combo_Categori->Text->Trim();
	String^ precioStr = textBoc_precioProdu->Text->Trim();
	String^ stockStr = cantidaStock_produ->Value.ToString();

	// Validar campos vacíos y combo seleccionado
	if (String::IsNullOrWhiteSpace(codigo) ||
		String::IsNullOrWhiteSpace(nombre) ||
		String::IsNullOrWhiteSpace(precioStr) ||
		combo_Categori->SelectedIndex == -1 ||
		cantidaStock_produ->Value <= 0)
	{
		MessageBox::Show("Debe llenar todos los campos correctamente antes de guardar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	double precio;
	if (!Double::TryParse(precioStr, precio)) {
		MessageBox::Show("Ingrese un precio válido.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	// Validar código duplicado
	std::string codigoStd = msclr::interop::marshal_as<std::string>(codigo);
	if (existeCodigoProducto(codigoStd)) {
		MessageBox::Show("Ya existe un producto con el mismo código. Ingrese uno diferente.", "Error de código duplicado", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Validar que precio sea número decimal válido
	if (!Double::TryParse(precioStr, precio)) {
		MessageBox::Show("Ingrese un precio válido.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Crear producto con estructura
	Producto producto;
	producto.codigo = msclr::interop::marshal_as<std::string>(codigo);
	producto.nombre = msclr::interop::marshal_as<std::string>(nombre);
	producto.categoria = msclr::interop::marshal_as<std::string>(categoria);
	producto.precio = msclr::interop::marshal_as<std::string>(precioStr);
	producto.stock = msclr::interop::marshal_as<std::string>(stockStr);

	// Calcular nuevo ID (conteo de líneas del archivo)
	int nuevoId = 1;
	{
		std::ifstream archivoIn("productos.txt");
		std::string lineaTemp;
		while (std::getline(archivoIn, lineaTemp)) {
			if (!lineaTemp.empty()) ++nuevoId;
		}
	}

	producto.registroId = std::to_string(nuevoId);
	// Guardar en archivo
	std::ofstream archivo("productos.txt", std::ios::app);
	if (!archivo.is_open()) {
		MessageBox::Show("No se pudo abrir el archivo para guardar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	archivo << producto.aLineaTexto() << std::endl;
	archivo.close();

	// Mensaje de éxito y limpieza
	MessageBox::Show("Producto almacenado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	textBox_CodProdu->Clear();
	textBox_NombreProdu->Clear();
	combo_Categori->SelectedIndex = -1;
	textBoc_precioProdu->Clear();
	cantidaStock_produ->Value = 0;

	// Recargar tabla
	cargarProductosDesdeArchivo();
	
}
private: System::Void combo_Categori_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabla_datosProducto_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void textBoc_precioProdu_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}
