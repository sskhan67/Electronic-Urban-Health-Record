#pragma once

#include"database.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// Summary for DataSocialAndHumanDevelopment
	/// </summary>
	public ref class DataSocialAndHumanDevelopment : public System::Windows::Forms::Form
	{
	public:
		DataSocialAndHumanDevelopment(void)
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
		~DataSocialAndHumanDevelopment()
		{
			if (components)
			{
				delete components;
			}
		}
	public: String^ name;
	public: database^ db;
	public: database^ db1;
	public: database^ db2;
	public: int checkFlag;
	public: int print;
	public: String^ input1;
	public: String^ input2;
	public: String^ input3;
	public: String^ input4;
	public: String^ input5;
	public: String^ input6;
	public: int val1;
	public: int val2;
	public: int val3;
	public: int val4;
	public: int val5;
	public: int val6;
	public: int val7;
	public: int val8;
	public: int val9;
	public: int val10;
	public: int val11;
	public: int val12;
	public: int val13;
	public: int val14;
	public: int val15;
	public: int val16;
	public: int val17;
	public: int val18;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  Pic02;
	private: System::Windows::Forms::PictureBox^  Pic06;
	private: System::Windows::Forms::PictureBox^  Pic05;
	private: System::Windows::Forms::PictureBox^  Pic04;
	private: System::Windows::Forms::PictureBox^  Pic03;
	private: System::Windows::Forms::PictureBox^  Pic01;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::TextBox^  txt6;
	private: System::Windows::Forms::TextBox^  txt5;
	private: System::Windows::Forms::TextBox^  txt4;
	private: System::Windows::Forms::Label^  lbl6;
	private: System::Windows::Forms::Label^  lbl5;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::Button^  btnComment;
	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  btnPrint;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DataSocialAndHumanDevelopment::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->Pic02 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic06 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic05 = (gcnew System::Windows::Forms::PictureBox());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->Pic04 = (gcnew System::Windows::Forms::PictureBox());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->Pic03 = (gcnew System::Windows::Forms::PictureBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->Pic01 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnComment = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Location = System::Drawing::Point(96, 88);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(628, 61);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"City Name";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(280, 21);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 26);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &DataSocialAndHumanDevelopment::comboBox2_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnPrint);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->btnClose);
			this->groupBox1->Controls->Add(this->Pic02);
			this->groupBox1->Controls->Add(this->Pic06);
			this->groupBox1->Controls->Add(this->Pic05);
			this->groupBox1->Controls->Add(this->txt6);
			this->groupBox1->Controls->Add(this->Pic04);
			this->groupBox1->Controls->Add(this->txt5);
			this->groupBox1->Controls->Add(this->Pic03);
			this->groupBox1->Controls->Add(this->txt4);
			this->groupBox1->Controls->Add(this->Pic01);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->lbl6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->lbl5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->lbl4);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->btnComment);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->txt3);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->txt2);
			this->groupBox1->Controls->Add(this->lbl1);
			this->groupBox1->Controls->Add(this->txt1);
			this->groupBox1->Controls->Add(this->lbl2);
			this->groupBox1->Controls->Add(this->lbl3);
			this->groupBox1->Location = System::Drawing::Point(97, 158);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1181, 513);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// btnPrint
			// 
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(989, 435);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(100, 40);
			this->btnPrint->TabIndex = 97;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &DataSocialAndHumanDevelopment::btnPrint_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(668, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 17);
			this->label7->TabIndex = 94;
			this->label7->Text = L"UB";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(632, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 17);
			this->label1->TabIndex = 93;
			this->label1->Text = L"IP";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(590, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 17);
			this->label12->TabIndex = 92;
			this->label12->Text = L"LB";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(784, 435);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 40);
			this->btnClose->TabIndex = 12;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &DataSocialAndHumanDevelopment::btnClose_Click);
			// 
			// Pic02
			// 
			this->Pic02->Location = System::Drawing::Point(376, 143);
			this->Pic02->Name = L"Pic02";
			this->Pic02->Size = System::Drawing::Size(208, 23);
			this->Pic02->TabIndex = 44;
			this->Pic02->TabStop = false;
			// 
			// Pic06
			// 
			this->Pic06->Location = System::Drawing::Point(376, 367);
			this->Pic06->Name = L"Pic06";
			this->Pic06->Size = System::Drawing::Size(208, 23);
			this->Pic06->TabIndex = 42;
			this->Pic06->TabStop = false;
			// 
			// Pic05
			// 
			this->Pic05->Location = System::Drawing::Point(376, 310);
			this->Pic05->Name = L"Pic05";
			this->Pic05->Size = System::Drawing::Size(208, 23);
			this->Pic05->TabIndex = 41;
			this->Pic05->TabStop = false;
			// 
			// txt6
			// 
			this->txt6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt6->Location = System::Drawing::Point(749, 357);
			this->txt6->Multiline = true;
			this->txt6->Name = L"txt6";
			this->txt6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt6->Size = System::Drawing::Size(340, 43);
			this->txt6->TabIndex = 91;
			this->txt6->Text = L"\r\n";
			// 
			// Pic04
			// 
			this->Pic04->Location = System::Drawing::Point(376, 253);
			this->Pic04->Name = L"Pic04";
			this->Pic04->Size = System::Drawing::Size(208, 23);
			this->Pic04->TabIndex = 40;
			this->Pic04->TabStop = false;
			// 
			// txt5
			// 
			this->txt5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt5->Location = System::Drawing::Point(749, 301);
			this->txt5->Multiline = true;
			this->txt5->Name = L"txt5";
			this->txt5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt5->Size = System::Drawing::Size(340, 43);
			this->txt5->TabIndex = 90;
			this->txt5->Text = L"\r\n";
			// 
			// Pic03
			// 
			this->Pic03->Location = System::Drawing::Point(376, 198);
			this->Pic03->Name = L"Pic03";
			this->Pic03->Size = System::Drawing::Size(208, 23);
			this->Pic03->TabIndex = 39;
			this->Pic03->TabStop = false;
			// 
			// txt4
			// 
			this->txt4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt4->Location = System::Drawing::Point(749, 245);
			this->txt4->Multiline = true;
			this->txt4->Name = L"txt4";
			this->txt4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt4->Size = System::Drawing::Size(340, 43);
			this->txt4->TabIndex = 89;
			this->txt4->Text = L"\r\n";
			// 
			// Pic01
			// 
			this->Pic01->Location = System::Drawing::Point(376, 88);
			this->Pic01->Name = L"Pic01";
			this->Pic01->Size = System::Drawing::Size(208, 23);
			this->Pic01->TabIndex = 37;
			this->Pic01->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(373, 43);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(134, 17);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Base-Line Indicator";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(89, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 17);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(86, 367);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 18);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Physical activity";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(86, 310);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 18);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Teenage pregnancy";
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl6->Location = System::Drawing::Point(590, 369);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(0, 18);
			this->lbl6->TabIndex = 85;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(86, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 18);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Breastfeeding";
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl5->Location = System::Drawing::Point(590, 311);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(0, 18);
			this->lbl5->TabIndex = 84;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(86, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 18);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Overweight and obesity";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl4->Location = System::Drawing::Point(590, 255);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(0, 18);
			this->lbl4->TabIndex = 83;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(86, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 18);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Underweight children";
			// 
			// btnComment
			// 
			this->btnComment->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnComment->Location = System::Drawing::Point(989, 435);
			this->btnComment->Name = L"btnComment";
			this->btnComment->Size = System::Drawing::Size(100, 40);
			this->btnComment->TabIndex = 82;
			this->btnComment->Text = L"Comment";
			this->btnComment->UseVisualStyleBackColor = true;
			this->btnComment->Click += gcnew System::EventHandler(this, &DataSocialAndHumanDevelopment::btnComment_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(86, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 18);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Literacy";
			// 
			// txt3
			// 
			this->txt3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt3->Location = System::Drawing::Point(749, 188);
			this->txt3->Multiline = true;
			this->txt3->Name = L"txt3";
			this->txt3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt3->Size = System::Drawing::Size(340, 43);
			this->txt3->TabIndex = 81;
			this->txt3->Text = L"\r\n";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(745, 39);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(99, 21);
			this->label13->TabIndex = 78;
			this->label13->Text = L"Comments";
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt2->Location = System::Drawing::Point(749, 134);
			this->txt2->Multiline = true;
			this->txt2->Name = L"txt2";
			this->txt2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt2->Size = System::Drawing::Size(340, 43);
			this->txt2->TabIndex = 80;
			this->txt2->Text = L"\r\n";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(590, 89);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(0, 18);
			this->lbl1->TabIndex = 75;
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(749, 78);
			this->txt1->Multiline = true;
			this->txt1->Name = L"txt1";
			this->txt1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt1->Size = System::Drawing::Size(340, 43);
			this->txt1->TabIndex = 79;
			this->txt1->Text = L"\r\n";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(590, 145);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(0, 18);
			this->lbl2->TabIndex = 76;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl3->Location = System::Drawing::Point(590, 199);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(0, 18);
			this->lbl3->TabIndex = 77;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1252, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 89;
			this->pictureBox1->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label14->Location = System::Drawing::Point(449, 23);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(497, 39);
			this->label14->TabIndex = 90;
			this->label14->Text = L"Electronic Urban Health Record";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(96, 70);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(224, 18);
			this->label36->TabIndex = 91;
			this->label36->Text = L"Social and human development";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &DataSocialAndHumanDevelopment::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1252, 70);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 92;
			this->pictureBox2->TabStop = false;
			// 
			// DataSocialAndHumanDevelopment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"DataSocialAndHumanDevelopment";
			this->Text = L"DataSocialAndHumanDevelopment";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DataSocialAndHumanDevelopment::DataSocialAndHumanDevelopment_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	XmlDataDocument mydoc;
	String^ a1;		String^ a2;		String^ a3;		String^ a4;
	String^ a5;		String^ a6;		String^ a7;		String^ a8;
	int CurrentRow;

	private: System::Void DataSocialAndHumanDevelopment_Load(System::Object^  sender, System::EventArgs^  e) {
		if(print == 0)
		{
			btnComment->Show();
			btnPrint->Hide();
		}
		else
		{
			btnComment->Hide();
			btnPrint->Show();
			txt1->ReadOnly = true;
			txt2->ReadOnly = true;
			txt3->ReadOnly = true;
			txt4->ReadOnly = true;
			txt5->ReadOnly = true;
			txt6->ReadOnly = true;
		}
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		this->db = gcnew database();
		this->db->read_social_db();
		int l;
		String^ comboString;
		String^ query;
		query = "City <> '" + "nai" + "'";
		array<DataRow^>^ myRows = db->Social->Select(query);
		l = myRows->Length;
		if(myRows->Length > 0)
		{
			for(int i=0; i< l; i++)
			{
				comboString = myRows[i]->default[0]->ToString();
				this->comboBox2->Items->Add(comboString);
			}
		}
	}

	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	void BaseLine(int val, int lower, int upper, int index)
	{
		if(index == 1)
		{
			if(val < lower)
			{
				Pic01->Image = Image::FromFile("red05.png");
				input1 = "Red";
			}
			else if(val > upper)
			{
				Pic01->Image = Image::FromFile("green05.png");
				input1 = "Green";
			}
			else
			{
				Pic01->Image = Image::FromFile("yellow05.png");
				input1 = "Yellow";
			}
		}
		else if(index == 2)
		{
			if(val < lower)
			{
				Pic02->Image = Image::FromFile("green05.png");
				input2 = "Green";
			}
			else if(val > upper)
			{
				Pic02->Image = Image::FromFile("red05.png");
				input2 = "Red";
			}
			else
			{
				Pic02->Image = Image::FromFile("yellow05.png");
				input2 = "Yellow";
			}
		}
		else if(index == 3)
		{
			if(val < lower)
			{
				Pic03->Image = Image::FromFile("green05.png");
				input3 = "Green";
			}
			else if(val > upper)
			{
				Pic03->Image = Image::FromFile("red05.png");
				input3 = "Red";
			}
			else
			{
				Pic03->Image = Image::FromFile("yellow05.png");
				input3 = "Yellow";
			}
		}
		else if(index == 4)
		{
			if(val < lower)
			{
				Pic04->Image = Image::FromFile("red05.png");
				input4 = "Red";
			}
			else if(val > upper)
			{
				Pic04->Image = Image::FromFile("green05.png");
				input4 = "Green";
			}
			else
			{
				Pic04->Image = Image::FromFile("yellow05.png");
				input4 = "Yellow";
			}
		}
		else if(index == 5)
		{
			if(val < lower)
			{
				Pic05->Image = Image::FromFile("green05.png");
				input5 = "Green";
			}
			else if(val > upper)
			{
				Pic05->Image = Image::FromFile("red05.png");
				input5 = "Red";
			}
			else
			{
				Pic05->Image = Image::FromFile("yellow05.png");
				input5 = "Yellow";
			}
		}
		else if(index == 6)
		{
			if(val < lower)
			{
				Pic06->Image = Image::FromFile("red05.png");
				input6 = "Red";
			}
			else if(val > upper)
			{
				Pic06->Image = Image::FromFile("green05.png");
				input6 = "Green";
			}
			else
			{
				Pic06->Image = Image::FromFile("yellow05.png");
				input6 = "Yellow";
			}
		}
	}

	int CheckExistCity(String^ userName, String^ cityName)
	{
		this->db1 = gcnew database();
		this->db1->read_socialComment_db();
		String^ query;
		int flag=0;
		query = "UserName = '" + userName + "'";
		array<DataRow^>^ myRows = db1->SocialComments->Select(query);
		int l = myRows->Length;
		if(myRows->Length > 0)
		{	
			for(int i=0; i<l; i++)
			{
				//String^ c =  myRows[i]->default[1]->ToString();
				if(cityName == myRows[i]->default[1]->ToString()  && userName == myRows[i]->default[0]->ToString())
				{
					txt1->Text = myRows[i]->default[2]->ToString();
					txt2->Text = myRows[i]->default[3]->ToString();
					txt3->Text = myRows[i]->default[4]->ToString();
					txt4->Text = myRows[i]->default[5]->ToString();
					txt5->Text = myRows[i]->default[6]->ToString();
					txt6->Text = myRows[i]->default[7]->ToString();

					flag = 1;
					break;
				}
			}
		}
		if(flag == 0)
		{
			txt1->Text="";
			txt2->Text="";
			txt3->Text="";
			txt4->Text="";
			txt5->Text="";
			txt6->Text="";
		}
		return flag;

	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->db->read_social_db();
		String^ comboString;
		comboString = comboBox2->Text;
		String^ query;
		query = "City = '" + comboString + "'";
		array<DataRow^>^ myRows = db->Social->Select(query);
		int sign;
		String^ display;
		if(myRows->Length > 0)
		{
			BaseLine(int::Parse(myRows[0]->default[1]->ToString()), int::Parse(myRows[0]->default[2]->ToString()), int::Parse(myRows[0]->default[3]->ToString()), 1);
			display = "(" + myRows[0]->default[2]->ToString() + ")    " + myRows[0]->default[1]->ToString() + "    (" + myRows[0]->default[3]->ToString() + ")";
			lbl1->Text = display;
			BaseLine(int::Parse(myRows[0]->default[5]->ToString()), int::Parse(myRows[0]->default[6]->ToString()), int::Parse(myRows[0]->default[7]->ToString()), 2);
			display = "(" + myRows[0]->default[6]->ToString() + ")    " + myRows[0]->default[5]->ToString() + "    (" + myRows[0]->default[7]->ToString() + ")";
			lbl2->Text = display;
			BaseLine(int::Parse(myRows[0]->default[9]->ToString()), int::Parse(myRows[0]->default[10]->ToString()), int::Parse(myRows[0]->default[11]->ToString()), 3);
			display = "(" + myRows[0]->default[10]->ToString() + ")    " + myRows[0]->default[9]->ToString() + "    (" + myRows[0]->default[11]->ToString() + ")";
			lbl3->Text = display;
			BaseLine(int::Parse(myRows[0]->default[13]->ToString()), int::Parse(myRows[0]->default[14]->ToString()), int::Parse(myRows[0]->default[15]->ToString()), 4);
			display = "(" + myRows[0]->default[14]->ToString() + ")    " + myRows[0]->default[13]->ToString() + "    (" + myRows[0]->default[15]->ToString() + ")";
			lbl4->Text = display;
			BaseLine(int::Parse(myRows[0]->default[17]->ToString()), int::Parse(myRows[0]->default[18]->ToString()), int::Parse(myRows[0]->default[19]->ToString()), 5);
			display = "(" + myRows[0]->default[18]->ToString() + ")    " + myRows[0]->default[17]->ToString() + "    (" + myRows[0]->default[19]->ToString() + ")";
			lbl5->Text = display;
			BaseLine(int::Parse(myRows[0]->default[21]->ToString()), int::Parse(myRows[0]->default[22]->ToString()), int::Parse(myRows[0]->default[23]->ToString()), 6);
			display = "(" + myRows[0]->default[22]->ToString() + ")    " + myRows[0]->default[21]->ToString() + "    (" + myRows[0]->default[23]->ToString() + ")";
			lbl6->Text = display;

			val1 = int::Parse(myRows[0]->default[1]->ToString());	val2 = int::Parse(myRows[0]->default[2]->ToString());	val3 = int::Parse(myRows[0]->default[3]->ToString());
			val4 = int::Parse(myRows[0]->default[5]->ToString());	val5 = int::Parse(myRows[0]->default[6]->ToString());	val6 = int::Parse(myRows[0]->default[7]->ToString());
			val7 = int::Parse(myRows[0]->default[9]->ToString());	val8 = int::Parse(myRows[0]->default[10]->ToString());	val9 = int::Parse(myRows[0]->default[11]->ToString());
			val10 = int::Parse(myRows[0]->default[13]->ToString());	val11 = int::Parse(myRows[0]->default[14]->ToString());	val12 = int::Parse(myRows[0]->default[15]->ToString());
			val13 = int::Parse(myRows[0]->default[17]->ToString());	val14 = int::Parse(myRows[0]->default[18]->ToString());	val15 = int::Parse(myRows[0]->default[19]->ToString());
			val16 = int::Parse(myRows[0]->default[21]->ToString());	val17 = int::Parse(myRows[0]->default[22]->ToString());	val18 = int::Parse(myRows[0]->default[23]->ToString());

			checkFlag = CheckExistCity(name, comboString);
		}
	}

	private: System::Void btnComment_Click(System::Object^  sender, System::EventArgs^  e) {
		if(txt1->Text != "" || txt2->Text != "" || txt3->Text != "" || txt4->Text != "" || txt5->Text != "" || txt6->Text != "" )
		{
			if(checkFlag == 0)
			{
				String^ path = "..\\App_Data\\SocialComments.xml";
				XmlDocument^ doc = gcnew XmlDocument();

				//If there is no current file, then create a new one
				XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
				XmlComment^ comment = doc->CreateComment("This is an XML Generated File");
				if (!System::IO::File::Exists(path))
				{
					//Create necessary nodes
					declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
					comment = doc->CreateComment("This is an XML Generated File");
					doc->InnerXml = "<?xml version='1.0' standalone='yes'?><EHM><SocialComments></SocialComments></EHM>";
				}
				else //If there is already a file
				{
					//Load the XML File
					doc->Load(path);
				}

				//Get the root element
				XmlElement^ root = doc->CreateElement("EHM");
				XmlElement^ Subroot = doc->CreateElement("SocialComments");

				XmlElement ^ UserName = doc->CreateElement("UserName");
				XmlElement ^ CityName = doc->CreateElement("CityName");
				XmlElement ^ LiteracyComment = doc->CreateElement("LiteracyComment");
				XmlElement ^ UnderweightChildrenComment = doc->CreateElement("UnderweightChildrenComment");
				XmlElement ^ OverweightObesityComment = doc->CreateElement("OverweightObesityComment");
				XmlElement ^ BreastfeedingComment = doc->CreateElement("BreastfeedingComment");
				XmlElement ^ TeenagePregnancyComment = doc->CreateElement("TeenagePregnancyComment");
				XmlElement ^ PhysicalActivityComment = doc->CreateElement("PhysicalActivityComment");

				a1 = name;
				a2 = comboBox2->Text;
				a3 = txt1->Text;
				a4 = txt2->Text;
				a5 = txt3->Text;
				a6 = txt4->Text;
				a7 = txt5->Text;
				a8 = txt6->Text;
		
				UserName->InnerText = a1;
				CityName->InnerText = a2;
				LiteracyComment->InnerText = a3;
				UnderweightChildrenComment->InnerText = a4;
				OverweightObesityComment->InnerText = a5;
				BreastfeedingComment->InnerText = a6;
				TeenagePregnancyComment->InnerText = a7;
				PhysicalActivityComment->InnerText = a8;

				XmlNode^ docNode = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");				 
				doc->DocumentElement->AppendChild( Subroot );

				Subroot->AppendChild( UserName );
				Subroot->AppendChild( CityName );
				Subroot->AppendChild( LiteracyComment );
				Subroot->AppendChild( UnderweightChildrenComment );
				Subroot->AppendChild( OverweightObesityComment );
				Subroot->AppendChild( BreastfeedingComment );
				Subroot->AppendChild( TeenagePregnancyComment );
				Subroot->AppendChild( PhysicalActivityComment );

				doc->Save(path);

				MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );

				txt1->Text="";
				txt2->Text="";
				txt3->Text="";
				txt4->Text="";
				txt5->Text="";
				txt6->Text="";
			}
			else
			{
				this->db2 = gcnew database();
				this->db2->read_socialComment_db();
				String^ query;
				query = "UserName = '" + name + "'";
				array<DataRow^>^ myRows = this->db2->SocialComments->Select(query);
				int l = myRows->Length;
				if(myRows->Length > 0)
				{
					for(int i=0; i<l; i++)
					{
						//String^ c =  myRows[i]->default[1]->ToString();
						if(comboBox2->Text == myRows[i]->default[1]->ToString()  && name == myRows[i]->default[0]->ToString())
						{
							myRows[i]->BeginEdit();
							myRows[i]->default[2] = txt1->Text;
							myRows[i]->default[3] = txt2->Text;
							myRows[i]->default[4] = txt3->Text;
							myRows[i]->default[5] = txt4->Text;
							myRows[i]->default[6] = txt5->Text;
							myRows[i]->default[7] = txt6->Text;
							myRows[i]->EndEdit();
							MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );
							db2->write_socialComment_db(); //write xml file
							break;
						}
					}
				}
			}
			DataSocialAndHumanDevelopment::Close();
		}
	}
	private: System::Void btnPrint_Click(System::Object^  sender, System::EventArgs^  e) {
		this->printPreviewDialog1->ShowDialog();
	}
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		
		int xpos = 50;
		int ypos = 50;
		int lineHeight = 50;
		System::Drawing::Font ^ft = gcnew System::Drawing::Font("Garamond", 28, FontStyle::Regular);
		e->Graphics->DrawString("Electronic Urban Health Record", ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		ypos += lineHeight;
		
		ft = gcnew System::Drawing::Font("Garamond", 13, FontStyle::Bold);
		e->Graphics->DrawString("Policy Domain\t:\tSocial and human development", ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString("User Name\t:\t" + name, ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString("City Name\t:\t" + comboBox2->Text, ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;

		ft = gcnew System::Drawing::Font("Times New Roman", 12, FontStyle::Regular);
		e->Graphics->DrawString(String::Concat("Indicator Name\t\tInput\tUpper\tLower\tColor\tComment"), ft, Brushes::Black, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Literacy\t\t\t", val1, "\t", val3, "\t", val2, "\t", this->input1, "\t", this->txt1->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Underweight children\t", val4, "\t", val6, "\t", val5, "\t", this->input2, "\t", this->txt2->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Overweight and obesity\t", val7, "\t", val9, "\t", val8, "\t", this->input3, "\t", this->txt3->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Breastfeeding\t\t", val11, "\t", val10, "\t", val12, "\t", this->input4, "\t", this->txt4->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Teenage pregnancy\t", val14, "\t", val13, "\t", val15, "\t", this->input5, "\t", this->txt5->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Physical activity\t\t", val17, "\t", val16, "\t", val18, "\t", this->input6, "\t", this->txt6->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
	}
};
}
