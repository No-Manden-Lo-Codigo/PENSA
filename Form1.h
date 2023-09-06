#pragma once

#include <string>
#include <iostream>
#include <fstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace std;

namespace PENSA {

	


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






	private: System::Windows::Forms::TextBox^ txtCodigo;
	private: System::Windows::Forms::TextBox^ txtMateria;
	private: System::Windows::Forms::TextBox^ txtCreditos;




	private: System::Windows::Forms::TextBox^ txtCarrera;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: myUserControl::MyUserControl1^ myUserControl11;












	private: System::ComponentModel::IContainer^ components;





	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->dgvMaterias = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->txtMateria = (gcnew System::Windows::Forms::TextBox());
			this->txtCreditos = (gcnew System::Windows::Forms::TextBox());
			this->txtCarrera = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->myUserControl11 = (gcnew myUserControl::MyUserControl1());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnInsertar
			// 
			this->btnInsertar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnInsertar->Location = System::Drawing::Point(697, 54);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(128, 54);
			this->btnInsertar->TabIndex = 0;
			this->btnInsertar->Text = L"Agregar";
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
			this->dgvMaterias->Size = System::Drawing::Size(658, 554);
			this->dgvMaterias->TabIndex = 1;
			this->dgvMaterias->TabStop = false;
			this->dgvMaterias->SelectionChanged += gcnew System::EventHandler(this, &Form1::dgvMaterias_SelectionChanged);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(895, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(1099, 54);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 54);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCodigo->Location = System::Drawing::Point(12, 628);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->ReadOnly = true;
			this->txtCodigo->Size = System::Drawing::Size(121, 20);
			this->txtCodigo->TabIndex = 8;
			this->txtCodigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtMateria
			// 
			this->txtMateria->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtMateria->Location = System::Drawing::Point(183, 628);
			this->txtMateria->Name = L"txtMateria";
			this->txtMateria->ReadOnly = true;
			this->txtMateria->Size = System::Drawing::Size(121, 20);
			this->txtMateria->TabIndex = 9;
			this->txtMateria->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtCreditos
			// 
			this->txtCreditos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCreditos->Location = System::Drawing::Point(367, 628);
			this->txtCreditos->Name = L"txtCreditos";
			this->txtCreditos->ReadOnly = true;
			this->txtCreditos->Size = System::Drawing::Size(121, 20);
			this->txtCreditos->TabIndex = 10;
			this->txtCreditos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtCarrera
			// 
			this->txtCarrera->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCarrera->Location = System::Drawing::Point(549, 628);
			this->txtCarrera->Name = L"txtCarrera";
			this->txtCarrera->ReadOnly = true;
			this->txtCarrera->Size = System::Drawing::Size(121, 20);
			this->txtCarrera->TabIndex = 15;
			this->txtCarrera->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->panel1->Location = System::Drawing::Point(697, 128);
			this->panel1->MaximumSize = System::Drawing::Size(530, 415);
			this->panel1->MinimumSize = System::Drawing::Size(530, 415);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(530, 415);
			this->panel1->TabIndex = 18;
			// 
			// listBox6
			// 
			this->listBox6->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(0, 345);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(530, 69);
			this->listBox6->TabIndex = 5;
			// 
			// listBox5
			// 
			this->listBox5->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(0, 276);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(530, 69);
			this->listBox5->TabIndex = 4;
			// 
			// listBox4
			// 
			this->listBox4->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(0, 207);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(530, 69);
			this->listBox4->TabIndex = 3;
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(0, 138);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(530, 69);
			this->listBox3->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(0, 69);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(530, 69);
			this->listBox2->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(530, 69);
			this->listBox1->TabIndex = 0;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(74, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(596, 28);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 21);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Buscar";
			// 
			// myUserControl11
			// 
			this->myUserControl11->Angle = 35;
			this->myUserControl11->BorderRadius = 1;
			this->myUserControl11->Color0 = System::Drawing::Color::Gray;
			this->myUserControl11->Color1 = System::Drawing::Color::DarkRed;
			this->myUserControl11->ForeColor = System::Drawing::Color::White;
			this->myUserControl11->Location = System::Drawing::Point(0, 0);
			this->myUserControl11->Name = L"myUserControl11";
			this->myUserControl11->Size = System::Drawing::Size(1264, 682);
			this->myUserControl11->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtCarrera);
			this->Controls->Add(this->txtCreditos);
			this->Controls->Add(this->txtMateria);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dgvMaterias);
			this->Controls->Add(this->btnInsertar);
			this->Controls->Add(this->myUserControl11);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Procesos INTEC";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
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

		
	}

	private: System::Void dgvMaterias_SelectionChanged(System::Object^ sender, System::EventArgs^ e)
	{		
		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtCodigo->Text = dgvMaterias->SelectedRows[0]->Cells["codigo_materia"]->Value->ToString();
		}

		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtCreditos->Text = dgvMaterias->SelectedRows[0]->Cells["creditos_materia"]->Value->ToString();
		}

		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtMateria->Text = dgvMaterias->SelectedRows[0]->Cells["nombre_materia"]->Value->ToString();
		}
		
		if (dgvMaterias->SelectedRows->Count > 0)
		{
			txtCarrera->Text = dgvMaterias->SelectedRows[0]->Cells["carrera_materia"]->Value->ToString();
		}
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
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
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		btnInsertar->Enabled = false;

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

		DataView^ dv = gcnew DataView(dt);
		dv->RowFilter = "nombre_materia LIKE '%" + textBox1->Text + "%' OR codigo_materia LIKE '%" + textBox1->Text + "%'";
		dgvMaterias->DataSource = dv;

	}





private: System::Void myUserControl11_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void myUserControl11_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void myUserControl11_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}

};
}