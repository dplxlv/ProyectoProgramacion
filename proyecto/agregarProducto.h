#pragma once
#include <fstream>  // Para manejar archivos
#include <string> // Para manejar cadenas de texto
#include <msclr/marshal_cppstd.h> // Para convertir entre tipos de C++/CLI y C++


using namespace msclr::interop;

namespace proyecto {
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
	/// Resumen de agregarProducto
	/// </summary>
	public ref class agregarProducto : public System::Windows::Forms::Form
	{
	public:
		agregarProducto(void)
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
		~agregarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
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
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(agregarProducto::typeid));
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
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(114, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Agregar Producto";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre ";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Precio ";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Codigo ";
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 307);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock ";
			this->textBox1->Location = System::Drawing::Point(120, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 20);
			this->textBox1->TabIndex = 5;
			this->textBox2->Location = System::Drawing::Point(120, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 20);
			this->textBox2->TabIndex = 6;
			this->textBox3->Location = System::Drawing::Point(120, 242);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 20);
			this->textBox3->TabIndex = 7;
			this->textBox4->Location = System::Drawing::Point(120, 307);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(220, 20);
			this->textBox4->TabIndex = 8;
			this->button1->Location = System::Drawing::Point(188, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &agregarProducto::button1_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(470, 453);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"agregarProducto";
			this->Text = L"agregarProducto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string codigo = marshal_as<std::string>(textBox1->Text);
	std::string nombre = marshal_as<std::string>(textBox2->Text);
	std::string precio = marshal_as<std::string>(textBox3->Text);
	std::string stock = marshal_as<std::string>(textBox4->Text);

	std::ofstream archivo("productos.txt", std::ios::app);
	if (archivo.is_open()) {
		archivo << codigo << "," << nombre << "," << precio << "," << stock << std::endl;
		archivo.close();

		MessageBox::Show("Producto guardado con �xito", "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Close();
	}
	else {
		MessageBox::Show("No se pudo abrir el archivo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};
}
