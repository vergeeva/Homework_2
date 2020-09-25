#pragma once
#include "Header.h"

namespace ��������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			A = gcnew My_Set();
			A->write_from_file("�����.txt");
			B = gcnew My_Set();
			C = gcnew My_Set();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		My_Set ^A; //����������� ���������
		My_Set ^B; //��������� ������� �����
		My_Set ^C; //��������� ������ �����

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(21, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���������:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(24, 49);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(454, 48);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Enabled = false;
			this->richTextBox2->Location = System::Drawing::Point(24, 190);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(211, 28);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Enabled = false;
			this->richTextBox3->Location = System::Drawing::Point(24, 127);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(211, 28);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(19, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 22);
			this->textBox1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGreen;
			this->button2->Location = System::Drawing::Point(97, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(19, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 22);
			this->textBox2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGreen;
			this->button1->Location = System::Drawing::Point(97, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(250, 103);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(273, 128);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�������������� ���������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(21, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"������ �����:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(21, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"������� �����:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(357, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 28);
			this->button3->TabIndex = 9;
			this->button3->Text = L"�������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(542, 284);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (textBox2->Text != "")
		{
			A = A - Convert::ToInt32(textBox2->Text);
			this->richTextBox1->Text = A->ToString();
			A->write_in_file("�����.txt");

			while (!(A->Is_Empty()))
			{

			}
			B->operator=(A->even());
			this->richTextBox2->Text = B->ToString();

			C->operator=(A->simple());
			this->richTextBox3->Text = C->ToString();

		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = A->ToString();

	B->operator=(A->even());
	this->richTextBox2->Text = B->ToString();

	C->operator=(A->simple());
	this->richTextBox3->Text = C->ToString();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text != "")
	{
		A = A + Convert::ToInt32(textBox1->Text);
		this->richTextBox1->Text = A->ToString();
		A->write_in_file("�����.txt");

		B->operator=(A->even());
		this->richTextBox2->Text = B->ToString();


		C->operator=(A->simple());
		this->richTextBox3->Text = C->ToString();
	}
}
};
}