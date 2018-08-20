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
	/// Summary for DataHealthCareOutcomes
	/// </summary>
	public ref class DataHealthCareOutcomes : public System::Windows::Forms::Form
	{
	public:
		DataHealthCareOutcomes(void)
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
		~DataHealthCareOutcomes()
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
	public: String^ input7;
	public: String^ input8;
	public: String^ input9;
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
	public: int val19;
	public: int val20;
	public: int val21;
	public: int val22;
	public: int val23;
	public: int val24;
	public: int val25;
	public: int val26;
	public: int val27;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  Pic02;
	private: System::Windows::Forms::PictureBox^  Pic07;
	private: System::Windows::Forms::PictureBox^  Pic06;
	private: System::Windows::Forms::PictureBox^  Pic05;
	private: System::Windows::Forms::PictureBox^  Pic04;
	private: System::Windows::Forms::PictureBox^  Pic03;
	private: System::Windows::Forms::PictureBox^  Pic01;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::PictureBox^  Pic08;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  Pic09;
	private: System::Windows::Forms::TextBox^  txt9;
	private: System::Windows::Forms::TextBox^  txt8;
	private: System::Windows::Forms::TextBox^  txt7;
	private: System::Windows::Forms::TextBox^  txt6;
	private: System::Windows::Forms::TextBox^  txt5;
	private: System::Windows::Forms::TextBox^  txt4;
	private: System::Windows::Forms::Label^  lbl9;
	private: System::Windows::Forms::Label^  lbl8;
	private: System::Windows::Forms::Label^  lbl7;
	private: System::Windows::Forms::Label^  lbl6;
	private: System::Windows::Forms::Label^  lbl5;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::Button^  btnComment;
	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DataHealthCareOutcomes::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt9 = (gcnew System::Windows::Forms::TextBox());
			this->txt8 = (gcnew System::Windows::Forms::TextBox());
			this->txt7 = (gcnew System::Windows::Forms::TextBox());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->btnComment = (gcnew System::Windows::Forms::Button());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->Pic09 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic08 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Pic02 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic07 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic06 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic05 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic04 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic03 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic01 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic09))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic08))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic07))->BeginInit();
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
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(91, 26);
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
			this->comboBox2->Location = System::Drawing::Point(281, 23);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 26);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &DataHealthCareOutcomes::comboBox2_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnPrint);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->txt9);
			this->groupBox1->Controls->Add(this->txt8);
			this->groupBox1->Controls->Add(this->txt7);
			this->groupBox1->Controls->Add(this->txt6);
			this->groupBox1->Controls->Add(this->txt5);
			this->groupBox1->Controls->Add(this->txt4);
			this->groupBox1->Controls->Add(this->btnClose);
			this->groupBox1->Controls->Add(this->lbl9);
			this->groupBox1->Controls->Add(this->lbl8);
			this->groupBox1->Controls->Add(this->lbl7);
			this->groupBox1->Controls->Add(this->lbl6);
			this->groupBox1->Controls->Add(this->lbl5);
			this->groupBox1->Controls->Add(this->lbl4);
			this->groupBox1->Controls->Add(this->btnComment);
			this->groupBox1->Controls->Add(this->txt3);
			this->groupBox1->Controls->Add(this->txt2);
			this->groupBox1->Controls->Add(this->txt1);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->lbl3);
			this->groupBox1->Controls->Add(this->lbl2);
			this->groupBox1->Controls->Add(this->lbl1);
			this->groupBox1->Controls->Add(this->Pic09);
			this->groupBox1->Controls->Add(this->Pic08);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->Pic02);
			this->groupBox1->Controls->Add(this->Pic07);
			this->groupBox1->Controls->Add(this->Pic06);
			this->groupBox1->Controls->Add(this->Pic05);
			this->groupBox1->Controls->Add(this->Pic04);
			this->groupBox1->Controls->Add(this->Pic03);
			this->groupBox1->Controls->Add(this->Pic01);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Location = System::Drawing::Point(97, 158);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1176, 558);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// btnPrint
			// 
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(976, 486);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(100, 40);
			this->btnPrint->TabIndex = 92;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &DataHealthCareOutcomes::btnPrint_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(669, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 17);
			this->label15->TabIndex = 76;
			this->label15->Text = L"UB";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(633, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 17);
			this->label16->TabIndex = 75;
			this->label16->Text = L"IP";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(591, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 17);
			this->label17->TabIndex = 74;
			this->label17->Text = L"LB";
			// 
			// txt9
			// 
			this->txt9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt9->Location = System::Drawing::Point(736, 419);
			this->txt9->Multiline = true;
			this->txt9->Name = L"txt9";
			this->txt9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt9->Size = System::Drawing::Size(340, 43);
			this->txt9->TabIndex = 73;
			this->txt9->Text = L"\r\n";
			// 
			// txt8
			// 
			this->txt8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt8->Location = System::Drawing::Point(736, 371);
			this->txt8->Multiline = true;
			this->txt8->Name = L"txt8";
			this->txt8->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt8->Size = System::Drawing::Size(340, 43);
			this->txt8->TabIndex = 72;
			this->txt8->Text = L"\r\n";
			// 
			// txt7
			// 
			this->txt7->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt7->Location = System::Drawing::Point(736, 325);
			this->txt7->Multiline = true;
			this->txt7->Name = L"txt7";
			this->txt7->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt7->Size = System::Drawing::Size(340, 43);
			this->txt7->TabIndex = 71;
			this->txt7->Text = L"\r\n";
			// 
			// txt6
			// 
			this->txt6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt6->Location = System::Drawing::Point(736, 273);
			this->txt6->Multiline = true;
			this->txt6->Name = L"txt6";
			this->txt6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt6->Size = System::Drawing::Size(340, 43);
			this->txt6->TabIndex = 70;
			this->txt6->Text = L"\r\n";
			// 
			// txt5
			// 
			this->txt5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt5->Location = System::Drawing::Point(736, 227);
			this->txt5->Multiline = true;
			this->txt5->Name = L"txt5";
			this->txt5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt5->Size = System::Drawing::Size(340, 43);
			this->txt5->TabIndex = 69;
			this->txt5->Text = L"\r\n";
			// 
			// txt4
			// 
			this->txt4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt4->Location = System::Drawing::Point(736, 180);
			this->txt4->Multiline = true;
			this->txt4->Name = L"txt4";
			this->txt4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt4->Size = System::Drawing::Size(340, 43);
			this->txt4->TabIndex = 68;
			this->txt4->Text = L"\r\n";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(766, 486);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 40);
			this->btnClose->TabIndex = 12;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &DataHealthCareOutcomes::btnClose_Click);
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl9->Location = System::Drawing::Point(591, 431);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(0, 18);
			this->lbl9->TabIndex = 67;
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl8->Location = System::Drawing::Point(591, 384);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(0, 18);
			this->lbl8->TabIndex = 66;
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl7->Location = System::Drawing::Point(591, 336);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(0, 18);
			this->lbl7->TabIndex = 65;
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl6->Location = System::Drawing::Point(591, 286);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(0, 18);
			this->lbl6->TabIndex = 64;
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl5->Location = System::Drawing::Point(591, 239);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(0, 18);
			this->lbl5->TabIndex = 63;
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl4->Location = System::Drawing::Point(591, 192);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(0, 18);
			this->lbl4->TabIndex = 62;
			// 
			// btnComment
			// 
			this->btnComment->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnComment->Location = System::Drawing::Point(976, 486);
			this->btnComment->Name = L"btnComment";
			this->btnComment->Size = System::Drawing::Size(100, 40);
			this->btnComment->TabIndex = 61;
			this->btnComment->Text = L"Comment";
			this->btnComment->UseVisualStyleBackColor = true;
			this->btnComment->Click += gcnew System::EventHandler(this, &DataHealthCareOutcomes::btnComment_Click);
			// 
			// txt3
			// 
			this->txt3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt3->Location = System::Drawing::Point(736, 134);
			this->txt3->Multiline = true;
			this->txt3->Name = L"txt3";
			this->txt3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt3->Size = System::Drawing::Size(340, 43);
			this->txt3->TabIndex = 60;
			this->txt3->Text = L"\r\n";
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt2->Location = System::Drawing::Point(736, 86);
			this->txt2->Multiline = true;
			this->txt2->Name = L"txt2";
			this->txt2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt2->Size = System::Drawing::Size(340, 43);
			this->txt2->TabIndex = 59;
			this->txt2->Text = L"\r\n";
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(736, 40);
			this->txt1->Multiline = true;
			this->txt1->Name = L"txt1";
			this->txt1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt1->Size = System::Drawing::Size(340, 43);
			this->txt1->TabIndex = 58;
			this->txt1->Text = L"\r\n";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(732, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(99, 21);
			this->label13->TabIndex = 57;
			this->label13->Text = L"Comments";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl3->Location = System::Drawing::Point(591, 145);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(0, 18);
			this->lbl3->TabIndex = 56;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(591, 98);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(0, 18);
			this->lbl2->TabIndex = 55;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(591, 51);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(0, 18);
			this->lbl1->TabIndex = 54;
			// 
			// Pic09
			// 
			this->Pic09->Location = System::Drawing::Point(377, 429);
			this->Pic09->Name = L"Pic09";
			this->Pic09->Size = System::Drawing::Size(208, 23);
			this->Pic09->TabIndex = 48;
			this->Pic09->TabStop = false;
			// 
			// Pic08
			// 
			this->Pic08->Location = System::Drawing::Point(377, 382);
			this->Pic08->Name = L"Pic08";
			this->Pic08->Size = System::Drawing::Size(208, 23);
			this->Pic08->TabIndex = 47;
			this->Pic08->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 429);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 18);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Mental illness";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(90, 382);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 18);
			this->label12->TabIndex = 45;
			this->label12->Text = L"Homicide rate";
			// 
			// Pic02
			// 
			this->Pic02->Location = System::Drawing::Point(377, 96);
			this->Pic02->Name = L"Pic02";
			this->Pic02->Size = System::Drawing::Size(208, 23);
			this->Pic02->TabIndex = 44;
			this->Pic02->TabStop = false;
			// 
			// Pic07
			// 
			this->Pic07->Location = System::Drawing::Point(377, 335);
			this->Pic07->Name = L"Pic07";
			this->Pic07->Size = System::Drawing::Size(208, 23);
			this->Pic07->TabIndex = 43;
			this->Pic07->TabStop = false;
			// 
			// Pic06
			// 
			this->Pic06->Location = System::Drawing::Point(377, 284);
			this->Pic06->Name = L"Pic06";
			this->Pic06->Size = System::Drawing::Size(208, 23);
			this->Pic06->TabIndex = 42;
			this->Pic06->TabStop = false;
			// 
			// Pic05
			// 
			this->Pic05->Location = System::Drawing::Point(377, 237);
			this->Pic05->Name = L"Pic05";
			this->Pic05->Size = System::Drawing::Size(208, 23);
			this->Pic05->TabIndex = 41;
			this->Pic05->TabStop = false;
			// 
			// Pic04
			// 
			this->Pic04->Location = System::Drawing::Point(377, 190);
			this->Pic04->Name = L"Pic04";
			this->Pic04->Size = System::Drawing::Size(208, 23);
			this->Pic04->TabIndex = 40;
			this->Pic04->TabStop = false;
			// 
			// Pic03
			// 
			this->Pic03->Location = System::Drawing::Point(377, 143);
			this->Pic03->Name = L"Pic03";
			this->Pic03->Size = System::Drawing::Size(208, 23);
			this->Pic03->TabIndex = 39;
			this->Pic03->TabStop = false;
			// 
			// Pic01
			// 
			this->Pic01->Location = System::Drawing::Point(377, 49);
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
			this->label11->Location = System::Drawing::Point(374, 16);
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
			this->label10->Location = System::Drawing::Point(90, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 17);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(90, 335);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 18);
			this->label7->TabIndex = 34;
			this->label7->Text = L"HIV and AIDS";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(90, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 18);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Respiratory disease";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(90, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 18);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Cardiovascular disease";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(90, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 18);
			this->label4->TabIndex = 29;
			this->label4->Text = L"All cancer";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(90, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 18);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Life expectancy at birth";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(90, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 18);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Maternal mortality ratio";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(90, 49);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(164, 18);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Under five mortality rate";
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
			this->label14->TabIndex = 12;
			this->label14->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1252, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 88;
			this->pictureBox1->TabStop = false;
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
			this->label36->Size = System::Drawing::Size(161, 18);
			this->label36->TabIndex = 89;
			this->label36->Text = L"Health care outcomes";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &DataHealthCareOutcomes::printDocument1_PrintPage);
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
			this->pictureBox2->TabIndex = 90;
			this->pictureBox2->TabStop = false;
			// 
			// DataHealthCareOutcomes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"DataHealthCareOutcomes";
			this->Text = L"DataHealthCareOutcomes";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DataHealthCareOutcomes::DataHealthCareOutcomes_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic09))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic08))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic07))->EndInit();
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
	String^ a9;		String^ a10;	String^ a11;
	int CurrentRow;

	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void DataHealthCareOutcomes_Load(System::Object^  sender, System::EventArgs^  e) {
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
			txt7->ReadOnly = true;
			txt8->ReadOnly = true;
			txt9->ReadOnly = true;
		}
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		this->db = gcnew database();
		this->db->read_health_db();
		int l;
		String^ comboString;
		String^ query;
		query = "City <> '" + "nai" + "'";
		array<DataRow^>^ myRows = db->Health->Select(query);
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

	void BaseLine(int val, int lower, int upper, int index)
	{
		if(index == 1)
		{
			if(val < lower)
			{
				Pic01->Image = Image::FromFile("green05.png");
				input1 = "Green";
			}
			else if(val > upper)
			{
				Pic01->Image = Image::FromFile("red05.png");
				input1 = "Red";
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
				Pic03->Image = Image::FromFile("red05.png");
				input3 = "Red";
			}
			else if(val > upper)
			{
				Pic03->Image = Image::FromFile("green05.png");
				input3 = "Green";
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
				Pic04->Image = Image::FromFile("green05.png");
				input4 = "Green";
			}
			else if(val > upper)
			{
				Pic04->Image = Image::FromFile("red05.png");
				input4 = "Red";
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
				Pic06->Image = Image::FromFile("green05.png");
				input6 = "Green";
			}
			else if(val > upper)
			{
				Pic06->Image = Image::FromFile("red05.png");
				input6 = "Red";
			}
			else
			{
				Pic06->Image = Image::FromFile("yellow05.png");
				input6 = "Yellow";
			}
		}
		else if(index == 7)
		{
			if(val < lower)
			{
				Pic07->Image = Image::FromFile("green05.png");
				input7 = "Green";
			}
			else if(val > upper)
			{
				Pic07->Image = Image::FromFile("red05.png");
				input7 = "Red";
			}
			else
			{
				Pic07->Image = Image::FromFile("yellow05.png");
				input7 = "Yellow";
			}
		}
		else if(index == 8)
		{
			if(val < lower)
			{
				Pic08->Image = Image::FromFile("green05.png");
				input8 = "Green";
			}
			else if(val > upper)
			{
				Pic08->Image = Image::FromFile("red05.png");
				input8 = "Red";
			}
			else
			{
				Pic08->Image = Image::FromFile("yellow05.png");
				input8 = "Yellow";
			}
		}
		else if(index == 9)
		{
			if(val < lower)
			{
				Pic09->Image = Image::FromFile("green05.png");
				input9 = "Green";
			}
			else if(val > upper)
			{
				Pic09->Image = Image::FromFile("red05.png");
				input9 = "Red";
			}
			else
			{
				Pic09->Image = Image::FromFile("yellow05.png");
				input9 = "Yellow";
			}
		}
	}

	int CheckExistCity(String^ userName, String^ cityName)
	{
		this->db1 = gcnew database();
		this->db1->read_healthComment_db();
		String^ query;
		int flag=0;
		query = "UserName = '" + userName + "'";
		array<DataRow^>^ myRows = db1->HealthComments->Select(query);
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
					txt7->Text = myRows[i]->default[8]->ToString();
					txt8->Text = myRows[i]->default[9]->ToString();
					txt9->Text = myRows[i]->default[10]->ToString();

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
			txt7->Text="";
			txt8->Text="";
			txt9->Text="";
		}
		return flag;

	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->db->read_health_db();
		String^ comboString;
		comboString = comboBox2->Text;
		String^ query;
		query = "City = '" + comboString + "'";
		array<DataRow^>^ myRows = db->Health->Select(query);
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
			BaseLine(int::Parse(myRows[0]->default[25]->ToString()), int::Parse(myRows[0]->default[26]->ToString()), int::Parse(myRows[0]->default[27]->ToString()), 7);
			display = "(" + myRows[0]->default[26]->ToString() + ")    " + myRows[0]->default[25]->ToString() + "    (" + myRows[0]->default[27]->ToString() + ")";
			lbl7->Text = display;
			BaseLine(int::Parse(myRows[0]->default[29]->ToString()), int::Parse(myRows[0]->default[30]->ToString()), int::Parse(myRows[0]->default[31]->ToString()), 8);
			display = "(" + myRows[0]->default[30]->ToString() + ")    " + myRows[0]->default[29]->ToString() + "    (" + myRows[0]->default[31]->ToString() + ")";
			lbl8->Text = display;
			BaseLine(int::Parse(myRows[0]->default[33]->ToString()), int::Parse(myRows[0]->default[34]->ToString()), int::Parse(myRows[0]->default[35]->ToString()), 9);
			display = "(" + myRows[0]->default[34]->ToString() + ")    " + myRows[0]->default[33]->ToString() + "    (" + myRows[0]->default[35]->ToString() + ")";
			lbl9->Text = display;

			val1 = int::Parse(myRows[0]->default[1]->ToString());	val2 = int::Parse(myRows[0]->default[2]->ToString());	val3 = int::Parse(myRows[0]->default[3]->ToString());
			val4 = int::Parse(myRows[0]->default[5]->ToString());	val5 = int::Parse(myRows[0]->default[6]->ToString());	val6 = int::Parse(myRows[0]->default[7]->ToString());
			val7 = int::Parse(myRows[0]->default[9]->ToString());	val8 = int::Parse(myRows[0]->default[10]->ToString());	val9 = int::Parse(myRows[0]->default[11]->ToString());
			val10 = int::Parse(myRows[0]->default[13]->ToString());	val11 = int::Parse(myRows[0]->default[14]->ToString());	val12 = int::Parse(myRows[0]->default[15]->ToString());
			val13 = int::Parse(myRows[0]->default[17]->ToString());	val14 = int::Parse(myRows[0]->default[18]->ToString());	val15 = int::Parse(myRows[0]->default[19]->ToString());
			val16 = int::Parse(myRows[0]->default[21]->ToString());	val17 = int::Parse(myRows[0]->default[22]->ToString());	val18 = int::Parse(myRows[0]->default[23]->ToString());
			val19 = int::Parse(myRows[0]->default[25]->ToString());	val20 = int::Parse(myRows[0]->default[26]->ToString());	val21 = int::Parse(myRows[0]->default[27]->ToString());
			val22 = int::Parse(myRows[0]->default[29]->ToString());	val23 = int::Parse(myRows[0]->default[30]->ToString());	val24 = int::Parse(myRows[0]->default[31]->ToString());
			val25 = int::Parse(myRows[0]->default[33]->ToString());	val26 = int::Parse(myRows[0]->default[34]->ToString());	val27 = int::Parse(myRows[0]->default[35]->ToString());

			checkFlag = CheckExistCity(name, comboString);
		}
	}

	private: System::Void btnComment_Click(System::Object^  sender, System::EventArgs^  e) {
		if(txt1->Text != "" || txt2->Text != "" || txt3->Text != "" || txt4->Text != "" || txt5->Text != "" || txt6->Text != "" || txt7->Text != "" || txt8->Text != "" || txt9->Text != "" )
		{
			if(checkFlag == 0)
			{
				String^ path = "..\\App_Data\\HealthComments.xml";
				XmlDocument^ doc = gcnew XmlDocument();

				//If there is no current file, then create a new one
				XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
				XmlComment^ comment = doc->CreateComment("This is an XML Generated File");
				if (!System::IO::File::Exists(path))
				{
					//Create necessary nodes
					declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
					comment = doc->CreateComment("This is an XML Generated File");
					doc->InnerXml = "<?xml version='1.0' standalone='yes'?><EHM><HealthComments></HealthComments></EHM>";
				}
				else //If there is already a file
				{
					//Load the XML File
					doc->Load(path);
				}

				//Get the root element
				XmlElement^ root = doc->CreateElement("EHM");
				XmlElement^ Subroot = doc->CreateElement("HealthComments");

				XmlElement ^ UserName = doc->CreateElement("UserName");
				XmlElement ^ CityName = doc->CreateElement("CityName");
				XmlElement ^ UnderFiveMortalityComment = doc->CreateElement("UnderFiveMortalityComment");
				XmlElement ^ MaternalMortalityComment = doc->CreateElement("MaternalMortalityComment");
				XmlElement ^ LifeExpectancyComment = doc->CreateElement("LifeExpectancyComment");
				XmlElement ^ CancerComment = doc->CreateElement("CancerComment");
				XmlElement ^ CardiovascularComment = doc->CreateElement("CardiovascularComment");
				XmlElement ^ RespiratoryComment = doc->CreateElement("RespiratoryComment");
				XmlElement ^ HIVComment = doc->CreateElement("HIVComment");
				XmlElement ^ HomicideComment = doc->CreateElement("HomicideComment");
				XmlElement ^ MentalComment = doc->CreateElement("MentalComment");

				a1 = name;
				a2 = comboBox2->Text;
				a3 = txt1->Text;
				a4 = txt2->Text;
				a5 = txt3->Text;
				a6 = txt4->Text;
				a7 = txt5->Text;
				a8 = txt6->Text;
				a9 = txt7->Text;
				a10 = txt8->Text;
				a11 = txt9->Text;
		
				UserName->InnerText = a1;
				CityName->InnerText = a2;
				UnderFiveMortalityComment->InnerText = a3;
				MaternalMortalityComment->InnerText = a4;
				LifeExpectancyComment->InnerText = a5;
				CancerComment->InnerText = a6;
				CardiovascularComment->InnerText = a7;
				RespiratoryComment->InnerText = a8;
				HIVComment->InnerText = a9;
				HomicideComment->InnerText = a10;
				MentalComment->InnerText = a11;

				XmlNode^ docNode = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");				 
				doc->DocumentElement->AppendChild( Subroot );

				Subroot->AppendChild( UserName );
				Subroot->AppendChild( CityName );
				Subroot->AppendChild( UnderFiveMortalityComment );
				Subroot->AppendChild( MaternalMortalityComment );
				Subroot->AppendChild( LifeExpectancyComment );
				Subroot->AppendChild( CancerComment );
				Subroot->AppendChild( CardiovascularComment );
				Subroot->AppendChild( RespiratoryComment );
				Subroot->AppendChild( HIVComment );
				Subroot->AppendChild( HomicideComment );
				Subroot->AppendChild( MentalComment );

				doc->Save(path);

				MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );

				txt1->Text="";
				txt2->Text="";
				txt3->Text="";
				txt4->Text="";
				txt5->Text="";
				txt6->Text="";
				txt7->Text="";
				txt8->Text="";
				txt9->Text="";
			}
			else
			{
				this->db2 = gcnew database();
				this->db2->read_healthComment_db();
				String^ query;
				query = "UserName = '" + name + "'";
				array<DataRow^>^ myRows = this->db2->HealthComments->Select(query);
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
							myRows[i]->default[8] = txt7->Text;
							myRows[i]->default[9] = txt8->Text;
							myRows[i]->default[10] = txt9->Text;
							myRows[i]->EndEdit();
							MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );
							db2->write_healthComment_db(); //write xml file
							break;
						}
					}
				}
			}
			DataHealthCareOutcomes::Close();
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
		e->Graphics->DrawString("Policy Domain\t:\tHealth Care Outcomes", ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString("User Name\t:\t" + name, ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString("City Name\t:\t" + comboBox2->Text, ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;

		ft = gcnew System::Drawing::Font("Times New Roman", 12, FontStyle::Regular);
		e->Graphics->DrawString(String::Concat("Indicator Name\t\tInput\tUpper\tLower\tColor\tComment"), ft, Brushes::Black, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("UnderFiveMortalityRate\t", val1, "\t", val3, "\t", val2, "\t", this->input1, "\t", this->txt1->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("MaternalMortalityRatio\t", val4, "\t", val6, "\t", val5, "\t", this->input2, "\t", this->txt2->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("LifeExpectancyATBirth\t", val7, "\t", val9, "\t", val8, "\t", this->input3, "\t", this->txt3->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("AllCancer\t\t", val11, "\t", val10, "\t", val12, "\t", this->input4, "\t", this->txt4->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("CardiovascularDisease\t", val14, "\t", val13, "\t", val15, "\t", this->input5, "\t", this->txt5->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("RespiratoryDisease\t", val17, "\t", val16, "\t", val18, "\t", this->input6, "\t", this->txt6->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("HIV and AIDS\t\t", val20, "\t", val19, "\t", val21, "\t", this->input7, "\t", this->txt7->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Homicide Rate\t\t", val23, "\t", val22, "\t", val24, "\t", this->input8, "\t", this->txt8->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Mental Illness\t\t", val26, "\t", val25, "\t", val27, "\t", this->input9, "\t", this->txt9->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
	}
};
}
