#pragma once
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
	/// Resumen de agregarProducto
	/// </summary>
	public ref class agregarProducto : public System::Windows::Forms::Form
	{
	public:
		agregarProducto(void)
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidaStock_produ))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(61, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(780, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Agregar Producto";
			// 
			// cod_producto
			// 
			this->cod_producto->AutoSize = true;
			this->cod_producto->BackColor = System::Drawing::Color::Transparent;
			this->cod_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cod_producto->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cod_producto->Location = System::Drawing::Point(409, 199);
			this->cod_producto->Name = L"cod_producto";
			this->cod_producto->Size = System::Drawing::Size(505, 60);
			this->cod_producto->TabIndex = 1;
			this->cod_producto->Text = L"Código Producto:";
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
			this->nom_producto->Location = System::Drawing::Point(457, 309);
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
			this->categoria_producto->Location = System::Drawing::Point(449, 461);
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
			this->precio_producto->Location = System::Drawing::Point(449, 613);
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
			this->stock_producto->Location = System::Drawing::Point(457, 754);
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
			this->textBox_CodProdu->Location = System::Drawing::Point(947, 215);
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
			this->textBox_NombreProdu->Location = System::Drawing::Point(947, 345);
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
			this->combo_Categori->Location = System::Drawing::Point(947, 479);
			this->combo_Categori->Name = L"combo_Categori";
			this->combo_Categori->Size = System::Drawing::Size(457, 45);
			this->combo_Categori->TabIndex = 8;
			this->combo_Categori->SelectedIndexChanged += gcnew System::EventHandler(this, &agregarProducto::combo_Categori_SelectedIndexChanged);
			// 
			// textBoc_precioProdu
			// 
			this->textBoc_precioProdu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBoc_precioProdu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoc_precioProdu->Location = System::Drawing::Point(947, 631);
			this->textBoc_precioProdu->Name = L"textBoc_precioProdu";
			this->textBoc_precioProdu->Size = System::Drawing::Size(457, 44);
			this->textBoc_precioProdu->TabIndex = 9;
			// 
			// cantidaStock_produ
			// 
			this->cantidaStock_produ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cantidaStock_produ->Location = System::Drawing::Point(947, 773);
			this->cantidaStock_produ->Name = L"cantidaStock_produ";
			this->cantidaStock_produ->Size = System::Drawing::Size(70, 44);
			this->cantidaStock_produ->TabIndex = 10;
			// 
			// btn_guardar_producto
			// 
			this->btn_guardar_producto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold));
			this->btn_guardar_producto->Location = System::Drawing::Point(1506, 903);
			this->btn_guardar_producto->Name = L"btn_guardar_producto";
			this->btn_guardar_producto->Size = System::Drawing::Size(248, 120);
			this->btn_guardar_producto->TabIndex = 11;
			this->btn_guardar_producto->Text = L"Guardar Producto";
			this->btn_guardar_producto->UseVisualStyleBackColor = true;
			this->btn_guardar_producto->Click += gcnew System::EventHandler(this, &agregarProducto::button1_Click);
			// 
			// agregarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1062);
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
			this->Load += gcnew System::EventHandler(this, &agregarProducto::agregarProducto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cantidaStock_produ))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Datos del combo box 
	private: System::Void agregarProducto_Load(System::Object^ sender, System::EventArgs^ e) {
		combo_Categori->Items->Add("Carnes");
		combo_Categori->Items->Add("Carnes");
		combo_Categori->Items->Add("Embutidos");
		combo_Categori->Items->Add("Lácteos");
		combo_Categori->Items->Add("Bebidas");
		combo_Categori->Items->Add("Cereales");
		combo_Categori->Items->Add("Snacks");

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
	//Lectura de los datos ingresador por el teclado 
	String^ codigo = textBox_CodProdu->Text->Trim();
	String^ nombre = textBox_NombreProdu->Text->Trim();
	String^ categoria = combo_Categori->Text->Trim();
	String^ precio = textBoc_precioProdu->Text->Trim();
	String^ stock = cantidaStock_produ->Value.ToString();
	//En caso si los campos estan vacios
	if (String::IsNullOrWhiteSpace(codigo) ||
		String::IsNullOrWhiteSpace(nombre) ||
		String::IsNullOrWhiteSpace(precio) ||
		combo_Categori->SelectedIndex == -1 ||  
		cantidaStock_produ->Value <= 0) {

		MessageBox::Show("Debe llenar todos los campos correctamente antes de guardar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	// Guardar en archivo de texto
	std::ofstream archivo("productos.txt", std::ios::app);
	if (!archivo.is_open()) {
		MessageBox::Show("No se pudo abrir el archivo para guardar.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	archivo << msclr::interop::marshal_as<std::string>(codigo) << ","
		<< msclr::interop::marshal_as<std::string>(nombre) << ","
		<< msclr::interop::marshal_as<std::string>(categoria) << ","
		<< msclr::interop::marshal_as<std::string>(precio) << ","
		<< msclr::interop::marshal_as<std::string>(stock) << std::endl;

	archivo.close();
	// Mensaje de éxito
	MessageBox::Show("Producto almacenado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Limpiar campos
	textBox_CodProdu->Clear();
	textBox_NombreProdu->Clear();
	combo_Categori->SelectedIndex = -1;
	textBoc_precioProdu->Clear();
	cantidaStock_produ->Value = 0;
	this->Close();
}
private: System::Void combo_Categori_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
