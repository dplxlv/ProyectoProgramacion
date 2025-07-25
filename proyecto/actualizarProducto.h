#pragma once
#include <fstream>               
#include <string>                
#include <msclr/marshal_cppstd.h> 
#include <sstream> 
namespace proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de actualizarProducto
	/// </summary>
	public ref class actualizarProducto : public System::Windows::Forms::Form
	{
	public:
		actualizarProducto(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidadStock_produ))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(456, 86);
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
			this->label2->Location = System::Drawing::Point(293, 278);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 60);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Código";
			// 
			// textBox_CodProdu
			// 
			this->textBox_CodProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_CodProdu->Location = System::Drawing::Point(588, 294);
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
			this->label3->Location = System::Drawing::Point(277, 385);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 60);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nombre";
			// 
			// textBox_NombreProdu
			// 
			this->textBox_NombreProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NombreProdu->Location = System::Drawing::Point(588, 413);
			this->textBox_NombreProdu->Name = L"textBox_NombreProdu";
			this->textBox_NombreProdu->Size = System::Drawing::Size(358, 44);
			this->textBox_NombreProdu->TabIndex = 4;
			// 
			// textBox_precioProdu
			// 
			this->textBox_precioProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_precioProdu->Location = System::Drawing::Point(588, 626);
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
			this->label4->Location = System::Drawing::Point(264, 504);
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
			this->label5->Location = System::Drawing::Point(264, 610);
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
			this->label6->Location = System::Drawing::Point(264, 731);
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
			this->btn_buscarProducto->Location = System::Drawing::Point(1054, 324);
			this->btn_buscarProducto->Name = L"btn_buscarProducto";
			this->btn_buscarProducto->Size = System::Drawing::Size(217, 82);
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
			this->btn_actulizarProducto->Location = System::Drawing::Point(987, 562);
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
			this->cantidadStock_produ->Location = System::Drawing::Point(588, 731);
			this->cantidadStock_produ->Name = L"cantidadStock_produ";
			this->cantidadStock_produ->Size = System::Drawing::Size(120, 44);
			this->cantidadStock_produ->TabIndex = 13;
			// 
			// combo_Categori
			// 
			this->combo_Categori->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_Categori->FormattingEnabled = true;
			this->combo_Categori->Location = System::Drawing::Point(588, 516);
			this->combo_Categori->Name = L"combo_Categori";
			this->combo_Categori->Size = System::Drawing::Size(358, 45);
			this->combo_Categori->TabIndex = 14;
			this->combo_Categori->SelectedIndexChanged += gcnew System::EventHandler(this, &actualizarProducto::combo_Categori_SelectedIndexChanged);
			// 
			// actualizarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1335, 847);
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
			this->Load += gcnew System::EventHandler(this, &actualizarProducto::actualizarProducto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidadStock_produ))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_buscarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
		// Obtener texto desde los TextBox y eliminar espacios
		String^ codBuscado = textBox_CodProdu->Text->Trim();
		String^ nomBuscado = textBox_NombreProdu->Text->Trim();

		// Validar que al menos uno esté lleno
		if (codBuscado == "" && nomBuscado == "") {
			MessageBox::Show("Ingrese el código o nombre del producto para buscar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Convertir a std::string
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
			std::stringstream ss(linea);
			std::string codigo, nombre, categoria, precio, stock;

			std::getline(ss, codigo, ',');
			std::getline(ss, nombre, ',');
			std::getline(ss, categoria, ',');
			std::getline(ss, precio, ',');
			std::getline(ss, stock);

			if ((codigoBuscado != "" && codigo == codigoBuscado) ||
				(nombreBuscado != "" && nombre == nombreBuscado)) {

				textBox_CodProdu->Text = gcnew String(codigo.c_str());
				textBox_NombreProdu->Text = gcnew String(nombre.c_str());
				combo_Categori->Text = gcnew String(categoria.c_str());
				textBox_precioProdu->Text = gcnew String(precio.c_str());
				cantidadStock_produ->Value = atoi(stock.c_str());

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
	combo_Categori->Items->Add("Carnes");
	combo_Categori->Items->Add("Embutidos");
	combo_Categori->Items->Add("Lácteos");
	combo_Categori->Items->Add("Bebidas");
	combo_Categori->Items->Add("Cereales");
	combo_Categori->Items->Add("Snacks");
}
private: System::Void btn_actulizarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream archivo("productos.txt");
	if (!archivo.is_open()) {
		MessageBox::Show("No se pudo abrir el archivo.", "Error", MessageBoxButtons::OK);
		return;
	}

	std::string codigoBuscado = msclr::interop::marshal_as<std::string>(textBox_CodProdu->Text);
	std::string contenidoNuevo;
	bool actualizado = false;

	std::string linea;
	std::string contenidoTotal = "";

	while (std::getline(archivo, linea)) {
		std::stringstream ss(linea);
		std::string codigo, nombre, categoria, precio, stock;

		std::getline(ss, codigo, ',');
		std::getline(ss, nombre, ',');
		std::getline(ss, categoria, ',');
		std::getline(ss, precio, ',');
		std::getline(ss, stock);

		if (codigo == codigoBuscado) {
			// Datos del formulario
			std::string nuevoNombre = msclr::interop::marshal_as<std::string>(textBox_NombreProdu->Text);
			std::string nuevaCategoria = msclr::interop::marshal_as<std::string>(combo_Categori->Text);
			std::string nuevoPrecio = msclr::interop::marshal_as<std::string>(textBox_precioProdu->Text);
			std::string nuevoStock = std::to_string((int)cantidadStock_produ->Value);

			// Validar si hay cambios
			if (nuevoNombre == nombre && nuevaCategoria == categoria &&
				nuevoPrecio == precio && nuevoStock == stock) {
				MessageBox::Show("No se ha modificado ningún dato del producto.", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				archivo.close();
				return;
			}

			// Si hay cambios, actualizar la línea
			linea = codigo + "," + nuevoNombre + "," + nuevaCategoria + "," + nuevoPrecio + "," + nuevoStock;
			actualizado = true;
		}

		contenidoTotal += linea + "\n";
	}

	archivo.close();

	if (!actualizado) {
		MessageBox::Show("No se encontró el producto para actualizar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	std::ofstream salida("productos.txt", std::ios::trunc);
	salida << contenidoTotal;
	salida.close();

	MessageBox::Show("Producto actualizado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Limpiar campos
	textBox_CodProdu->Clear();
	textBox_NombreProdu->Clear();
	textBox_precioProdu->Clear();
	combo_Categori->Text = "";
	cantidadStock_produ->Value = 0;


}
private: System::Void actualizarProducto_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
