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
using namespace myUserControl;

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
	private: myUserControl::MyUserControl2^ myUserControl21;
	private: myUserControl::MyUserControl1^ myUserControl11;
	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:private: System::ComponentModel::IContainer^ components;


	protected:private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->myUserControl21 = (gcnew myUserControl::MyUserControl2());
			this->myUserControl11 = (gcnew myUserControl::MyUserControl1());
			this->SuspendLayout();
			// 
			// myUserControl21
			// 
			this->myUserControl21->AccessibleName = L"calendar";
			this->myUserControl21->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->myUserControl21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myUserControl21.BackgroundImage")));
			this->myUserControl21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->myUserControl21->Location = System::Drawing::Point(0, 0);
			this->myUserControl21->MaximumSize = System::Drawing::Size(1264, 681);
			this->myUserControl21->MinimumSize = System::Drawing::Size(1264, 681);
			this->myUserControl21->Name = L"myUserControl21";
			this->myUserControl21->Size = System::Drawing::Size(1264, 681);
			this->myUserControl21->TabIndex = 0;
			this->myUserControl21->EsconderControl += gcnew System::EventHandler(this, &PENSA::Form1::EsconderForm);
			// 
			// myUserControl11
			// 
			this->myUserControl11->Angle = 232;
			this->myUserControl11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->myUserControl11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myUserControl11.BackgroundImage")));
			this->myUserControl11->BorderRadius = 1;
			this->myUserControl11->Color0 = System::Drawing::Color::Transparent;
			this->myUserControl11->Color1 = System::Drawing::Color::Transparent;
			this->myUserControl11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->myUserControl11->ForeColor = System::Drawing::Color::White;
			this->myUserControl11->Location = System::Drawing::Point(0, 0);
			this->myUserControl11->Name = L"myUserControl11";
			this->myUserControl11->Size = System::Drawing::Size(1264, 681);
			this->myUserControl11->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->myUserControl21);
			this->Controls->Add(this->myUserControl11);
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Procesos INTEC";
			this->ResumeLayout(false);

		}
#pragma endregion




	private: System::Void myUserControl11_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void myUserControl11_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void myUserControl11_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	
	void EsconderForm(Object^ sender, EventArgs^ e)
	{
		myUserControl21->Hide();
		myUserControl21->SendToBack();
		myUserControl11->Show();
		myUserControl11->BringToFront();
	}


	private: System::Void myUserControl11_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}