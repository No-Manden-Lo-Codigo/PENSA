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
using namespace System::Drawing::Drawing2D;
using namespace System::Data::SqlClient;
using namespace std;


namespace myUserControl {

	/// <summary>
	/// Summary for MyUserControl1
	/// </summary>
	public ref class MyUserControl1 : public System::Windows::Forms::UserControl
	{
		int wh = 1;
		float ang = 45;
		Color cl0 = Color::White;
		Color cl1 = Color::White;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ txtCarrera;
	private: System::Windows::Forms::TextBox^ txtCreditos;
	private: System::Windows::Forms::TextBox^ txtMateria;
	private: System::Windows::Forms::TextBox^ txtCodigo;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dgvMaterias;

	private: System::Windows::Forms::Panel^ btnANDboxPANEL;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ dgvANDinfoPANEL;


		   Timer^ t = gcnew Timer();

		public:
			MyUserControl1(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
				DoubleBuffered = true;
				t->Interval = 30;
				t->Start();
				t->Tick += gcnew EventHandler(this, &MyUserControl1::Timer_Tick);
				ForeColor = Color::White;
			}
	
		property float Angle
		{
			float get() { return ang; }
			void set(float value) { ang = value; Invalidate(); }
		}

		property int BorderRadius
		{
			int get() { return wh; }
			void set(int value) { wh = value; Invalidate(); }
		}

		property Color Color0
		{
			Color get() { return cl0; }
			void set(Color value) { cl0 = value; Invalidate(); }
		}

		property Color Color1
		{
			Color get() { return cl1; }
			void set(Color value) { cl1 = value; Invalidate(); }
		}

		//property String^ Texto
		//{
		//	String^ get() { return txt; }
		//	void set(String^ value) { txt = value; Invalidate(); }
		//}

		protected:
			virtual void OnPaint(PaintEventArgs^ e) override
			{
				e->Graphics->SmoothingMode = SmoothingMode::HighQuality;
				GraphicsPath^ bca = gcnew GraphicsPath();
				bca->AddArc(Rectangle(0, 0, wh, wh), 180, 90);
				bca->AddArc(Rectangle(Width - wh, 0, wh, wh), -90, 90);
				bca->AddArc(Rectangle(Width - wh, Height - wh, wh, wh), 0, 90);
				bca->AddArc(Rectangle(0, Height - wh, wh, wh), 90, 90);
				e->Graphics->FillPath(gcnew LinearGradientBrush(ClientRectangle, cl0, cl1, ang), bca);
				//e->Graphics->DrawString(txt, Font, gcnew SolidBrush(ForeColor), ClientRectangle, gcnew StringFormat() { LineAlignment = StringAlignment::Center, Alignment = StringAlignment::Center });
				__super::OnPaint(e);
			}

		private:
			void Timer_Tick(Object^ sender, EventArgs^ e)
			{
				Angle = fmodf(Angle + 1, 360);
			}


		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~MyUserControl1()
			{
				if (components)
				{
					delete components;
				}
			}

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->txtCarrera = (gcnew System::Windows::Forms::TextBox());
			this->txtCreditos = (gcnew System::Windows::Forms::TextBox());
			this->txtMateria = (gcnew System::Windows::Forms::TextBox());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgvMaterias = (gcnew System::Windows::Forms::DataGridView());
			this->btnANDboxPANEL = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgvANDinfoPANEL = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->BeginInit();
			this->btnANDboxPANEL->SuspendLayout();
			this->dgvANDinfoPANEL->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(3, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 21);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Buscar";
			// 
			// listBox6
			// 
			this->listBox6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox6->ForeColor = System::Drawing::Color::Black;
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(0, 405);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(402, 69);
			this->listBox6->TabIndex = 5;
			this->listBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::listBox6_SelectedIndexChanged);
			// 
			// listBox5
			// 
			this->listBox5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox5->ForeColor = System::Drawing::Color::Black;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(0, 336);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(402, 69);
			this->listBox5->TabIndex = 4;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::listBox5_SelectedIndexChanged);
			// 
			// listBox4
			// 
			this->listBox4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox4->ForeColor = System::Drawing::Color::Black;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(0, 267);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(402, 69);
			this->listBox4->TabIndex = 3;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::listBox4_SelectedIndexChanged);
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox3->ForeColor = System::Drawing::Color::Black;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(0, 198);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(402, 69);
			this->listBox3->TabIndex = 2;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::listBox3_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox2->ForeColor = System::Drawing::Color::Black;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(0, 129);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(402, 69);
			this->listBox2->TabIndex = 1;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::listBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox1->ForeColor = System::Drawing::Color::Black;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 60);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(402, 69);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::listBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(65, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(586, 28);
			this->textBox1->TabIndex = 28;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyUserControl1::textBox1_TextChanged);
			// 
			// txtCarrera
			// 
			this->txtCarrera->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCarrera->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCarrera->ForeColor = System::Drawing::Color::Black;
			this->txtCarrera->Location = System::Drawing::Point(570, 527);
			this->txtCarrera->Name = L"txtCarrera";
			this->txtCarrera->ReadOnly = true;
			this->txtCarrera->Size = System::Drawing::Size(81, 38);
			this->txtCarrera->TabIndex = 27;
			this->txtCarrera->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCarrera->TextChanged += gcnew System::EventHandler(this, &MyUserControl1::txtCarrera_TextChanged);
			// 
			// txtCreditos
			// 
			this->txtCreditos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCreditos->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCreditos->ForeColor = System::Drawing::Color::Black;
			this->txtCreditos->Location = System::Drawing::Point(515, 527);
			this->txtCreditos->Name = L"txtCreditos";
			this->txtCreditos->ReadOnly = true;
			this->txtCreditos->Size = System::Drawing::Size(49, 38);
			this->txtCreditos->TabIndex = 26;
			this->txtCreditos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCreditos->TextChanged += gcnew System::EventHandler(this, &MyUserControl1::txtCreditos_TextChanged);
			// 
			// txtMateria
			// 
			this->txtMateria->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtMateria->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMateria->ForeColor = System::Drawing::Color::Black;
			this->txtMateria->Location = System::Drawing::Point(134, 527);
			this->txtMateria->Name = L"txtMateria";
			this->txtMateria->ReadOnly = true;
			this->txtMateria->Size = System::Drawing::Size(375, 38);
			this->txtMateria->TabIndex = 25;
			this->txtMateria->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtMateria->TextChanged += gcnew System::EventHandler(this, &MyUserControl1::txtMateria_TextChanged);
			// 
			// txtCodigo
			// 
			this->txtCodigo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtCodigo->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCodigo->ForeColor = System::Drawing::Color::Black;
			this->txtCodigo->Location = System::Drawing::Point(7, 527);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->ReadOnly = true;
			this->txtCodigo->Size = System::Drawing::Size(121, 38);
			this->txtCodigo->TabIndex = 24;
			this->txtCodigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtCodigo->TextChanged += gcnew System::EventHandler(this, &MyUserControl1::txtCodigo_TextChanged);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 5;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(271, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 54);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Actualizar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyUserControl1::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 5;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(137, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 54);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyUserControl1::button2_Click);
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
			this->dgvMaterias->Location = System::Drawing::Point(0, 41);
			this->dgvMaterias->MultiSelect = false;
			this->dgvMaterias->Name = L"dgvMaterias";
			this->dgvMaterias->ReadOnly = true;
			this->dgvMaterias->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvMaterias->Size = System::Drawing::Size(651, 480);
			this->dgvMaterias->TabIndex = 21;
			this->dgvMaterias->TabStop = false;
			this->dgvMaterias->SelectionChanged += gcnew System::EventHandler(this, &MyUserControl1::dgvMaterias_SelectionChanged);
			// 
			// btnANDboxPANEL
			// 
			this->btnANDboxPANEL->BackColor = System::Drawing::Color::Transparent;
			this->btnANDboxPANEL->Controls->Add(this->button1);
			this->btnANDboxPANEL->Controls->Add(this->button2);
			this->btnANDboxPANEL->Controls->Add(this->button3);
			this->btnANDboxPANEL->Controls->Add(this->listBox1);
			this->btnANDboxPANEL->Controls->Add(this->listBox2);
			this->btnANDboxPANEL->Controls->Add(this->listBox3);
			this->btnANDboxPANEL->Controls->Add(this->listBox4);
			this->btnANDboxPANEL->Controls->Add(this->listBox5);
			this->btnANDboxPANEL->Controls->Add(this->listBox6);
			this->btnANDboxPANEL->ForeColor = System::Drawing::Color::Black;
			this->btnANDboxPANEL->Location = System::Drawing::Point(724, 63);
			this->btnANDboxPANEL->Name = L"btnANDboxPANEL";
			this->btnANDboxPANEL->Size = System::Drawing::Size(402, 474);
			this->btnANDboxPANEL->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 5;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 54);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyUserControl1::button1_Click_1);
			// 
			// dgvANDinfoPANEL
			// 
			this->dgvANDinfoPANEL->BackColor = System::Drawing::Color::WhiteSmoke;
			this->dgvANDinfoPANEL->Controls->Add(this->txtCodigo);
			this->dgvANDinfoPANEL->Controls->Add(this->dgvMaterias);
			this->dgvANDinfoPANEL->Controls->Add(this->txtCarrera);
			this->dgvANDinfoPANEL->Controls->Add(this->txtMateria);
			this->dgvANDinfoPANEL->Controls->Add(this->txtCreditos);
			this->dgvANDinfoPANEL->Controls->Add(this->label1);
			this->dgvANDinfoPANEL->Controls->Add(this->textBox1);
			this->dgvANDinfoPANEL->ForeColor = System::Drawing::Color::Black;
			this->dgvANDinfoPANEL->Location = System::Drawing::Point(17, 15);
			this->dgvANDinfoPANEL->MaximumSize = System::Drawing::Size(652, 568);
			this->dgvANDinfoPANEL->MinimumSize = System::Drawing::Size(652, 568);
			this->dgvANDinfoPANEL->Name = L"dgvANDinfoPANEL";
			this->dgvANDinfoPANEL->Size = System::Drawing::Size(652, 568);
			this->dgvANDinfoPANEL->TabIndex = 32;
			// 
			// MyUserControl1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Controls->Add(this->dgvANDinfoPANEL);
			this->Controls->Add(this->btnANDboxPANEL);
			this->Name = L"MyUserControl1";
			this->Size = System::Drawing::Size(1200, 600);
			this->Load += gcnew System::EventHandler(this, &MyUserControl1::MyUserControl1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->EndInit();
			this->btnANDboxPANEL->ResumeLayout(false);
			this->dgvANDinfoPANEL->ResumeLayout(false);
			this->dgvANDinfoPANEL->PerformLayout();
			this->ResumeLayout(false);

		}
		#pragma endregion

		SqlConnection^ conn;
		SqlDataAdapter^ adapter;
		SqlCommand^ cmd;
		DataTable^ dt = gcnew DataTable();

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			MessageBox::Show("It's alive!!!");
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		{

			DataView^ dv = gcnew DataView(dt);
			dv->RowFilter = "nombre_materia LIKE '%" + textBox1->Text + "%' OR codigo_materia LIKE '%" + textBox1->Text + "%'";
			dgvMaterias->DataSource = dv;

		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void listBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void txtCarrera_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void txtCreditos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void txtMateria_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void txtCodigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			}
		private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
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

		private: System::Void MyUserControl1_Load(System::Object^ sender, System::EventArgs^ e) 
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
		}
};
}
