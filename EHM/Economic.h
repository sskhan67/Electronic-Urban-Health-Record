#pragma once
#include<string>
#include<iostream>
#include <vector>
#include<string.h>
#using <System.Drawing.dll>
#using <System.dll>
#using <system.windows.forms.dll>

#include "database.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// Summary for Economic
	/// </summary>
	public ref class Economic : public System::Windows::Forms::Form
	{
	public:
		Economic(void)
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
		~Economic()
		{
			if (components)
			{
				delete components;
			}
		}

	public: database^ db;
	public: database^ db1;
	public: database^ db2;
	public: int checkFlag;
	//public: String^ cityname;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::RadioButton^  rdb2;
	private: System::Windows::Forms::RadioButton^  rdb1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::RadioButton^  rdb5;
	private: System::Windows::Forms::RadioButton^  rdb6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::RadioButton^  rdb3;
	private: System::Windows::Forms::RadioButton^  rdb4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  lblWarning03;
	private: System::Windows::Forms::Label^  lblWarning02;
	private: System::Windows::Forms::Label^  lblWarning01;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->rdb5 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->rdb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->rdb1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb2 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblWarning01 = (gcnew System::Windows::Forms::Label());
			this->lblWarning02 = (gcnew System::Windows::Forms::Label());
			this->lblWarning03 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblWarning03);
			this->groupBox1->Controls->Add(this->lblWarning02);
			this->groupBox1->Controls->Add(this->lblWarning01);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(33, 99);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(813, 285);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(475, 222);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(43, 21);
			this->textBox9->TabIndex = 93;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(346, 222);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(43, 21);
			this->textBox8->TabIndex = 92;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(238, 223);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(43, 21);
			this->textBox7->TabIndex = 91;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(475, 176);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 21);
			this->textBox6->TabIndex = 90;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(346, 176);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 21);
			this->textBox5->TabIndex = 89;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(238, 176);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 21);
			this->textBox4->TabIndex = 88;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(475, 134);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 21);
			this->textBox3->TabIndex = 87;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(346, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 21);
			this->textBox2->TabIndex = 86;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(238, 134);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 21);
			this->textBox1->TabIndex = 85;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(639, 73);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(86, 18);
			this->label35->TabIndex = 84;
			this->label35->Text = L"Input Type";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(609, 91);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(168, 18);
			this->label45->TabIndex = 83;
			this->label45->Text = L"(Percentage/Number)";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->rdb5);
			this->groupBox4->Controls->Add(this->rdb6);
			this->groupBox4->Location = System::Drawing::Point(625, 212);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(149, 35);
			this->groupBox4->TabIndex = 46;
			this->groupBox4->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(66, 10);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(16, 18);
			this->label21->TabIndex = 44;
			this->label21->Text = L"/";
			// 
			// rdb5
			// 
			this->rdb5->AutoSize = true;
			this->rdb5->Location = System::Drawing::Point(36, 13);
			this->rdb5->Name = L"rdb5";
			this->rdb5->Size = System::Drawing::Size(14, 13);
			this->rdb5->TabIndex = 42;
			this->rdb5->TabStop = true;
			this->rdb5->UseVisualStyleBackColor = true;
			// 
			// rdb6
			// 
			this->rdb6->AutoSize = true;
			this->rdb6->Location = System::Drawing::Point(101, 13);
			this->rdb6->Name = L"rdb6";
			this->rdb6->Size = System::Drawing::Size(14, 13);
			this->rdb6->TabIndex = 43;
			this->rdb6->TabStop = true;
			this->rdb6->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->rdb3);
			this->groupBox3->Controls->Add(this->rdb4);
			this->groupBox3->Location = System::Drawing::Point(625, 172);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(149, 35);
			this->groupBox3->TabIndex = 45;
			this->groupBox3->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(66, 10);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(16, 18);
			this->label20->TabIndex = 44;
			this->label20->Text = L"/";
			// 
			// rdb3
			// 
			this->rdb3->AutoSize = true;
			this->rdb3->Location = System::Drawing::Point(36, 13);
			this->rdb3->Name = L"rdb3";
			this->rdb3->Size = System::Drawing::Size(14, 13);
			this->rdb3->TabIndex = 42;
			this->rdb3->TabStop = true;
			this->rdb3->UseVisualStyleBackColor = true;
			// 
			// rdb4
			// 
			this->rdb4->AutoSize = true;
			this->rdb4->Location = System::Drawing::Point(101, 13);
			this->rdb4->Name = L"rdb4";
			this->rdb4->Size = System::Drawing::Size(14, 13);
			this->rdb4->TabIndex = 43;
			this->rdb4->TabStop = true;
			this->rdb4->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->rdb1);
			this->groupBox2->Controls->Add(this->rdb2);
			this->groupBox2->Location = System::Drawing::Point(625, 123);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(149, 35);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(66, 10);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 18);
			this->label19->TabIndex = 44;
			this->label19->Text = L"/";
			// 
			// rdb1
			// 
			this->rdb1->AutoSize = true;
			this->rdb1->Location = System::Drawing::Point(36, 13);
			this->rdb1->Name = L"rdb1";
			this->rdb1->Size = System::Drawing::Size(14, 13);
			this->rdb1->TabIndex = 42;
			this->rdb1->TabStop = true;
			this->rdb1->UseVisualStyleBackColor = true;
			// 
			// rdb2
			// 
			this->rdb2->AutoSize = true;
			this->rdb2->Location = System::Drawing::Point(101, 13);
			this->rdb2->Name = L"rdb2";
			this->rdb2->Size = System::Drawing::Size(14, 13);
			this->rdb2->TabIndex = 43;
			this->rdb2->TabStop = true;
			this->rdb2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(450, 88);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 18);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Upper Baseline";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(316, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 18);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Lower Baseline";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(238, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 25);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Economic::comboBox1_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(43, 40);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(76, 18);
			this->label17->TabIndex = 25;
			this->label17->Text = L"City Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(43, 222);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Secure tenure";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(43, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Women in workforce";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Poverty ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(235, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Input";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(271, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Economic::button1_Click);
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(466, 414);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(100, 40);
			this->btnSave->TabIndex = 11;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Economic::btnSave_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(35, 78);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(78, 18);
			this->label36->TabIndex = 85;
			this->label36->Text = L"Economic";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label34->Location = System::Drawing::Point(211, 9);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(497, 39);
			this->label34->TabIndex = 84;
			this->label34->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(766, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 86;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(766, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 87;
			this->pictureBox2->TabStop = false;
			// 
			// lblWarning01
			// 
			this->lblWarning01->AutoSize = true;
			this->lblWarning01->ForeColor = System::Drawing::Color::Red;
			this->lblWarning01->Location = System::Drawing::Point(238, 157);
			this->lblWarning01->Name = L"lblWarning01";
			this->lblWarning01->Size = System::Drawing::Size(339, 13);
			this->lblWarning01->TabIndex = 94;
			this->lblWarning01->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// lblWarning02
			// 
			this->lblWarning02->AutoSize = true;
			this->lblWarning02->ForeColor = System::Drawing::Color::Red;
			this->lblWarning02->Location = System::Drawing::Point(238, 200);
			this->lblWarning02->Name = L"lblWarning02";
			this->lblWarning02->Size = System::Drawing::Size(339, 13);
			this->lblWarning02->TabIndex = 95;
			this->lblWarning02->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// lblWarning03
			// 
			this->lblWarning03->AutoSize = true;
			this->lblWarning03->ForeColor = System::Drawing::Color::Red;
			this->lblWarning03->Location = System::Drawing::Point(238, 247);
			this->lblWarning03->Name = L"lblWarning03";
			this->lblWarning03->Size = System::Drawing::Size(339, 13);
			this->lblWarning03->TabIndex = 96;
			this->lblWarning03->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// Economic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 486);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Economic";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Economic";
			this->Load += gcnew System::EventHandler(this, &Economic::Economic_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//variable declare
		XmlDataDocument mydoc ;
		String^ a1;
		String^ a2;
		String^ a3;
		String^ a4;
		String^ a5;
		String^ a6;
		String^ a7;
		String^ a8;
		String^ a9;
		String^ a10;
		String^ a11;
		String^ a12;
		int CurrentRow;
	//close form
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	int checkFieldValidation()
	{
		if(textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "")
			return 1;
		int warning = 0;
		int a1 = System::Convert::ToInt32(textBox1->Text);
		int a2 = System::Convert::ToInt32(textBox2->Text);
		int a3 = System::Convert::ToInt32(textBox3->Text);
		int a4 = System::Convert::ToInt32(textBox4->Text);
		int a5 = System::Convert::ToInt32(textBox5->Text);
		int a6 = System::Convert::ToInt32(textBox6->Text);
		int a7 = System::Convert::ToInt32(textBox7->Text);
		int a8 = System::Convert::ToInt32(textBox8->Text);
		int a9 = System::Convert::ToInt32(textBox9->Text);

		if(rdb1->Checked == true && (a1>100 || a2>100 || a3>100))
		{
			lblWarning01->Show();
			warning = 1;
		}
		else
			lblWarning01->Hide();
		if(rdb3->Checked == true && (a4>100 || a5>100 || a6>100))
		{
			lblWarning02->Show();
			warning = 1;
		}
		else
			lblWarning02->Hide();
		if(rdb5->Checked == true && (a7>100 || a8>100 || a9>100))
		{
			lblWarning03->Show();
			warning = 1;
		}
		else
			lblWarning03->Hide();

		return warning;
	}

	//save the input values into Economic.xml file
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		//button3->PerformClick();
		int val = checkFieldValidation();
		if(val == 0)
		{
			if(checkFlag == 0)
			{
				String^ path = "..\\App_Data\\Economic.xml";
				XmlDocument^ doc = gcnew XmlDocument();

				//If there is no current file, then create a new one
				XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
				XmlComment^ comment = doc->CreateComment("This is an XML Generated File");
				if (!System::IO::File::Exists(path))
				{
					//Create necessary nodes

					declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
					comment = doc->CreateComment("This is an XML Generated File");
					doc->InnerXml = "<?xml version='1.0' standalone='yes'?><EHM><Economic></Economic></EHM>";
				}
				else //If there is already a file
				{
					//Load the XML File
					doc->Load(path);
				}
				//Get the root element
				XmlElement^ root = doc->CreateElement("EHM");
				XmlElement^ Subroot = doc->CreateElement("Economic");

				XmlElement^ City = doc->CreateElement("City");
				XmlElement^ Poverty = doc->CreateElement("Poverty");
				XmlElement^ PovertyL = doc->CreateElement("PovertyL");
				XmlElement^ PovertyU = doc->CreateElement("PovertyU");
				XmlElement^ PovertyDataType = doc->CreateElement("PovertyDataType");
				XmlElement^ Women = doc->CreateElement("Women");
				XmlElement^ WomenL = doc->CreateElement("WomenL");
				XmlElement^ WomenU = doc->CreateElement("WomenU");
				XmlElement^ WomenDataType = doc->CreateElement("WomenDataType");
				XmlElement^ Secure = doc->CreateElement("Secure");
				XmlElement^ SecureL = doc->CreateElement("SecureL");
				XmlElement^ SecureU = doc->CreateElement("SecureU");
				XmlElement^ SecureDataType = doc->CreateElement("SecureDataType");

				//Add the values for each nodes
				a1 = textBox1->Text;
				a2 = textBox2->Text;
				a3 = textBox3->Text;
				if(rdb1->Checked)	a4 = "Percentage";
				else	a4 = "Number";
				a5 = textBox4->Text;
				a6 = textBox5->Text;
				a7 = textBox6->Text;
				if(rdb3->Checked)	a8 = "Percentage";
				else	a8 = "Number";
				a9 = textBox7->Text;
				a10 = textBox8->Text;
				a11 = textBox9->Text;
				if(rdb5->Checked)
					a12 = "Percentage";
				else
					a12 = "Number";

				City->InnerText = comboBox1->Text;
				Poverty->InnerText = a1;
				PovertyL->InnerText = a2;
				PovertyU->InnerText = a3;
				PovertyDataType->InnerText = a4;
				Women->InnerText = a5;
				WomenL->InnerText = a6;
				WomenU->InnerText = a7;
				WomenDataType->InnerText = a8;
				Secure->InnerText = a9;
				SecureL->InnerText = a10;
				SecureU->InnerText = a11;
				SecureDataType->InnerText = a12;

				XmlNode^ docNode = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");				 
				doc->DocumentElement->AppendChild( Subroot );
				Subroot->AppendChild( City );
				Subroot->AppendChild( Poverty );
				Subroot->AppendChild( PovertyL );
				Subroot->AppendChild( PovertyU );
				Subroot->AppendChild( PovertyDataType );
				Subroot->AppendChild( Women );
				Subroot->AppendChild( WomenL );
				Subroot->AppendChild( WomenU );
				Subroot->AppendChild( WomenDataType );
				Subroot->AppendChild( Secure );
				Subroot->AppendChild( SecureL );
				Subroot->AppendChild( SecureU );
				Subroot->AppendChild( SecureDataType );

				doc->Save(path);

				MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );

				textBox1->Text="";
				textBox2->Text="";
				textBox3->Text="";
				textBox4->Text="";
				textBox5->Text="";
				textBox6->Text="";
				textBox7->Text="";
				textBox8->Text="";
				textBox9->Text="";
			}
			else
			{
				this->db2 = gcnew database();
				this->db2->read_economic_db();
				String^ city = comboBox1->Text;
				String^ query;
				query = "City = '" + comboBox1->Text + "'";
				array<DataRow^>^ myRows = this->db2->Economic->Select(query);
				int k = myRows->Length;
				if(myRows->Length > 0)
				{
					myRows[0]->BeginEdit();
					myRows[0]->default[1] = textBox1->Text;
					myRows[0]->default[2] = textBox2->Text;
					myRows[0]->default[3] = textBox3->Text;
					if(rdb1->Checked)	myRows[0]->default[4] = "Percentage";
					else	myRows[0]->default[4] = "Number";
					myRows[0]->default[5] = textBox4->Text;
					myRows[0]->default[6] = textBox5->Text;
					myRows[0]->default[7] = textBox6->Text;
					if(rdb3->Checked)	myRows[0]->default[8] = "Percentage";
					else	myRows[0]->default[8] = "Number";
					myRows[0]->default[9] = textBox7->Text;
					myRows[0]->default[10] = textBox8->Text;
					myRows[0]->default[11] = textBox9->Text;
					if(rdb5->Checked)	myRows[0]->default[12] = "Percentage";
					else	myRows[0]->default[12] = "Number";
					myRows[0]->EndEdit();
					MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );
					db2->write_economic_db(); //write xml file
				}
			}
			Economic::Close();
		}
		
	}
	//check city name which data already insert into the economic xml file...
	int CheckExistCity(String^ city)
	{
		this->db1 = gcnew database();
		this->db1->read_economic_db();
		int l;
		String^ comboString;
		String^ query;
		int flag=0;
		query = "City <> '" + "nai" + "'";
		array<DataRow^>^ myRows = db1->Economic->Select(query);
		l = myRows->Length;
		if(myRows->Length > 0)
		{
			for(int i=0; i< l; i++)
			{
				comboString = myRows[i]->default[0]->ToString();
				if(city == comboString)
				{
					textBox1->Text = myRows[i]->default[1]->ToString();
					textBox2->Text = myRows[i]->default[2]->ToString();
					textBox3->Text = myRows[i]->default[3]->ToString();
					if(myRows[i]->default[4]->ToString() == "Percentage")
						rdb1->Checked = true;
					else
						rdb2->Checked = true;
					textBox4->Text = myRows[i]->default[5]->ToString();
					textBox5->Text = myRows[i]->default[6]->ToString();
					textBox6->Text = myRows[i]->default[7]->ToString();
					if(myRows[i]->default[8]->ToString() == "Percentage")
						rdb3->Checked = true;
					else
						rdb4->Checked = true;
					textBox7->Text = myRows[i]->default[9]->ToString();
					textBox8->Text = myRows[i]->default[10]->ToString();
					textBox9->Text = myRows[i]->default[11]->ToString();
					if(myRows[i]->default[12]->ToString() == "Percentage")
						rdb5->Checked = true;
					else
						rdb6->Checked = true;

					flag = 1;
					break;
				}
			}
		}
		if(flag == 0)
		{
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";
			textBox4->Text="";
			textBox5->Text="";
			textBox6->Text="";
			textBox7->Text="";
			textBox8->Text="";
			textBox9->Text="";
			rdb1->Checked = true;
			rdb3->Checked = true;
			rdb5->Checked = true;
		}
		return flag;

	}
	//form load
	private: System::Void Economic_Load(System::Object^  sender, System::EventArgs^  e) {
		lblWarning01->Hide();
		lblWarning02->Hide();
		lblWarning03->Hide();
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		rdb1->Checked = 'True';
		rdb3->Checked = 'True';
		rdb5->Checked = 'True';

		this->db = gcnew database();
		this->db->read_city_db();
		int l;
		String^ comboString;
		String^ query;
		query = "Name <> '" + "nai" + "'";
		array<DataRow^>^ myRows = db->City->Select(query);
		l = myRows->Length;
		if(myRows->Length > 0)
		{
			for(int i=0; i< l; i++)
			{
				comboString = myRows[i]->default[0]->ToString();
				this->comboBox1->Items->Add(comboString);
			}
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		lblWarning01->Hide();
		lblWarning02->Hide();
		lblWarning03->Hide();
		checkFlag = CheckExistCity(comboBox1->Text);
	}
};
}
