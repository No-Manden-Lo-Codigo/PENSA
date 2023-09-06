#pragma once

#include <string>
#include <iostream>

namespace CppCLRWinFormsProject
{

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace std;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{


	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnInsertar;
	protected:

	private: System::Windows::Forms::DataGridView^ dgvMaterias;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnAgregar;




	private: System::Windows::Forms::TextBox^ txtCodigo;
	private: System::Windows::Forms::TextBox^ txtMateria;
	private: System::Windows::Forms::TextBox^ txtCreditos;
	private: System::Windows::Forms::ComboBox^ cmbDia;
	private: System::Windows::Forms::ComboBox^ cmbHora;


	private: System::Windows::Forms::TextBox^ txtCarrera;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnBusqueda;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;





	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->dgvMaterias = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->txtMateria = (gcnew System::Windows::Forms::TextBox());
			this->txtCreditos = (gcnew System::Windows::Forms::TextBox());
			this->cmbDia = (gcnew System::Windows::Forms::ComboBox());
			this->cmbHora = (gcnew System::Windows::Forms::ComboBox());
			this->txtCarrera = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnBusqueda = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnInsertar
			// 
			this->btnInsertar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnInsertar->Location = System::Drawing::Point(759, 12);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(128, 54);
			this->btnInsertar->TabIndex = 0;
			this->btnInsertar->Text = L"Insert";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &Form1::btnInsertar_Click);
			// 
			// dgvMaterias
			// 
			this->dgvMaterias->AllowUserToAddRows = false;
			this->dgvMaterias->AllowUserToDeleteRows = false;
			this->dgvMaterias->AllowUserToResizeColumns = false;
			this->dgvMaterias->AllowUserToResizeRows = false;
			this->dgvMaterias->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dgvMaterias->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvMaterias->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMaterias->Location = System::Drawing::Point(12, 54);
			this->dgvMaterias->MultiSelect = false;
			this->dgvMaterias->Name = L"dgvMaterias";
			this->dgvMaterias->ReadOnly = true;
			this->dgvMaterias->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvMaterias->Size = System::Drawing::Size(658, 443);
			this->dgvMaterias->TabIndex = 1;
			this->dgvMaterias->SelectionChanged += gcnew System::EventHandler(this, &Form1::dgvMaterias_SelectionChanged);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(893, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(1027, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 54);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(1161, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 54);
			this->button4->TabIndex = 4;
			this->button4->Text = L"LOL";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnAgregar->Location = System::Drawing::Point(1205, 516);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 5;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCodigo->Location = System::Drawing::Point(12, 517);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->ReadOnly = true;
			this->txtCodigo->Size = System::Drawing::Size(121, 20);
			this->txtCodigo->TabIndex = 8;
			this->txtCodigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtMateria
			// 
			this->txtMateria->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtMateria->Location = System::Drawing::Point(175, 517);
			this->txtMateria->Name = L"txtMateria";
			this->txtMateria->ReadOnly = true;
			this->txtMateria->Size = System::Drawing::Size(121, 20);
			this->txtMateria->TabIndex = 9;
			this->txtMateria->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtCreditos
			// 
			this->txtCreditos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCreditos->Location = System::Drawing::Point(346, 517);
			this->txtCreditos->Name = L"txtCreditos";
			this->txtCreditos->ReadOnly = true;
			this->txtCreditos->Size = System::Drawing::Size(121, 20);
			this->txtCreditos->TabIndex = 10;
			this->txtCreditos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// cmbDia
			// 
			this->cmbDia->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cmbDia->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbDia->FormattingEnabled = true;
			this->cmbDia->Location = System::Drawing::Point(803, 516);
			this->cmbDia->Name = L"cmbDia";
			this->cmbDia->Size = System::Drawing::Size(121, 21);
			this->cmbDia->TabIndex = 11;
			// 
			// cmbHora
			// 
			this->cmbHora->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cmbHora->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbHora->FormattingEnabled = true;
			this->cmbHora->Location = System::Drawing::Point(1002, 516);
			this->cmbHora->Name = L"cmbHora";
			this->cmbHora->Size = System::Drawing::Size(121, 21);
			this->cmbHora->TabIndex = 12;
			// 
			// txtCarrera
			// 
			this->txtCarrera->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCarrera->Location = System::Drawing::Point(523, 517);
			this->txtCarrera->Name = L"txtCarrera";
			this->txtCarrera->ReadOnly = true;
			this->txtCarrera->Size = System::Drawing::Size(121, 20);
			this->txtCarrera->TabIndex = 15;
			this->txtCarrera->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(577, 20);
			this->textBox1->TabIndex = 16;
			// 
			// btnBusqueda
			// 
			this->btnBusqueda->Location = System::Drawing::Point(595, 25);
			this->btnBusqueda->Name = L"btnBusqueda";
			this->btnBusqueda->Size = System::Drawing::Size(75, 23);
			this->btnBusqueda->TabIndex = 17;
			this->btnBusqueda->Text = L"Buscar";
			this->btnBusqueda->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->listBox6);
			this->panel1->Controls->Add(this->listBox5);
			this->panel1->Controls->Add(this->listBox4);
			this->panel1->Controls->Add(this->listBox3);
			this->panel1->Controls->Add(this->listBox2);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Location = System::Drawing::Point(759, 92);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(543, 383);
			this->panel1->TabIndex = 18;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(15, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(495, 95);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(15, 143);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(495, 95);
			this->listBox2->TabIndex = 1;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(15, 268);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(495, 95);
			this->listBox3->TabIndex = 2;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(15, 388);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(495, 95);
			this->listBox4->TabIndex = 3;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(15, 507);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(495, 95);
			this->listBox5->TabIndex = 4;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(15, 628);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(495, 95);
			this->listBox6->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1326, 570);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnBusqueda);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtCarrera);
			this->Controls->Add(this->cmbHora);
			this->Controls->Add(this->cmbDia);
			this->Controls->Add(this->txtCreditos);
			this->Controls->Add(this->txtMateria);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dgvMaterias);
			this->Controls->Add(this->btnInsertar);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		SqlConnection^ conn;
		SqlDataAdapter^ adapter;
		SqlCommand^ cmd;
		DataTable^ dt = gcnew DataTable();

	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e)
	{

		String^ query = "SELECT * FROM sistemas";

		conn = gcnew SqlConnection("Data Source=JAGC-PC;Initial Catalog=pensa;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");

		try
		{
			conn->Open();
			cmd = gcnew SqlCommand(query, conn);

			adapter = gcnew SqlDataAdapter(cmd);

			adapter->Fill(dt);
			dgvMaterias->DataSource = dt;
			conn->Close();
		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);
		}
		btnInsertar->Enabled = false;
	}
	private: System::Void dgvMaterias_SelectionChanged(System::Object^ sender, System::EventArgs^ e)
	{		
		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtCodigo->Text = dgvMaterias->SelectedRows[0]->Cells["codigo"]->Value->ToString();
		}

		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtCreditos->Text = dgvMaterias->SelectedRows[0]->Cells["creditos"]->Value->ToString();
		}

		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtMateria->Text = dgvMaterias->SelectedRows[0]->Cells["materia"]->Value->ToString();
		}
		button1->Enabled = false;

		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtCarrera->Text = dgvMaterias->SelectedRows[0]->Cells["carrera"]->Value->ToString();
		}
	}
	};
}