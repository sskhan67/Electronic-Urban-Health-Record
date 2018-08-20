#pragma once

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
	/// Summary for Socialandhumandevelopment
	/// </summary>
	public ref class Socialandhumandevelopment : public System::Windows::Forms::Form
	{
	public:
		Socialandhumandevelopment(void)
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
		~Socialandhumandevelopment()
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
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::RadioButton^  rdb11;
	private: System::Windows::Forms::RadioButton^  rdb12;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::RadioButton^  rdb9;
	private: System::Windows::Forms::RadioButton^  rdb10;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::RadioButton^  rdb7;
	private: System::Windows::Forms::RadioButton^  rdb8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::RadioButton^  rdb5;
	private: System::Windows::Forms::RadioButton^  rdb6;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::RadioButton^  rdb3;
	private: System::Windows::Forms::RadioButton^  rdb4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::RadioButton^  rdb1;
	private: System::Windows::Forms::RadioButton^  rdb2;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  lblWarning06;
	private: System::Windows::Forms::Label^  lblWarning05;
	private: System::Windows::Forms::Label^  lblWarning04;
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
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->rdb11 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb12 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->rdb9 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb10 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->rdb7 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->rdb5 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->rdb3 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->rdb1 = (gcnew System::Windows::Forms::RadioButton());
			this->rdb2 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblWarning06 = (gcnew System::Windows::Forms::Label());
			this->lblWarning05 = (gcnew System::Windows::Forms::Label());
			this->lblWarning04 = (gcnew System::Windows::Forms::Label());
			this->lblWarning03 = (gcnew System::Windows::Forms::Label());
			this->lblWarning02 = (gcnew System::Windows::Forms::Label());
			this->lblWarning01 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblWarning06);
			this->groupBox1->Controls->Add(this->lblWarning05);
			this->groupBox1->Controls->Add(this->lblWarning04);
			this->groupBox1->Controls->Add(this->lblWarning03);
			this->groupBox1->Controls->Add(this->lblWarning02);
			this->groupBox1->Controls->Add(this->lblWarning01);
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox10);
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
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(53, 96);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(899, 430);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(564, 366);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(43, 21);
			this->textBox18->TabIndex = 104;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(376, 366);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(43, 21);
			this->textBox17->TabIndex = 103;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(250, 366);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(43, 21);
			this->textBox16->TabIndex = 102;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(564, 321);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(43, 21);
			this->textBox15->TabIndex = 101;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(376, 322);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(43, 21);
			this->textBox14->TabIndex = 100;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(250, 321);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(43, 21);
			this->textBox13->TabIndex = 99;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(564, 272);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(43, 21);
			this->textBox12->TabIndex = 98;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(376, 270);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(43, 21);
			this->textBox11->TabIndex = 97;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(250, 270);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(43, 21);
			this->textBox10->TabIndex = 96;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(564, 224);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(43, 21);
			this->textBox9->TabIndex = 95;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(376, 226);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(43, 21);
			this->textBox8->TabIndex = 94;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(250, 224);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(43, 21);
			this->textBox7->TabIndex = 93;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(564, 186);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 21);
			this->textBox6->TabIndex = 92;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(376, 183);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 21);
			this->textBox5->TabIndex = 91;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(250, 183);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(43, 21);
			this->textBox4->TabIndex = 90;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(564, 147);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 21);
			this->textBox3->TabIndex = 89;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(376, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(43, 21);
			this->textBox2->TabIndex = 88;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(250, 145);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 21);
			this->textBox1->TabIndex = 87;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(725, 84);
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
			this->label45->Location = System::Drawing::Point(695, 102);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(168, 18);
			this->label45->TabIndex = 83;
			this->label45->Text = L"(Percentage/Number)";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label48);
			this->groupBox7->Controls->Add(this->rdb11);
			this->groupBox7->Controls->Add(this->rdb12);
			this->groupBox7->Location = System::Drawing::Point(711, 368);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(149, 35);
			this->groupBox7->TabIndex = 80;
			this->groupBox7->TabStop = false;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(66, 10);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(16, 18);
			this->label48->TabIndex = 44;
			this->label48->Text = L"/";
			// 
			// rdb11
			// 
			this->rdb11->AutoSize = true;
			this->rdb11->Location = System::Drawing::Point(36, 13);
			this->rdb11->Name = L"rdb11";
			this->rdb11->Size = System::Drawing::Size(14, 13);
			this->rdb11->TabIndex = 42;
			this->rdb11->TabStop = true;
			this->rdb11->UseVisualStyleBackColor = true;
			// 
			// rdb12
			// 
			this->rdb12->AutoSize = true;
			this->rdb12->Location = System::Drawing::Point(101, 13);
			this->rdb12->Name = L"rdb12";
			this->rdb12->Size = System::Drawing::Size(14, 13);
			this->rdb12->TabIndex = 43;
			this->rdb12->TabStop = true;
			this->rdb12->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label47);
			this->groupBox6->Controls->Add(this->rdb9);
			this->groupBox6->Controls->Add(this->rdb10);
			this->groupBox6->Location = System::Drawing::Point(711, 320);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(149, 35);
			this->groupBox6->TabIndex = 79;
			this->groupBox6->TabStop = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(66, 10);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(16, 18);
			this->label47->TabIndex = 44;
			this->label47->Text = L"/";
			// 
			// rdb9
			// 
			this->rdb9->AutoSize = true;
			this->rdb9->Location = System::Drawing::Point(36, 13);
			this->rdb9->Name = L"rdb9";
			this->rdb9->Size = System::Drawing::Size(14, 13);
			this->rdb9->TabIndex = 42;
			this->rdb9->TabStop = true;
			this->rdb9->UseVisualStyleBackColor = true;
			// 
			// rdb10
			// 
			this->rdb10->AutoSize = true;
			this->rdb10->Location = System::Drawing::Point(101, 13);
			this->rdb10->Name = L"rdb10";
			this->rdb10->Size = System::Drawing::Size(14, 13);
			this->rdb10->TabIndex = 43;
			this->rdb10->TabStop = true;
			this->rdb10->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label46);
			this->groupBox5->Controls->Add(this->rdb7);
			this->groupBox5->Controls->Add(this->rdb8);
			this->groupBox5->Location = System::Drawing::Point(711, 271);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(149, 35);
			this->groupBox5->TabIndex = 78;
			this->groupBox5->TabStop = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(66, 10);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(16, 18);
			this->label46->TabIndex = 44;
			this->label46->Text = L"/";
			// 
			// rdb7
			// 
			this->rdb7->AutoSize = true;
			this->rdb7->Location = System::Drawing::Point(36, 13);
			this->rdb7->Name = L"rdb7";
			this->rdb7->Size = System::Drawing::Size(14, 13);
			this->rdb7->TabIndex = 42;
			this->rdb7->TabStop = true;
			this->rdb7->UseVisualStyleBackColor = true;
			// 
			// rdb8
			// 
			this->rdb8->AutoSize = true;
			this->rdb8->Location = System::Drawing::Point(101, 13);
			this->rdb8->Name = L"rdb8";
			this->rdb8->Size = System::Drawing::Size(14, 13);
			this->rdb8->TabIndex = 43;
			this->rdb8->TabStop = true;
			this->rdb8->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label42);
			this->groupBox4->Controls->Add(this->rdb5);
			this->groupBox4->Controls->Add(this->rdb6);
			this->groupBox4->Location = System::Drawing::Point(711, 222);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(149, 35);
			this->groupBox4->TabIndex = 77;
			this->groupBox4->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(66, 10);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(16, 18);
			this->label42->TabIndex = 44;
			this->label42->Text = L"/";
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
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->rdb3);
			this->groupBox3->Controls->Add(this->rdb4);
			this->groupBox3->Location = System::Drawing::Point(711, 181);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(149, 35);
			this->groupBox3->TabIndex = 76;
			this->groupBox3->TabStop = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(66, 10);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(16, 18);
			this->label43->TabIndex = 44;
			this->label43->Text = L"/";
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
			this->groupBox2->Controls->Add(this->label44);
			this->groupBox2->Controls->Add(this->rdb1);
			this->groupBox2->Controls->Add(this->rdb2);
			this->groupBox2->Location = System::Drawing::Point(711, 141);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(149, 35);
			this->groupBox2->TabIndex = 74;
			this->groupBox2->TabStop = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(66, 10);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(16, 18);
			this->label44->TabIndex = 44;
			this->label44->Text = L"/";
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(533, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 18);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Upper Baseline";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(349, 102);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(114, 18);
			this->label16->TabIndex = 47;
			this->label16->Text = L"Lower Baseline";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(250, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 25);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Socialandhumandevelopment::comboBox1_SelectedIndexChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(40, 45);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(76, 18);
			this->label17->TabIndex = 45;
			this->label17->Text = L"City Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(247, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 18);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Input";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(40, 102);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 18);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 369);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 18);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Physical activity";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(40, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 18);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Teenage pregnancy";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(40, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 18);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Breastfeeding";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 18);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Overweight and obesity";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 18);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Underweight children";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 18);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Literacy";
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(289, 560);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(100, 40);
			this->btnExit->TabIndex = 21;
			this->btnExit->Text = L"Close";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Socialandhumandevelopment::btnExit_Click);
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(513, 560);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(100, 40);
			this->btnSave->TabIndex = 20;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Socialandhumandevelopment::btnSave_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(883, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(55, 76);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(224, 18);
			this->label36->TabIndex = 85;
			this->label36->Text = L"Social and human development";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label34->Location = System::Drawing::Point(258, 12);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(497, 39);
			this->label34->TabIndex = 84;
			this->label34->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(883, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 86;
			this->pictureBox2->TabStop = false;
			// 
			// lblWarning06
			// 
			this->lblWarning06->AutoSize = true;
			this->lblWarning06->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWarning06->ForeColor = System::Drawing::Color::Red;
			this->lblWarning06->Location = System::Drawing::Point(247, 390);
			this->lblWarning06->Name = L"lblWarning06";
			this->lblWarning06->Size = System::Drawing::Size(342, 13);
			this->lblWarning06->TabIndex = 121;
			this->lblWarning06->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// lblWarning05
			// 
			this->lblWarning05->AutoSize = true;
			this->lblWarning05->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWarning05->ForeColor = System::Drawing::Color::Red;
			this->lblWarning05->Location = System::Drawing::Point(247, 342);
			this->lblWarning05->Name = L"lblWarning05";
			this->lblWarning05->Size = System::Drawing::Size(342, 13);
			this->lblWarning05->TabIndex = 120;
			this->lblWarning05->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// lblWarning04
			// 
			this->lblWarning04->AutoSize = true;
			this->lblWarning04->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWarning04->ForeColor = System::Drawing::Color::Red;
			this->lblWarning04->Location = System::Drawing::Point(247, 293);
			this->lblWarning04->Name = L"lblWarning04";
			this->lblWarning04->Size = System::Drawing::Size(342, 13);
			this->lblWarning04->TabIndex = 119;
			this->lblWarning04->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// lblWarning03
			// 
			this->lblWarning03->AutoSize = true;
			this->lblWarning03->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWarning03->ForeColor = System::Drawing::Color::Red;
			this->lblWarning03->Location = System::Drawing::Point(247, 248);
			this->lblWarning03->Name = L"lblWarning03";
			this->lblWarning03->Size = System::Drawing::Size(342, 13);
			this->lblWarning03->TabIndex = 118;
			this->lblWarning03->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// lblWarning02
			// 
			this->lblWarning02->AutoSize = true;
			this->lblWarning02->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWarning02->ForeColor = System::Drawing::Color::Red;
			this->lblWarning02->Location = System::Drawing::Point(247, 203);
			this->lblWarning02->Name = L"lblWarning02";
			this->lblWarning02->Size = System::Drawing::Size(342, 13);
			this->lblWarning02->TabIndex = 117;
			this->lblWarning02->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// lblWarning01
			// 
			this->lblWarning01->AutoSize = true;
			this->lblWarning01->Font = (gcnew System::Drawing::Font(L"Garamond", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWarning01->ForeColor = System::Drawing::Color::Red;
			this->lblWarning01->Location = System::Drawing::Point(247, 169);
			this->lblWarning01->Name = L"lblWarning01";
			this->lblWarning01->Size = System::Drawing::Size(342, 13);
			this->lblWarning01->TabIndex = 116;
			this->lblWarning01->Text = L"Value must be smaller than 100 Because Input Type is PERCENTAGE";
			// 
			// Socialandhumandevelopment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1001, 618);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Socialandhumandevelopment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Socialandhumandevelopment";
			this->Load += gcnew System::EventHandler(this, &Socialandhumandevelopment::Socialandhumandevelopment_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
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

	XmlDataDocument mydoc ;
	String^ a1;		String^ a2;		String^ a3;		String^ a4;		String^ a5;		String^ a6;
	String^ a7;		String^ a8;		String^ a9;		String^ a10;	String^ a11;	String^ a12;
	String^ a13;	String^ a14;	String^ a15;	String^ a16;	String^ a17;	String^ a18;
	String^ a19;	String^ a20;	String^ a21;	String^ a22;	String^ a23;	String^ a24;
	int CurrentRow;

	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	int checkFieldValidation()
	{
		if(textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "" || textBox9->Text == "" || textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "" || textBox13->Text == "" || textBox14->Text == "" || textBox15->Text == "" || textBox16->Text == "" || textBox17->Text == "" || textBox18->Text == "")
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
		int a10 = System::Convert::ToInt32(textBox10->Text);
		int a11 = System::Convert::ToInt32(textBox11->Text);
		int a12 = System::Convert::ToInt32(textBox12->Text);
		int a13 = System::Convert::ToInt32(textBox13->Text);
		int a14 = System::Convert::ToInt32(textBox14->Text);
		int a15 = System::Convert::ToInt32(textBox15->Text);
		int a16 = System::Convert::ToInt32(textBox16->Text);
		int a17 = System::Convert::ToInt32(textBox17->Text);
		int a18 = System::Convert::ToInt32(textBox18->Text);

		if(rdb1->Checked == true && (a1>100 || a2>100 || a3>100)){
			lblWarning01->Show();
			warning = 1;
		}
		else	lblWarning01->Hide();

		if(rdb3->Checked == true && (a4>100 || a5>100 || a6>100)){
			lblWarning02->Show();
			warning = 1;
		}
		else	lblWarning02->Hide();

		if(rdb5->Checked == true && (a7>100 || a8>100 || a9>100)){
			lblWarning03->Show();
			warning = 1;
		}
		else	lblWarning03->Hide();

		if(rdb7->Checked == true && (a10>100 || a11>100 || a12>100)){
			lblWarning04->Show();
			warning = 1;
		}
		else	lblWarning04->Hide();

		if(rdb9->Checked == true && (a13>100 || a14>100 || a15>100)){
			lblWarning05->Show();
			warning = 1;
		}
		else	lblWarning05->Hide();

		if(rdb11->Checked == true && (a16>100 || a17>100 || a18>100)){
			lblWarning06->Show();
			warning = 1;
		}
		else	lblWarning06->Hide();

		return warning;
	}

	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		//button3->PerformClick();
		int val = checkFieldValidation();
		if(val == 0)
		{
			if(checkFlag == 0)
			{
				String^ path = "..\\App_Data\\Social.xml";
				XmlDocument^ doc = gcnew XmlDocument();

				//If there is no current file, then create a new one
				XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
				XmlComment^ comment = doc->CreateComment("This is an XML Generated File");
				if (!System::IO::File::Exists(path))
				{
					//Create necessary nodes

					declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
					comment = doc->CreateComment("This is an XML Generated File");
					doc->InnerXml = "<?xml version='1.0' standalone='yes'?><EHM><Social></Social></EHM>";
				}
				else //If there is already a file
				{
					//Load the XML File
					doc->Load(path);
				}
				//Get the root element
				XmlElement^ root = doc->CreateElement("EHM");
				XmlElement^ Subroot = doc->CreateElement("Social");

				XmlElement ^ City = doc->CreateElement("City");
				XmlElement ^ Literacy = doc->CreateElement("Literacy");
				XmlElement ^ LiteracyL = doc->CreateElement("LiteracyL");
				XmlElement ^ LiteracyU = doc->CreateElement("LiteracyU");
				XmlElement ^ LiteracyDataType = doc->CreateElement("LiteracyDataType");
				XmlElement^ UnderweightChildren = doc->CreateElement("UnderweightChildren");
				XmlElement^ UnderweightChildrenL = doc->CreateElement("UnderweightChildrenL");
				XmlElement^ UnderweightChildrenU = doc->CreateElement("UnderweightChildrenU");
				XmlElement^ UnderweightChildrenDataType = doc->CreateElement("UnderweightChildrenDataType");
				XmlElement^ OverweightObesity = doc->CreateElement("OverweightObesity");
				XmlElement^ OverweightObesityL = doc->CreateElement("OverweightObesityL");
				XmlElement^ OverweightObesityU = doc->CreateElement("OverweightObesityU");
				XmlElement^ OverweightObesityDataType = doc->CreateElement("OverweightObesityDataType");
				XmlElement ^ Breastfeeding = doc->CreateElement("Breastfeeding");
				XmlElement ^ BreastfeedingL = doc->CreateElement("BreastfeedingL");
				XmlElement ^ BreastfeedingU = doc->CreateElement("BreastfeedingU");
				XmlElement ^ BreastfeedingDataType = doc->CreateElement("BreastfeedingDataType");
				XmlElement^ TeenagePregnancy = doc->CreateElement("TeenagePregnancy");
				XmlElement^ TeenagePregnancyL = doc->CreateElement("TeenagePregnancyL");
				XmlElement^ TeenagePregnancyU = doc->CreateElement("TeenagePregnancyU");
				XmlElement^ TeenagePregnancyDataType = doc->CreateElement("TeenagePregnancyDataType");
				XmlElement^ PhysicalActivity = doc->CreateElement("PhysicalActivity");
				XmlElement^ PhysicalActivityL = doc->CreateElement("PhysicalActivityL");
				XmlElement^ PhysicalActivityU = doc->CreateElement("PhysicalActivityU");
				XmlElement^ PhysicalActivityDataType = doc->CreateElement("PhysicalActivityDataType");

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
				if(rdb5->Checked)	a12 = "Percentage";
				else	a12 = "Number";
				a13 = textBox10->Text;
				a14 = textBox11->Text;
				a15 = textBox12->Text;
				if(rdb7->Checked)	a16 = "Percentage";
				else	a16 = "Number";
				a17 = textBox13->Text;
				a18 = textBox14->Text;
				a19 = textBox15->Text;
				if(rdb9->Checked)	a20 = "Percentage";
				else	a20 = "Number";
				a21 = textBox16->Text;
				a22 = textBox17->Text;
				a23 = textBox18->Text;
				if(rdb11->Checked)	a24 = "Percentage";
				else	a24 = "Number";

				City->InnerText = comboBox1->Text;
				Literacy->InnerText = a1;
				LiteracyL->InnerText = a2;
				LiteracyU->InnerText = a3;
				LiteracyDataType->InnerText = a4;
				UnderweightChildren->InnerText = a5;
				UnderweightChildrenL->InnerText = a6;
				UnderweightChildrenU->InnerText = a7;
				UnderweightChildrenDataType->InnerText = a8;
				OverweightObesity->InnerText = a9;
				OverweightObesityL->InnerText = a10;
				OverweightObesityU->InnerText = a11;
				OverweightObesityDataType->InnerText = a12;
				Breastfeeding->InnerText = a13;
				BreastfeedingL->InnerText = a14;
				BreastfeedingU->InnerText = a15;
				BreastfeedingDataType->InnerText = a16;
				TeenagePregnancy->InnerText = a17;
				TeenagePregnancyL->InnerText = a18;
				TeenagePregnancyU->InnerText = a19;
				TeenagePregnancyDataType->InnerText = a20;
				PhysicalActivity->InnerText = a21;
				PhysicalActivityL->InnerText = a22;
				PhysicalActivityU->InnerText = a23;
				PhysicalActivityDataType->InnerText = a24;

				XmlNode^ docNode = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");				 
				doc->DocumentElement->AppendChild( Subroot );
				Subroot->AppendChild( City );
				Subroot->AppendChild( Literacy );
				Subroot->AppendChild( LiteracyL );
				Subroot->AppendChild( LiteracyU );
				Subroot->AppendChild( LiteracyDataType );
				Subroot->AppendChild( UnderweightChildren );
				Subroot->AppendChild( UnderweightChildrenL );
				Subroot->AppendChild( UnderweightChildrenU );
				Subroot->AppendChild( UnderweightChildrenDataType );
				Subroot->AppendChild( OverweightObesity );
				Subroot->AppendChild( OverweightObesityL );
				Subroot->AppendChild( OverweightObesityU );
				Subroot->AppendChild( OverweightObesityDataType );
				Subroot->AppendChild( Breastfeeding );
				Subroot->AppendChild( BreastfeedingL );
				Subroot->AppendChild( BreastfeedingU );
				Subroot->AppendChild( BreastfeedingDataType );
				Subroot->AppendChild( TeenagePregnancy );
				Subroot->AppendChild( TeenagePregnancyL );
				Subroot->AppendChild( TeenagePregnancyU );
				Subroot->AppendChild( TeenagePregnancyDataType );
				Subroot->AppendChild( PhysicalActivity );
				Subroot->AppendChild( PhysicalActivityL );
				Subroot->AppendChild( PhysicalActivityU );
				Subroot->AppendChild( PhysicalActivityDataType );

				doc->Save(path);

				MessageBox::Show("Update Successful");

				textBox1->Text="";
				textBox2->Text="";
				textBox3->Text="";
				textBox4->Text="";
				textBox5->Text="";
				textBox6->Text="";
				textBox7->Text="";
				textBox8->Text="";
				textBox9->Text="";
				textBox10->Text="";
				textBox11->Text="";
				textBox12->Text="";
				textBox13->Text="";
				textBox14->Text="";
				textBox15->Text="";
				textBox16->Text="";
				textBox17->Text="";
				textBox18->Text="";
			}
			else
			{
				this->db2 = gcnew database();
				this->db2->read_social_db();
				String^ city = comboBox1->Text;
				String^ query;
				query = "City = '" + comboBox1->Text + "'";
				array<DataRow^>^ myRows = this->db2->Social->Select(query);
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
					myRows[0]->default[13] = textBox10->Text;
					myRows[0]->default[14] = textBox11->Text;
					myRows[0]->default[15] = textBox12->Text;
					if(rdb7->Checked)	myRows[0]->default[16] = "Percentage";
					else	myRows[0]->default[16] = "Number";
					myRows[0]->default[17] = textBox13->Text;
					myRows[0]->default[18] = textBox14->Text;
					myRows[0]->default[19] = textBox15->Text;
					if(rdb9->Checked)	myRows[0]->default[20] = "Percentage";
					else	myRows[0]->default[20] = "Number";
					myRows[0]->default[21] = textBox16->Text;
					myRows[0]->default[22] = textBox17->Text;
					myRows[0]->default[23] = textBox18->Text;
					if(rdb11->Checked)	myRows[0]->default[24] = "Percentage";
					else	myRows[0]->default[24] = "Number";
					myRows[0]->EndEdit();
					MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );
					db2->write_social_db(); //write xml file
				}
			}
			Socialandhumandevelopment :: Close();
		}
	}

	int CheckExistCity	(String^ city)
	{
		this->db1 = gcnew database();
		this->db1->read_social_db();
		int l;
		String^ comboString;
		String^ query;
		int flag=0;
		query = "City <> '" + "nai" + "'";
		array<DataRow^>^ myRows = db1->Social->Select(query);
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
					textBox10->Text = myRows[i]->default[13]->ToString();
					textBox11->Text = myRows[i]->default[14]->ToString();
					textBox12->Text = myRows[i]->default[15]->ToString();
					if(myRows[i]->default[16]->ToString() == "Percentage")
						rdb7->Checked = true;
					else
						rdb8->Checked = true;
					textBox13->Text = myRows[i]->default[17]->ToString();
					textBox14->Text = myRows[i]->default[18]->ToString();
					textBox15->Text = myRows[i]->default[19]->ToString();
					if(myRows[i]->default[20]->ToString() == "Percentage")
						rdb9->Checked = true;
					else
						rdb10->Checked = true;
					textBox16->Text = myRows[i]->default[21]->ToString();
					textBox17->Text = myRows[i]->default[22]->ToString();
					textBox18->Text = myRows[i]->default[23]->ToString();
					if(myRows[i]->default[24]->ToString() == "Percentage")
						rdb11->Checked = true;
					else
						rdb12->Checked = true;
					
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
			textBox10->Text="";
			textBox11->Text="";
			textBox12->Text="";
			textBox13->Text="";
			textBox14->Text="";
			textBox15->Text="";
			textBox16->Text="";
			textBox17->Text="";
			textBox18->Text="";
			rdb1->Checked = true;
			rdb3->Checked = true;
			rdb5->Checked = true;
			rdb7->Checked = true;
			rdb9->Checked = true;
			rdb11->Checked = true;
		}
		return flag;
	}

	private: System::Void Socialandhumandevelopment_Load(System::Object^  sender, System::EventArgs^  e) {
		lblWarning01->Hide();
		lblWarning02->Hide();
		lblWarning03->Hide();
		lblWarning04->Hide();
		lblWarning05->Hide();
		lblWarning06->Hide();

		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");

		rdb1->Checked = 'True';
		rdb3->Checked = 'True';
		rdb5->Checked = 'True';
		rdb7->Checked = 'True';
		rdb9->Checked = 'True';
		rdb11->Checked = 'True';

		this->db = gcnew database();
		this->db->read_city_db();
		int l;
		String^ comboString;
		String^ query;
		int flag;
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
		lblWarning04->Hide();
		lblWarning05->Hide();
		lblWarning06->Hide();
		checkFlag = CheckExistCity(comboBox1->Text);
	}
};
}
