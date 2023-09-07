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
		private: System::Windows::Forms::ListBox^ lstSabado;
		private: System::Windows::Forms::ListBox^ lstViernes;
		private: System::Windows::Forms::ListBox^ lstJueves;
		private: System::Windows::Forms::ListBox^ lstMiercoles;
		private: System::Windows::Forms::ListBox^ lstMartes;
		private: System::Windows::Forms::ListBox^ lstLunes;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::TextBox^ txtCarrera;
		private: System::Windows::Forms::TextBox^ txtCreditos;
		private: System::Windows::Forms::TextBox^ txtMateria;
		private: System::Windows::Forms::TextBox^ txtCodigo;
		private: System::Windows::Forms::Button^ btnEliminar;
		private: System::Windows::Forms::DataGridView^ dgvMaterias;
		private: System::Windows::Forms::Panel^ btnANDboxPANEL;
		private: System::Windows::Forms::Button^ btnAgregar;
		private: System::Windows::Forms::Panel^ dgvANDinfoPANEL;
		private: System::Windows::Forms::ComboBox^ cmbDias;
		private: System::Windows::Forms::ComboBox^ cmbHoraInicio;
		private: System::Windows::Forms::TextBox^ txtHoraFin;
		private: System::Windows::Forms::TextBox^ txtSumaCreditos;


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

				cmbDias->Items->Add("Lunes");
				cmbDias->Items->Add("Martes");
				cmbDias->Items->Add("Miercoles");
				cmbDias->Items->Add("Jueves");
				cmbDias->Items->Add("Viernes");
				cmbDias->Items->Add("Sabado");
				cmbDias->SelectedIndex = 0;

				lstLunes->Items->Add("Lunes");
				lstMartes->Items->Add("Martes");
				lstMiercoles->Items->Add("Miercoles");
				lstJueves->Items->Add("Jueves");
				lstViernes->Items->Add("Viernes");
				lstSabado->Items->Add("Sabado");

				for (int i = 7; i < 21; i++)
				{
					cmbHoraInicio->Items->Add(i);
				}

				btnAgregar->Enabled = false;
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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl1::typeid));
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->lstSabado = (gcnew System::Windows::Forms::ListBox());
				this->lstViernes = (gcnew System::Windows::Forms::ListBox());
				this->lstJueves = (gcnew System::Windows::Forms::ListBox());
				this->lstMiercoles = (gcnew System::Windows::Forms::ListBox());
				this->lstMartes = (gcnew System::Windows::Forms::ListBox());
				this->lstLunes = (gcnew System::Windows::Forms::ListBox());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->txtCarrera = (gcnew System::Windows::Forms::TextBox());
				this->txtCreditos = (gcnew System::Windows::Forms::TextBox());
				this->txtMateria = (gcnew System::Windows::Forms::TextBox());
				this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
				this->btnEliminar = (gcnew System::Windows::Forms::Button());
				this->dgvMaterias = (gcnew System::Windows::Forms::DataGridView());
				this->btnANDboxPANEL = (gcnew System::Windows::Forms::Panel());
				this->txtSumaCreditos = (gcnew System::Windows::Forms::TextBox());
				this->btnAgregar = (gcnew System::Windows::Forms::Button());
				this->dgvANDinfoPANEL = (gcnew System::Windows::Forms::Panel());
				this->cmbDias = (gcnew System::Windows::Forms::ComboBox());
				this->cmbHoraInicio = (gcnew System::Windows::Forms::ComboBox());
				this->txtHoraFin = (gcnew System::Windows::Forms::TextBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->BeginInit();
				this->btnANDboxPANEL->SuspendLayout();
				this->dgvANDinfoPANEL->SuspendLayout();
				this->SuspendLayout();
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::Transparent;
				this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->ForeColor = System::Drawing::Color::White;
				this->label1->Location = System::Drawing::Point(3, 10);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(68, 25);
				this->label1->TabIndex = 30;
				this->label1->Text = L"Buscar";
				// 
				// lstSabado
				// 
				this->lstSabado->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->lstSabado->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lstSabado->ForeColor = System::Drawing::Color::Black;
				this->lstSabado->FormattingEnabled = true;
				this->lstSabado->ItemHeight = 21;
				this->lstSabado->Location = System::Drawing::Point(0, 407);
				this->lstSabado->Name = L"lstSabado";
				this->lstSabado->Size = System::Drawing::Size(499, 67);
				this->lstSabado->TabIndex = 5;
				this->lstSabado->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::lstSabado_SelectedIndexChanged);
				// 
				// lstViernes
				// 
				this->lstViernes->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->lstViernes->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lstViernes->ForeColor = System::Drawing::Color::Black;
				this->lstViernes->FormattingEnabled = true;
				this->lstViernes->ItemHeight = 21;
				this->lstViernes->Location = System::Drawing::Point(0, 340);
				this->lstViernes->Name = L"lstViernes";
				this->lstViernes->Size = System::Drawing::Size(499, 67);
				this->lstViernes->TabIndex = 4;
				this->lstViernes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::lstViernes_SelectedIndexChanged);
				// 
				// lstJueves
				// 
				this->lstJueves->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->lstJueves->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lstJueves->ForeColor = System::Drawing::Color::Black;
				this->lstJueves->FormattingEnabled = true;
				this->lstJueves->ItemHeight = 21;
				this->lstJueves->Location = System::Drawing::Point(0, 273);
				this->lstJueves->Name = L"lstJueves";
				this->lstJueves->Size = System::Drawing::Size(499, 67);
				this->lstJueves->TabIndex = 3;
				this->lstJueves->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::lstJueves_SelectedIndexChanged);
				// 
				// lstMiercoles
				// 
				this->lstMiercoles->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->lstMiercoles->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lstMiercoles->ForeColor = System::Drawing::Color::Black;
				this->lstMiercoles->FormattingEnabled = true;
				this->lstMiercoles->ItemHeight = 21;
				this->lstMiercoles->Location = System::Drawing::Point(0, 206);
				this->lstMiercoles->Name = L"lstMiercoles";
				this->lstMiercoles->Size = System::Drawing::Size(499, 67);
				this->lstMiercoles->TabIndex = 2;
				this->lstMiercoles->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::lstMiercoles_SelectedIndexChanged);
				// 
				// lstMartes
				// 
				this->lstMartes->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->lstMartes->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lstMartes->ForeColor = System::Drawing::Color::Black;
				this->lstMartes->FormattingEnabled = true;
				this->lstMartes->ItemHeight = 21;
				this->lstMartes->Location = System::Drawing::Point(0, 139);
				this->lstMartes->Name = L"lstMartes";
				this->lstMartes->Size = System::Drawing::Size(499, 67);
				this->lstMartes->TabIndex = 1;
				this->lstMartes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::lstMartes_SelectedIndexChanged);
				// 
				// lstLunes
				// 
				this->lstLunes->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->lstLunes->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lstLunes->ForeColor = System::Drawing::Color::Black;
				this->lstLunes->FormattingEnabled = true;
				this->lstLunes->ItemHeight = 21;
				this->lstLunes->Location = System::Drawing::Point(0, 72);
				this->lstLunes->Name = L"lstLunes";
				this->lstLunes->Size = System::Drawing::Size(499, 67);
				this->lstLunes->TabIndex = 0;
				this->lstLunes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::lstLunes_SelectedIndexChanged);
				// 
				// textBox1
				// 
				this->textBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox1->ForeColor = System::Drawing::Color::Black;
				this->textBox1->Location = System::Drawing::Point(77, 7);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(572, 38);
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
				this->txtCodigo->Location = System::Drawing::Point(0, 527);
				this->txtCodigo->Name = L"txtCodigo";
				this->txtCodigo->ReadOnly = true;
				this->txtCodigo->Size = System::Drawing::Size(128, 38);
				this->txtCodigo->TabIndex = 24;
				this->txtCodigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				this->txtCodigo->TextChanged += gcnew System::EventHandler(this, &MyUserControl1::txtCodigo_TextChanged);
				// 
				// btnEliminar
				// 
				this->btnEliminar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->btnEliminar->BackColor = System::Drawing::Color::Transparent;
				this->btnEliminar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
				this->btnEliminar->FlatAppearance->BorderSize = 5;
				this->btnEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnEliminar->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnEliminar->ForeColor = System::Drawing::Color::White;
				this->btnEliminar->Location = System::Drawing::Point(368, 0);
				this->btnEliminar->Name = L"btnEliminar";
				this->btnEliminar->Size = System::Drawing::Size(128, 54);
				this->btnEliminar->TabIndex = 22;
				this->btnEliminar->Text = L"Eliminar";
				this->btnEliminar->UseVisualStyleBackColor = false;
				this->btnEliminar->Click += gcnew System::EventHandler(this, &MyUserControl1::btnEliminar_Click);
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
				this->dgvMaterias->Location = System::Drawing::Point(0, 51);
				this->dgvMaterias->MultiSelect = false;
				this->dgvMaterias->Name = L"dgvMaterias";
				this->dgvMaterias->ReadOnly = true;
				this->dgvMaterias->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
				this->dgvMaterias->Size = System::Drawing::Size(651, 470);
				this->dgvMaterias->TabIndex = 21;
				this->dgvMaterias->TabStop = false;
				this->dgvMaterias->SelectionChanged += gcnew System::EventHandler(this, &MyUserControl1::dgvMaterias_SelectionChanged);
				// 
				// btnANDboxPANEL
				// 
				this->btnANDboxPANEL->BackColor = System::Drawing::Color::Transparent;
				this->btnANDboxPANEL->Controls->Add(this->txtSumaCreditos);
				this->btnANDboxPANEL->Controls->Add(this->btnAgregar);
				this->btnANDboxPANEL->Controls->Add(this->btnEliminar);
				this->btnANDboxPANEL->Controls->Add(this->lstLunes);
				this->btnANDboxPANEL->Controls->Add(this->lstMartes);
				this->btnANDboxPANEL->Controls->Add(this->lstMiercoles);
				this->btnANDboxPANEL->Controls->Add(this->lstJueves);
				this->btnANDboxPANEL->Controls->Add(this->lstViernes);
				this->btnANDboxPANEL->Controls->Add(this->lstSabado);
				this->btnANDboxPANEL->ForeColor = System::Drawing::Color::Black;
				this->btnANDboxPANEL->Location = System::Drawing::Point(712, 113);
				this->btnANDboxPANEL->Name = L"btnANDboxPANEL";
				this->btnANDboxPANEL->Size = System::Drawing::Size(499, 474);
				this->btnANDboxPANEL->TabIndex = 31;
				// 
				// txtSumaCreditos
				// 
				this->txtSumaCreditos->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->txtSumaCreditos->Location = System::Drawing::Point(193, 14);
				this->txtSumaCreditos->Name = L"txtSumaCreditos";
				this->txtSumaCreditos->ReadOnly = true;
				this->txtSumaCreditos->Size = System::Drawing::Size(100, 38);
				this->txtSumaCreditos->TabIndex = 36;
				// 
				// btnAgregar
				// 
				this->btnAgregar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->btnAgregar->BackColor = System::Drawing::Color::Transparent;
				this->btnAgregar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
				this->btnAgregar->FlatAppearance->BorderSize = 5;
				this->btnAgregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnAgregar->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnAgregar->ForeColor = System::Drawing::Color::White;
				this->btnAgregar->Location = System::Drawing::Point(3, 0);
				this->btnAgregar->Name = L"btnAgregar";
				this->btnAgregar->Size = System::Drawing::Size(128, 54);
				this->btnAgregar->TabIndex = 24;
				this->btnAgregar->Text = L"Agregar";
				this->btnAgregar->UseVisualStyleBackColor = false;
				this->btnAgregar->Click += gcnew System::EventHandler(this, &MyUserControl1::btnAgregar_Click_1);
				// 
				// dgvANDinfoPANEL
				// 
				this->dgvANDinfoPANEL->BackColor = System::Drawing::Color::Transparent;
				this->dgvANDinfoPANEL->Controls->Add(this->txtCodigo);
				this->dgvANDinfoPANEL->Controls->Add(this->dgvMaterias);
				this->dgvANDinfoPANEL->Controls->Add(this->txtCarrera);
				this->dgvANDinfoPANEL->Controls->Add(this->txtMateria);
				this->dgvANDinfoPANEL->Controls->Add(this->txtCreditos);
				this->dgvANDinfoPANEL->Controls->Add(this->label1);
				this->dgvANDinfoPANEL->Controls->Add(this->textBox1);
				this->dgvANDinfoPANEL->ForeColor = System::Drawing::Color::Black;
				this->dgvANDinfoPANEL->Location = System::Drawing::Point(30, 66);
				this->dgvANDinfoPANEL->MaximumSize = System::Drawing::Size(652, 568);
				this->dgvANDinfoPANEL->MinimumSize = System::Drawing::Size(652, 568);
				this->dgvANDinfoPANEL->Name = L"dgvANDinfoPANEL";
				this->dgvANDinfoPANEL->Size = System::Drawing::Size(652, 568);
				this->dgvANDinfoPANEL->TabIndex = 32;
				// 
				// cmbDias
				// 
				this->cmbDias->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				this->cmbDias->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->cmbDias->FormattingEnabled = true;
				this->cmbDias->Location = System::Drawing::Point(712, 595);
				this->cmbDias->Name = L"cmbDias";
				this->cmbDias->Size = System::Drawing::Size(121, 33);
				this->cmbDias->TabIndex = 33;
				// 
				// cmbHoraInicio
				// 
				this->cmbHoraInicio->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				this->cmbHoraInicio->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->cmbHoraInicio->FormattingEnabled = true;
				this->cmbHoraInicio->Location = System::Drawing::Point(960, 593);
				this->cmbHoraInicio->Name = L"cmbHoraInicio";
				this->cmbHoraInicio->Size = System::Drawing::Size(121, 33);
				this->cmbHoraInicio->TabIndex = 34;
				this->cmbHoraInicio->SelectedIndexChanged += gcnew System::EventHandler(this, &MyUserControl1::cmbHoraInicio_SelectedIndexChanged);
				// 
				// txtHoraFin
				// 
				this->txtHoraFin->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->txtHoraFin->Location = System::Drawing::Point(1108, 593);
				this->txtHoraFin->Name = L"txtHoraFin";
				this->txtHoraFin->ReadOnly = true;
				this->txtHoraFin->Size = System::Drawing::Size(100, 33);
				this->txtHoraFin->TabIndex = 35;
				// 
				// MyUserControl1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::WhiteSmoke;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->Controls->Add(this->txtHoraFin);
				this->Controls->Add(this->cmbHoraInicio);
				this->Controls->Add(this->cmbDias);
				this->Controls->Add(this->dgvANDinfoPANEL);
				this->Controls->Add(this->btnANDboxPANEL);
				this->Name = L"MyUserControl1";
				this->Size = System::Drawing::Size(1264, 681);
				this->Load += gcnew System::EventHandler(this, &MyUserControl1::MyUserControl1_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterias))->EndInit();
				this->btnANDboxPANEL->ResumeLayout(false);
				this->btnANDboxPANEL->PerformLayout();
				this->dgvANDinfoPANEL->ResumeLayout(false);
				this->dgvANDinfoPANEL->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion

		SqlConnection^ conn;
		SqlDataAdapter^ adapter;
		SqlCommand^ cmd;
		DataTable^ dt = gcnew DataTable();

		int suma = 0;
		int controlCreditos = 0;
		int controlHoras = 0;

		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
		{

			DataView^ dv = gcnew DataView(dt);
			dv->RowFilter = "nombre_materia LIKE '%" + textBox1->Text + "%' OR codigo_materia LIKE '%" + textBox1->Text + "%'";
			dgvMaterias->DataSource = dv;

		}
		private: System::Void lstLunes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void lstMartes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void lstMiercoles_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void lstJueves_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void lstViernes_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void lstSabado_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void txtCarrera_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void txtCreditos_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void txtMateria_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void txtCodigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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

			int creditos = Int32::Parse(txtCreditos->Text);
			switch (creditos)
			{
			case 3:
				suma = 3;
				cmbHoraInicio->Items->Clear();
				for (int i = 7; i < 20; i++)
				{
					cmbHoraInicio->Items->Add(i);
				}
				break;
			default:
				suma = 2;
				cmbHoraInicio->Items->Clear();
				for (int i = 7; i < 21; i++)
				{
					cmbHoraInicio->Items->Add(i);
				}
				break;
			}

			btnAgregar->Enabled = false;
			txtHoraFin->Text = "";
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

		private: System::Void cmbHoraInicio_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			btnAgregar->Enabled = true;

			int horaFin = Int32::Parse(cmbHoraInicio->Text) + suma;
			txtHoraFin->Text = Convert::ToString(horaFin);
		}
		private: System::Void btnAgregar_Click_1(System::Object^ sender, System::EventArgs^ e)
{
		if (controlCreditos + Convert::ToInt32(txtCreditos->Text) > 23)
		{
			btnAgregar->Enabled = false;
			return;
		}

		int horaInicio = Convert::ToInt32(cmbHoraInicio->Text), horaFin = Convert::ToInt32(txtHoraFin->Text);

		if (cmbDias->Text == "Lunes")
		{
			for (int i = 0; i < lstLunes->Items->Count; i++)
			{
				if (lstLunes->Items[i]->ToString()->Contains(Convert::ToString(horaInicio)) && lstLunes->Items[i]->ToString()->Contains(Convert::ToString(horaFin)))
				{
					MessageBox::Show("Choque en el horario");
					return;
				}
			}
		}

		if (cmbDias->Text == "Martes")
		{
			for (int i = 0; i < lstMartes->Items->Count; i++)
			{
				if (lstMartes->Items[i]->ToString()->Contains(Convert::ToString(horaInicio)) && lstMartes->Items[i]->ToString()->Contains(Convert::ToString(horaFin)))
				{
					MessageBox::Show("Choque en el horario");
					return;
				}
			}
		}

		if (cmbDias->Text == "Miercoles")
		{
			for (int i = 0; i < lstMiercoles->Items->Count; i++)
			{
				if (lstMiercoles->Items[i]->ToString()->Contains(Convert::ToString(horaInicio)) && lstMiercoles->Items[i]->ToString()->Contains(Convert::ToString(horaFin)))
				{
					MessageBox::Show("Choque en el horario");
					return;
				}
			}
		}

		if (cmbDias->Text == "Jueves")
		{
			for (int i = 0; i < lstJueves->Items->Count; i++)
			{
				if (lstJueves->Items[i]->ToString()->Contains(Convert::ToString(horaInicio)) && lstJueves->Items[i]->ToString()->Contains(Convert::ToString(horaFin)))
				{
					MessageBox::Show("Choque en el horario");
					return;
				}
			}
		}

		if (cmbDias->Text == "Viernes")
		{
			for (int i = 0; i < lstViernes->Items->Count; i++)
			{
				if (lstViernes->Items[i]->ToString()->Contains(Convert::ToString(horaInicio)) && lstViernes->Items[i]->ToString()->Contains(Convert::ToString(horaFin)))
				{
					MessageBox::Show("Choque en el horario");
					return;
				}
			}
		}

		if (cmbDias->Text == "Sabado")
		{
			for (int i = 0; i < lstSabado->Items->Count; i++)
			{
				if (lstSabado->Items[i]->ToString()->Contains(Convert::ToString(horaInicio)) && lstSabado->Items[i]->ToString()->Contains(Convert::ToString(horaFin)))
				{
					MessageBox::Show("Choque en el horario");
					return;
				}
			}
		}

		int control[] = { 1 , 2 , 3 , 4 , 5 };
		for (int x : control)
		{
			if (controlCreditos + x < 23)
			{
				(Convert::ToInt32(txtCreditos->Text) == x) ? controlCreditos += x : controlCreditos = controlCreditos;
			}
		}
		txtSumaCreditos->Text = Convert::ToString(controlCreditos);

		String^ horario = txtCodigo->Text + " - " + txtMateria->Text + " : " + cmbHoraInicio->Text + "/" + txtHoraFin->Text;
		if (txtCreditos->Text == "5")
		{
			if (cmbDias->Text == "Lunes" || cmbDias->Text == "Miercoles" || cmbDias->Text == "Viernes")
			{
				lstLunes->Items->Add(horario);
				lstMiercoles->Items->Add(horario);
				lstViernes->Items->Add(txtCodigo->Text + " - " + txtMateria->Text + " : " + cmbHoraInicio->Text + "/" + Convert::ToString(Int32::Parse(cmbHoraInicio->Text) + 1));
			}
			if (cmbDias->Text == "Martes" || cmbDias->Text == "Jueves" || cmbDias->Text == "Sabado")
			{
				lstMartes->Items->Add(horario);
				lstJueves->Items->Add(horario);
				lstSabado->Items->Add(txtCodigo->Text + " - " + txtMateria->Text + " : " + cmbHoraInicio->Text + "/" + Convert::ToString(Int32::Parse(cmbHoraInicio->Text) + 1));
			}
		}
		else if (txtCreditos->Text == "4")
		{
			if (cmbDias->Text == "Lunes" || cmbDias->Text == "Miercoles")
			{
				lstLunes->Items->Add(horario);
				lstMiercoles->Items->Add(horario);
			}
			if (cmbDias->Text == "Martes" || cmbDias->Text == "Jueves")
			{
				lstMartes->Items->Add(horario);
				lstJueves->Items->Add(horario);
			}
			if (cmbDias->Text == "Viernes" || cmbDias->Text == "Sabado")
			{
				lstViernes->Items->Add(horario);
				lstSabado->Items->Add(horario);
			}
		}
		else if (txtCreditos->Text == "3")
		{
			if (cmbDias->Text == "Lunes")
			{
				lstLunes->Items->Add(horario);
			}
			if (cmbDias->Text == "Martes")
			{
				lstMartes->Items->Add(horario);
			}
			if (cmbDias->Text == "Miercoles")
			{
				lstMiercoles->Items->Add(horario);
			}
			if (cmbDias->Text == "Jueves")
			{
				lstJueves->Items->Add(horario);
			}
			if (cmbDias->Text == "Viernes")
			{
				lstViernes->Items->Add(horario);
			}
			if (cmbDias->Text == "Sabado")
			{
				lstSabado->Items->Add(horario);
			}
		}
		else
		{
			if (cmbDias->Text == "Lunes")
			{
				lstLunes->Items->Add(horario);
			}
			if (cmbDias->Text == "Martes")
			{
				lstMartes->Items->Add(horario);
			}
			if (cmbDias->Text == "Miercoles")
			{
				lstMiercoles->Items->Add(horario);
			}
			if (cmbDias->Text == "Jueves")
			{
				lstJueves->Items->Add(horario);
			}
			if (cmbDias->Text == "Viernes")
			{
				lstViernes->Items->Add(horario);
			}
			if (cmbDias->Text == "Sabado")
			{
				lstSabado->Items->Add(horario);
			}
		}
}
		
		private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}

	   


	};
}
