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
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1264, 681);
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



	private: System::Void myUserControl11_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}