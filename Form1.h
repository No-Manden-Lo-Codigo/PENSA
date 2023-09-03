#pragma once
#include <string>
#include <iostream>


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;//------------

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 294);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(530, 347);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(146, 183);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(280, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 54);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(414, 183);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 54);
			this->button4->TabIndex = 4;
			this->button4->Text = L"LOL";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 653);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

		SqlConnection^ conn;
		SqlDataAdapter^ adapter;
		SqlCommand^ cmd;
		DataTable^ dt = gcnew DataTable();

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		String^ query = "SELECT * FROM sistemas";

		conn = gcnew SqlConnection("Data Source=JAGC-PC;Initial Catalog=pensa;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");

		try
		{
			conn->Open();
			cmd = gcnew SqlCommand(query, conn);

			adapter = gcnew SqlDataAdapter(cmd);

			adapter->Fill(dt);
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		button1->Enabled = false;

	}
};
}
