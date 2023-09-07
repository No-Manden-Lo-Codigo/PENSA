#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace myUserControl {

	/// <summary>
	/// Summary for MyUserControl2
	/// </summary>
	public ref class MyUserControl2 : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl2(void)
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
		~MyUserControl2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;


	private: System::Windows::Forms::Button^ btnIngresar;


	public:event EventHandler^ EsconderControl;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(147, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 38);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyUserControl2::textBox1_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->btnIngresar);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->maskedTextBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(360, 136);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 400);
			this->panel1->TabIndex = 3;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Enabled = false;
			this->btnIngresar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIngresar->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIngresar->ForeColor = System::Drawing::Color::White;
			this->btnIngresar->Location = System::Drawing::Point(3, 341);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(494, 56);
			this->btnIngresar->TabIndex = 14;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &MyUserControl2::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(27, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(447, 41);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Registro estudiantil INTEC";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->AllowPromptAsInput = false;
			this->maskedTextBox1->Enabled = false;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(147, 186);
			this->maskedTextBox1->Mask = L"0000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->RejectInputOnFirstFailure = true;
			this->maskedTextBox1->ResetOnPrompt = false;
			this->maskedTextBox1->ResetOnSpace = false;
			this->maskedTextBox1->Size = System::Drawing::Size(350, 38);
			this->maskedTextBox1->SkipLiterals = false;
			this->maskedTextBox1->TabIndex = 13;
			this->maskedTextBox1->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			this->maskedTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyUserControl2::maskedTextBox1_KeyDown);
			this->maskedTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyUserControl2::maskedTextBox1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(3, 184);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 31);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Matricula";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ingenieria de Sistemas", L"Ingenieria de Software" });
			this->comboBox1->Location = System::Drawing::Point(147, 268);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(350, 33);
			this->comboBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(3, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 31);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Carrera";
			// 
			// MyUserControl2
			// 
			this->AccessibleName = L"calendar";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->panel1);
			this->Name = L"MyUserControl2";
			this->Size = System::Drawing::Size(1264, 681);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		array<String^>^ info = gcnew array<String^>(4);

		info[0] = textBox1->Text;
		info[1] = maskedTextBox1->Text;
		info[2] = Convert::ToString(comboBox1->SelectedItem);
		info[3] = Convert::ToString(22);

		//MessageBox::Show(info[0] + "\n" + info[1] + "\n" + info[2] + "\n" + info[3]);

		Esconder();
		
	}

	void Esconder()
	{
		EsconderControl(this, EventArgs::Empty);
	}
	
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{

		if ((e->KeyCode == Keys::Enter) && (textBox1->Text->Length > 3))
		{
			maskedTextBox1->Enabled = true;
			if (maskedTextBox1->CanFocus)
			{
				maskedTextBox1->Focus();
			}
		}
		else
		{
			maskedTextBox1->Enabled = false;
			textBox1->Focus();
		}
	}
	
	private: System::Void maskedTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if (maskedTextBox1->Text->Length == 7)
		{
			if ((e->KeyCode == Keys::Enter) && (Int64::Parse(maskedTextBox1->Text) >= 1000000))
			{
				comboBox1->Enabled = true;
				btnIngresar->Enabled = true;
			}
		}
		else
		{
			comboBox1->Enabled = false;
			return;
		}
	}
	private: System::Void maskedTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		maskedTextBox1->SelectionStart = maskedTextBox1->Text->Length;
	}
};
}

