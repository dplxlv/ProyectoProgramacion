#pragma once
#include <fstream>  // Para manejar archivos
#include <string> // Para manejar cadenas de texto
#include <msclr/marshal_cppstd.h> // Para convertir entre tipos de C++/CLI y C++
#include <sstream> // Para manejar cadenas de texto con delimitadores

using namespace msclr::interop;

namespace proyecto{
	ref class MyForm; // Declaraci�n adelantada
}

namespace proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de BuscarProducto
	/// </summary>
	public ref class BuscarProducto2 : public System::Windows::Forms::Form
	{
	public:
		BuscarProducto2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~BuscarProducto2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BuscarProducto2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(149, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 31);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Buscar Producto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"codigo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(85, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"precio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(85, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"stock";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 204);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 268);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(184, 20);
			this->textBox3->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(168, 331);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 20);
			this->textBox4->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(214, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"confirmar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BuscarProducto2::button1_Click);


			// 
			// BuscarProducto2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(529, 505);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"BuscarProducto2";
			this->Text = L"BuscarProducto2";
			this->Load += gcnew System::EventHandler(this, &BuscarProducto2::BuscarProducto2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BuscarProducto2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ codigoBuscar = textBox1->Text;

	msclr::interop::marshal_context context;
	std::string codigoBuscarStd = context.marshal_as<std::string>(codigoBuscar);

	std::ifstream archivo("productos.txt");
	if (!archivo.is_open()) {
		MessageBox::Show("No se pudo abrir el archivo productos.txt");
		return;
	}

	std::string linea;
	bool encontrado = false;

	while (std::getline(archivo, linea)) {
		std::stringstream ss(linea);
		std::string codigo, nombre, precio, stock;

		if (std::getline(ss, codigo, ',') &&
			std::getline(ss, nombre, ',') &&
			std::getline(ss, precio, ',') &&
			std::getline(ss, stock, ',')) {

			if (codigo == codigoBuscarStd) {
				textBox2->Text = gcnew String(nombre.c_str());
				textBox3->Text = gcnew String(precio.c_str());
				textBox4->Text = gcnew String(stock.c_str());
				encontrado = true;
				break;
			}
		}
	}

	archivo.close();

	if (!encontrado) {
		MessageBox::Show("Producto no encontrado");
		textBox2->Text = " ";
		textBox3->Text = " ";
		textBox4->Text = " ";
	}
}

};
}
