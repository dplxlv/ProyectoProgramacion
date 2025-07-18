#pragma once
#include "actualizarProducto.h" //Pantalla Actualizar producto
#include "agregarProducto.h" //Pantalla Agregar producto
#include "BuscarProducto2.h"//Pantalla Buscar producto
namespace proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_agregar;
	private: System::Windows::Forms::Button^ btn_buscar;
	private: System::Windows::Forms::Button^ btn_actualizar;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Button^ btn_salir;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ menuTitulo;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->btn_buscar = (gcnew System::Windows::Forms::Button());
			this->btn_actualizar = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->btn_salir = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuTitulo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_agregar
			// 
			this->btn_agregar->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btn_agregar->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_agregar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_agregar->Location = System::Drawing::Point(951, 248);
			this->btn_agregar->Margin = System::Windows::Forms::Padding(2);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(309, 62);
			this->btn_agregar->TabIndex = 0;
			this->btn_agregar->Text = L"Agregar Nuevo Producto al Inventario";
			this->btn_agregar->UseVisualStyleBackColor = false;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &MyForm::btn_agregar_Click);
			// 
			// btn_buscar
			// 
			this->btn_buscar->BackColor = System::Drawing::SystemColors::Highlight;
			this->btn_buscar->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_buscar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_buscar->Location = System::Drawing::Point(952, 324);
			this->btn_buscar->Margin = System::Windows::Forms::Padding(2);
			this->btn_buscar->Name = L"btn_buscar";
			this->btn_buscar->Size = System::Drawing::Size(309, 62);
			this->btn_buscar->TabIndex = 8;
			this->btn_buscar->Text = L"Buscar Producto en el Inventario";
			this->btn_buscar->UseVisualStyleBackColor = false;
			this->btn_buscar->Click += gcnew System::EventHandler(this, &MyForm::btn_buscar_Click);
			// 
			// btn_actualizar
			// 
			this->btn_actualizar->BackColor = System::Drawing::SystemColors::Highlight;
			this->btn_actualizar->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_actualizar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_actualizar->Location = System::Drawing::Point(951, 401);
			this->btn_actualizar->Margin = System::Windows::Forms::Padding(2);
			this->btn_actualizar->Name = L"btn_actualizar";
			this->btn_actualizar->Size = System::Drawing::Size(309, 62);
			this->btn_actualizar->TabIndex = 9;
			this->btn_actualizar->Text = L"Actualizar Producto del Inventario";
			this->btn_actualizar->UseVisualStyleBackColor = false;
			this->btn_actualizar->Click += gcnew System::EventHandler(this, &MyForm::btn_actualizar_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::SystemColors::Highlight;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_eliminar->Location = System::Drawing::Point(951, 482);
			this->btn_eliminar->Margin = System::Windows::Forms::Padding(2);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(309, 62);
			this->btn_eliminar->TabIndex = 10;
			this->btn_eliminar->Text = L"Eliminar Producto del Inventario";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			// 
			// btn_salir
			// 
			this->btn_salir->BackColor = System::Drawing::Color::Red;
			this->btn_salir->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14));
			this->btn_salir->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_salir->Location = System::Drawing::Point(1091, 624);
			this->btn_salir->Margin = System::Windows::Forms::Padding(2);
			this->btn_salir->Name = L"btn_salir";
			this->btn_salir->Size = System::Drawing::Size(143, 59);
			this->btn_salir->TabIndex = 11;
			this->btn_salir->Text = L"Salir";
			this->btn_salir->UseVisualStyleBackColor = false;
			this->btn_salir->Click += gcnew System::EventHandler(this, &MyForm::btn_salir_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Location = System::Drawing::Point(546, 117);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(463, 91);
			this->panel1->TabIndex = 12;
			// 
			// menuTitulo
			// 
			this->menuTitulo->AutoSize = true;
			this->menuTitulo->Font = (gcnew System::Drawing::Font(L"Stencil", 24));
			this->menuTitulo->Location = System::Drawing::Point(556, 125);
			this->menuTitulo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->menuTitulo->Name = L"menuTitulo";
			this->menuTitulo->Size = System::Drawing::Size(446, 76);
			this->menuTitulo->TabIndex = 0;
			this->menuTitulo->Text = L"Bienvenido al Sistema\r\n de Gestión de Inventario";
			this->menuTitulo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->menuTitulo->Click += gcnew System::EventHandler(this, &MyForm::menuTitulo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1283, 690);
			this->Controls->Add(this->menuTitulo);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_salir);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->btn_actualizar);
			this->Controls->Add(this->btn_buscar);
			this->Controls->Add(this->btn_agregar);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"MenuPrincipal ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuTitulo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
//Boton Actualizar
private: System::Void btn_actualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	proyecto::actualizarProducto^ formActualizar = gcnew proyecto::actualizarProducto();
	this->Hide();
	formActualizar->ShowDialog();
	this->Show();
}
//Boton Agregar
private: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e) {
	proyecto::agregarProducto^ formAgregar = gcnew proyecto::agregarProducto();
	this->Hide();
	formAgregar->ShowDialog();	
	this->Show();

}
//Boton Buscar
private: System::Void btn_buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	proyecto::BuscarProducto2^ formBuscar = gcnew proyecto::BuscarProducto2();
	this->Hide();
	formBuscar->ShowDialog();
	this->Show();
}
};
}
