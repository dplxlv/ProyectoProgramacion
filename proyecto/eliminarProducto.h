#pragma once
#include "Producto.h"
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <sstream> 
namespace proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de eliminarProducto
	/// </summary>
	public ref class eliminarProducto : public System::Windows::Forms::Form
	{
	public:
		eliminarProducto(void)
		{
			InitializeComponent();
			CargarProductosEnTabla();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~eliminarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ btn_radioCodEliminar;
	private: System::Windows::Forms::RadioButton^ btn_radioNombreEliminar;


	private: System::Windows::Forms::TextBox^ tem_busquedaEliminar;
	private: System::Windows::Forms::DataGridView^ tabla_datosProductoEliminar;







	private: System::Windows::Forms::Button^ btn_cargarDatos;
	private: System::Windows::Forms::Button^ btn_eliminarProducto;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(eliminarProducto::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_radioCodEliminar = (gcnew System::Windows::Forms::RadioButton());
			this->btn_radioNombreEliminar = (gcnew System::Windows::Forms::RadioButton());
			this->tem_busquedaEliminar = (gcnew System::Windows::Forms::TextBox());
			this->tabla_datosProductoEliminar = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_cargarDatos = (gcnew System::Windows::Forms::Button());
			this->btn_eliminarProducto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProductoEliminar))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(573, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(785, 91);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Eliminar producto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(305, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(387, 60);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Eliminar por:";
			// 
			// btn_radioCodEliminar
			// 
			this->btn_radioCodEliminar->AutoSize = true;
			this->btn_radioCodEliminar->BackColor = System::Drawing::Color::Transparent;
			this->btn_radioCodEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_radioCodEliminar->Location = System::Drawing::Point(753, 232);
			this->btn_radioCodEliminar->Name = L"btn_radioCodEliminar";
			this->btn_radioCodEliminar->Size = System::Drawing::Size(130, 33);
			this->btn_radioCodEliminar->TabIndex = 3;
			this->btn_radioCodEliminar->TabStop = true;
			this->btn_radioCodEliminar->Text = L"Código ";
			this->btn_radioCodEliminar->UseVisualStyleBackColor = false;
			this->btn_radioCodEliminar->CheckedChanged += gcnew System::EventHandler(this, &eliminarProducto::btn_radioCodEliminar_CheckedChanged);
			// 
			// btn_radioNombreEliminar
			// 
			this->btn_radioNombreEliminar->AutoSize = true;
			this->btn_radioNombreEliminar->BackColor = System::Drawing::Color::Transparent;
			this->btn_radioNombreEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_radioNombreEliminar->Location = System::Drawing::Point(959, 232);
			this->btn_radioNombreEliminar->Name = L"btn_radioNombreEliminar";
			this->btn_radioNombreEliminar->Size = System::Drawing::Size(132, 33);
			this->btn_radioNombreEliminar->TabIndex = 4;
			this->btn_radioNombreEliminar->TabStop = true;
			this->btn_radioNombreEliminar->Text = L"Nombre";
			this->btn_radioNombreEliminar->UseVisualStyleBackColor = false;
			this->btn_radioNombreEliminar->CheckedChanged += gcnew System::EventHandler(this, &eliminarProducto::btn_radioNombreEliminar_CheckedChanged);
			// 
			// tem_busquedaEliminar
			// 
			this->tem_busquedaEliminar->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tem_busquedaEliminar->Location = System::Drawing::Point(394, 296);
			this->tem_busquedaEliminar->Name = L"tem_busquedaEliminar";
			this->tem_busquedaEliminar->Size = System::Drawing::Size(800, 46);
			this->tem_busquedaEliminar->TabIndex = 5;
			this->tem_busquedaEliminar->TextChanged += gcnew System::EventHandler(this, &eliminarProducto::tem_busquedaEliminar_TextChanged);
			// 
			// tabla_datosProductoEliminar
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabla_datosProductoEliminar->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->tabla_datosProductoEliminar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tabla_datosProductoEliminar->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tabla_datosProductoEliminar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabla_datosProductoEliminar->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Código, this->Nombre, this->Categoría, this->Precio, this->Stock
			});
			this->tabla_datosProductoEliminar->Location = System::Drawing::Point(229, 559);
			this->tabla_datosProductoEliminar->Name = L"tabla_datosProductoEliminar";
			this->tabla_datosProductoEliminar->RowHeadersWidth = 62;
			this->tabla_datosProductoEliminar->RowTemplate->Height = 28;
			this->tabla_datosProductoEliminar->Size = System::Drawing::Size(1487, 372);
			this->tabla_datosProductoEliminar->TabIndex = 7;
			this->tabla_datosProductoEliminar->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &eliminarProducto::tabla_datosProductoEliminar_CellContentClick);
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
			// btn_cargarDatos
			// 
			this->btn_cargarDatos->BackColor = System::Drawing::Color::Transparent;
			this->btn_cargarDatos->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cargarDatos->Location = System::Drawing::Point(339, 362);
			this->btn_cargarDatos->Name = L"btn_cargarDatos";
			this->btn_cargarDatos->Size = System::Drawing::Size(543, 68);
			this->btn_cargarDatos->TabIndex = 9;
			this->btn_cargarDatos->Text = L"Cargar Productos";
			this->btn_cargarDatos->UseMnemonic = false;
			this->btn_cargarDatos->UseVisualStyleBackColor = false;
			this->btn_cargarDatos->Click += gcnew System::EventHandler(this, &eliminarProducto::btn_cargarDatos_Click);
			// 
			// btn_eliminarProducto
			// 
			this->btn_eliminarProducto->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminarProducto->Location = System::Drawing::Point(1252, 262);
			this->btn_eliminarProducto->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btn_eliminarProducto->Name = L"btn_eliminarProducto";
			this->btn_eliminarProducto->Size = System::Drawing::Size(249, 109);
			this->btn_eliminarProducto->TabIndex = 10;
			this->btn_eliminarProducto->Text = L"Eliminar \r\nProducto";
			this->btn_eliminarProducto->UseVisualStyleBackColor = true;
			this->btn_eliminarProducto->Click += gcnew System::EventHandler(this, &eliminarProducto::btn_eliminarProducto_Click);
			// 
			// eliminarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1062);
			this->Controls->Add(this->btn_eliminarProducto);
			this->Controls->Add(this->btn_cargarDatos);
			this->Controls->Add(this->tabla_datosProductoEliminar);
			this->Controls->Add(this->tem_busquedaEliminar);
			this->Controls->Add(this->btn_radioNombreEliminar);
			this->Controls->Add(this->btn_radioCodEliminar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"eliminarProducto";
			this->Text = L"eliminarProducto";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProductoEliminar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tem_busquedaEliminar_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void btn_radioCodEliminar_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_radioNombreEliminar_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   void CargarProductosEnTabla() {
		   tabla_datosProductoEliminar->Rows->Clear();
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
			   tabla_datosProductoEliminar->Rows->Add(
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
private: System::Void tabla_datosProductoEliminar_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

	   private: System::Void btn_cargarDatos_Click(System::Object^ sender, System::EventArgs^ e) {

		   CargarProductosEnTabla();
		   if (tabla_datosProductoEliminar->Rows->Count > 0) {
			   MessageBox::Show("Los productos ya están cargados.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   return;
		   }

	   }

private: System::Void btn_eliminarProducto_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ valorBuscado = tem_busquedaEliminar->Text->Trim();

	if (valorBuscado == "") {
		MessageBox::Show("Ingrese un valor para eliminar.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	std::ifstream archivo("productos.txt");
	if (!archivo.is_open()) {
		MessageBox::Show("No se pudo abrir el archivo.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	std::vector<Producto> productos;
	std::string linea;
	bool eliminado = false;

	while (std::getline(archivo, linea)) {
		if (linea.empty()) continue;

		std::stringstream ss(linea);
		Producto producto;
		std::getline(ss, producto.registroId, ',');  // ✅ Leer registroId primero
		std::getline(ss, producto.codigo, ',');
		std::getline(ss, producto.nombre, ',');
		std::getline(ss, producto.categoria, ',');
		std::getline(ss, producto.precio, ',');
		std::getline(ss, producto.stock);

		bool coincide = false;

		// Comparar con código o nombre según el botón marcado
		if (btn_radioCodEliminar->Checked && valorBuscado == gcnew String(producto.codigo.c_str())) {
			coincide = true;
		}
		else if (btn_radioNombreEliminar->Checked && valorBuscado == gcnew String(producto.nombre.c_str())) {
			coincide = true;
		}

		if (!coincide) {
			productos.push_back(producto); // Mantener si no coincide
		}
		else {
			eliminado = true; // No lo agregamos, se elimina
		}
	}
	archivo.close();

	if (eliminado) {
		std::ofstream archivoOut("productos.txt", std::ios::trunc);
		for (const auto& producto : productos) {
			archivoOut << producto.aLineaTexto() << std::endl;
		}
		archivoOut.close();

		MessageBox::Show("Producto eliminado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		CargarProductosEnTabla(); // Recarga la tabla o lista
	}
	else {
		MessageBox::Show("Producto no encontrado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
