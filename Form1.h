#pragma once

#include <string>
#include <iostream>

namespace CppCLRWinFormsProject
{

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ lblLimiteCr;
	private: System::Windows::Forms::TextBox^ txtCarrera;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lblLimiteCr = (gcnew System::Windows::Forms::Label());
			this->txtCarrera = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnInsertar
			// 
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
			this->dgvMaterias->Location = System::Drawing::Point(12, 12);
			this->dgvMaterias->MultiSelect = false;
			this->dgvMaterias->Name = L"dgvMaterias";
			this->dgvMaterias->ReadOnly = true;
			this->dgvMaterias->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvMaterias->Size = System::Drawing::Size(658, 526);
			this->dgvMaterias->TabIndex = 1;
			this->dgvMaterias->SelectionChanged += gcnew System::EventHandler(this, &Form1::dgvMaterias_SelectionChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(893, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1027, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 54);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1161, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 54);
			this->button4->TabIndex = 4;
			this->button4->Text = L"LOL";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(784, 587);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 5;
			this->btnAgregar->Text = L"Add";
			this->btnAgregar->UseVisualStyleBackColor = true;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Location = System::Drawing::Point(12, 600);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->ReadOnly = true;
			this->txtCodigo->Size = System::Drawing::Size(121, 20);
			this->txtCodigo->TabIndex = 8;
			this->txtCodigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtMateria
			// 
			this->txtMateria->Location = System::Drawing::Point(175, 600);
			this->txtMateria->Name = L"txtMateria";
			this->txtMateria->ReadOnly = true;
			this->txtMateria->Size = System::Drawing::Size(121, 20);
			this->txtMateria->TabIndex = 9;
			this->txtMateria->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtCreditos
			// 
			this->txtCreditos->Location = System::Drawing::Point(346, 600);
			this->txtCreditos->Name = L"txtCreditos";
			this->txtCreditos->ReadOnly = true;
			this->txtCreditos->Size = System::Drawing::Size(121, 20);
			this->txtCreditos->TabIndex = 10;
			this->txtCreditos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// cmbDia
			// 
			this->cmbDia->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbDia->FormattingEnabled = true;
			this->cmbDia->Location = System::Drawing::Point(759, 482);
			this->cmbDia->Name = L"cmbDia";
			this->cmbDia->Size = System::Drawing::Size(121, 21);
			this->cmbDia->TabIndex = 11;
			// 
			// cmbHora
			// 
			this->cmbHora->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbHora->FormattingEnabled = true;
			this->cmbHora->Location = System::Drawing::Point(759, 537);
			this->cmbHora->Name = L"cmbHora";
			this->cmbHora->Size = System::Drawing::Size(121, 21);
			this->cmbHora->TabIndex = 12;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(759, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(530, 347);
			this->dataGridView1->TabIndex = 13;
			// 
			// lblLimiteCr
			// 
			this->lblLimiteCr->AutoSize = true;
			this->lblLimiteCr->Location = System::Drawing::Point(962, 525);
			this->lblLimiteCr->Name = L"lblLimiteCr";
			this->lblLimiteCr->Size = System::Drawing::Size(35, 13);
			this->lblLimiteCr->TabIndex = 14;
			this->lblLimiteCr->Text = L"label1";
			// 
			// txtCarrera
			// 
			this->txtCarrera->Location = System::Drawing::Point(523, 600);
			this->txtCarrera->Name = L"txtCarrera";
			this->txtCarrera->ReadOnly = true;
			this->txtCarrera->Size = System::Drawing::Size(121, 20);
			this->txtCarrera->TabIndex = 15;
			this->txtCarrera->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1299, 653);
			this->Controls->Add(this->txtCarrera);
			this->Controls->Add(this->lblLimiteCr);
			this->Controls->Add(this->dataGridView1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
		String^ connString = "Data Source=LAPTOP-H080TR5L;Initial Catalog=pensa;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";
		conn = gcnew SqlConnection(connString);
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

		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtCarrera->Text = dgvMaterias->SelectedRows[0]->Cells["carrera"]->Value->ToString();
		}
	}
	};
}