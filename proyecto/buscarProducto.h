#pragma once

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Código;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::Label^ label3;












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
			this->Código = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(544, 51);
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
			this->label2->Location = System::Drawing::Point(319, 157);
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
			this->btn_radioCod->Location = System::Drawing::Point(777, 176);
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
			this->btn_radioNombre->Location = System::Drawing::Point(993, 176);
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
			this->tem_busqueda->Location = System::Drawing::Point(269, 259);
			this->tem_busqueda->Name = L"tem_busqueda";
			this->tem_busqueda->Size = System::Drawing::Size(800, 46);
			this->tem_busqueda->TabIndex = 4;
			// 
			// btn_buscarProdu
			// 
			this->btn_buscarProdu->BackColor = System::Drawing::Color::Transparent;
			this->btn_buscarProdu->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_buscarProdu->Location = System::Drawing::Point(1130, 242);
			this->btn_buscarProdu->Name = L"btn_buscarProdu";
			this->btn_buscarProdu->Size = System::Drawing::Size(206, 68);
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
			this->tabla_datosProducto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Código,
					this->Nombre, this->Categoría, this->Precio, this->Stock
			});
			this->tabla_datosProducto->Location = System::Drawing::Point(83, 440);
			this->tabla_datosProducto->Name = L"tabla_datosProducto";
			this->tabla_datosProducto->RowHeadersWidth = 62;
			this->tabla_datosProducto->RowTemplate->Height = 28;
			this->tabla_datosProducto->Size = System::Drawing::Size(1220, 100);
			this->tabla_datosProducto->TabIndex = 6;
			this->tabla_datosProducto->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &buscarProducto::dataGridView1_CellContentClick);
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
			this->Stock->HeaderText = L"Stock              ";
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
			this->label3->Location = System::Drawing::Point(553, 364);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(687, 60);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Resultados encontrados";
			this->label3->Click += gcnew System::EventHandler(this, &buscarProducto::label3_Click);
			// 
			// buscarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1062);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabla_datosProducto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_radioCod_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btn_buscarProdu_Click(System::Object^ sender, System::EventArgs^ e) {
	tabla_datosProducto->Rows->Clear(); // Limpiar la tabla

	String^ val_busqueda = tem_busqueda->Text->Trim();

	if (val_busqueda == "") {
		MessageBox::Show("Ingrese el código o nombre para la búsqueda del producto", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	System::IO::StreamReader^ archivo = gcnew System::IO::StreamReader("productos.txt");
	String^ linea;
	bool encontrado = false;

	while (!String::IsNullOrEmpty(linea = archivo->ReadLine())) {
		array<String^>^ campos = linea->Split(',');

		if (campos->Length == 5) {
			String^ codigo = campos[0]->Trim();
			String^ nombre = campos[1]->Trim();

			// Buscar en código o nombre
			if (codigo->Contains(val_busqueda) || nombre->Contains(val_busqueda)) {
				tabla_datosProducto->Rows->Add(codigo, nombre, campos[2]->Trim(), campos[3]->Trim(), campos[4]->Trim());
				encontrado = true;
			}
		}
	}

	archivo->Close();

	if (!encontrado) {
		MessageBox::Show("No existen datos del producto ingresado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}

};
}
