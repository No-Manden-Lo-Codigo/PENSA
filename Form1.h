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
	private: myUserControl::MyUserControl1^ myUserControl11;
	protected:

	protected:




















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
			this->myUserControl11 = (gcnew myUserControl::MyUserControl1());
			this->SuspendLayout();
			// 
			// myUserControl11
			// 
			this->myUserControl11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->myUserControl11->Angle = 345;
			this->myUserControl11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->myUserControl11->BorderRadius = 1;
			this->myUserControl11->Color0 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->myUserControl11->Color1 = System::Drawing::Color::Silver;
			this->myUserControl11->ForeColor = System::Drawing::Color::White;
			this->myUserControl11->Location = System::Drawing::Point(0, 0);
			this->myUserControl11->Name = L"myUserControl11";
			this->myUserControl11->Size = System::Drawing::Size(1200, 600);
			this->myUserControl11->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 591);
			this->Controls->Add(this->myUserControl11);
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


	};
}