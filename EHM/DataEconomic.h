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
	/// Summary for DataEconomic
	/// </summary>
	public ref class DataEconomic : public System::Windows::Forms::Form
	{
	public:
		DataEconomic(void)
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
		~DataEconomic()
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
	public: int val1;
	public: int val2;
	public: int val3;
	public: int val4;
	public: int val5;
	public: int val6;
	public: int val7;
	public: int val8;
	public: int val9;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  Pic02;
	private: System::Windows::Forms::PictureBox^  Pic03;
	private: System::Windows::Forms::PictureBox^  Pic01;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnComment;
	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DataEconomic::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnComment = (gcnew System::Windows::Forms::Button());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->Pic02 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic03 = (gcnew System::Windows::Forms::PictureBox());
			this->Pic01 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->BeginInit();
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
			this->groupBox2->Location = System::Drawing::Point(96, 158);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(628, 100);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(102, 42);
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
			this->comboBox2->Location = System::Drawing::Point(389, 38);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 26);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &DataEconomic::comboBox2_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnPrint);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btnClose);
			this->groupBox1->Controls->Add(this->btnComment);
			this->groupBox1->Controls->Add(this->txt3);
			this->groupBox1->Controls->Add(this->txt2);
			this->groupBox1->Controls->Add(this->txt1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->lbl3);
			this->groupBox1->Controls->Add(this->lbl2);
			this->groupBox1->Controls->Add(this->lbl1);
			this->groupBox1->Controls->Add(this->Pic02);
			this->groupBox1->Controls->Add(this->Pic03);
			this->groupBox1->Controls->Add(this->Pic01);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Location = System::Drawing::Point(97, 277);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1176, 350);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// btnPrint
			// 
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(978, 272);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(100, 40);
			this->btnPrint->TabIndex = 56;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &DataEconomic::btnPrint_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(680, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 17);
			this->label7->TabIndex = 55;
			this->label7->Text = L"UB";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(644, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 17);
			this->label6->TabIndex = 54;
			this->label6->Text = L"IP";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(602, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 17);
			this->label5->TabIndex = 53;
			this->label5->Text = L"LB";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(768, 272);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 40);
			this->btnClose->TabIndex = 12;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &DataEconomic::btnClose_Click);
			// 
			// btnComment
			// 
			this->btnComment->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnComment->Location = System::Drawing::Point(978, 272);
			this->btnComment->Name = L"btnComment";
			this->btnComment->Size = System::Drawing::Size(100, 40);
			this->btnComment->TabIndex = 52;
			this->btnComment->Text = L"Comment";
			this->btnComment->UseVisualStyleBackColor = true;
			this->btnComment->Click += gcnew System::EventHandler(this, &DataEconomic::btnComment_Click);
			// 
			// txt3
			// 
			this->txt3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt3->Location = System::Drawing::Point(738, 195);
			this->txt3->Multiline = true;
			this->txt3->Name = L"txt3";
			this->txt3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt3->Size = System::Drawing::Size(340, 43);
			this->txt3->TabIndex = 4;
			this->txt3->Text = L"\r\n";
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt2->Location = System::Drawing::Point(738, 138);
			this->txt2->Multiline = true;
			this->txt2->Name = L"txt2";
			this->txt2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt2->Size = System::Drawing::Size(340, 43);
			this->txt2->TabIndex = 3;
			this->txt2->Text = L"\r\n";
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(738, 83);
			this->txt1->Multiline = true;
			this->txt1->Name = L"txt1";
			this->txt1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt1->Size = System::Drawing::Size(340, 43);
			this->txt1->TabIndex = 2;
			this->txt1->Text = L"\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(734, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 21);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Comments";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl3->Location = System::Drawing::Point(602, 210);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(0, 18);
			this->lbl3->TabIndex = 47;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(602, 149);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(0, 18);
			this->lbl2->TabIndex = 46;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(602, 89);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(0, 18);
			this->lbl1->TabIndex = 45;
			// 
			// Pic02
			// 
			this->Pic02->Location = System::Drawing::Point(388, 147);
			this->Pic02->Name = L"Pic02";
			this->Pic02->Size = System::Drawing::Size(208, 23);
			this->Pic02->TabIndex = 44;
			this->Pic02->TabStop = false;
			// 
			// Pic03
			// 
			this->Pic03->Location = System::Drawing::Point(388, 208);
			this->Pic03->Name = L"Pic03";
			this->Pic03->Size = System::Drawing::Size(208, 23);
			this->Pic03->TabIndex = 39;
			this->Pic03->TabStop = false;
			// 
			// Pic01
			// 
			this->Pic01->Location = System::Drawing::Point(388, 86);
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
			this->label11->Location = System::Drawing::Point(385, 46);
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
			this->label10->Location = System::Drawing::Point(101, 46);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 17);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(98, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 18);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Secure tenure";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(98, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 18);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Women in workforce";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(98, 91);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 18);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Poverty";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(449, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(497, 39);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Electronic Urban Health Record";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(99, 126);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(78, 18);
			this->label36->TabIndex = 86;
			this->label36->Text = L"Economic";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1252, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 87;
			this->pictureBox1->TabStop = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &DataEconomic::printDocument1_PrintPage);
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
			this->pictureBox2->Location = System::Drawing::Point(1252, 68);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 88;
			this->pictureBox2->TabStop = false;
			// 
			// DataEconomic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"DataEconomic";
			this->Text = L"Economic";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DataEconomic::DataEconomic_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//variable declare
	XmlDataDocument mydoc; 
	String^ a1;		String^ a2;
	String^ a3;		String^ a4;
	String^ a5;		int CurrentRow;
	//form load method
	private: System::Void DataEconomic_Load(System::Object^  sender, System::EventArgs^  e) {
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
		}

		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		this->db = gcnew database();
		this->db->read_economic_db();
		int l;
		String^ comboString;
		String^ query;
		query = "City <> '" + "nai" + "'";
		array<DataRow^>^ myRows = db->Economic->Select(query);
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
	//close form
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	//Graphic view present (green , red, yellow)
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
				Pic02->Image = Image::FromFile("red05.png");
				input2 = "Red";
			}
			else if(val > upper)
			{
				Pic02->Image = Image::FromFile("green05.png");
				input2 = "Green";
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
	}

	int CheckExistCity(String^ userName, String^ cityName)
	{
		this->db1 = gcnew database();
		this->db1->read_economicComment_db();
		String^ query;
		int flag=0;
		query = "UserName = '" + userName + "'";
		array<DataRow^>^ myRows = db1->EconomicComments->Select(query);
		int l = myRows->Length;
		if(myRows->Length > 0)
		{	
			for(int i=0; i<l; i++)
			{
				//String^ c =  myRows[i]->default[1]->ToString();
				if(cityName == myRows[i]->default[1]->ToString() && userName == myRows[i]->default[0]->ToString())
				{
					txt1->Text = myRows[i]->default[2]->ToString();
					txt2->Text = myRows[i]->default[3]->ToString();
					txt3->Text = myRows[i]->default[4]->ToString();

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
		}
		return flag;

	}

	//change comboBox item then call this and this read data from xml file for select perticuler city and show color bar and value
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->db->read_economic_db();
		String^ comboString;
		comboString = comboBox2->Text;
		String^ query;
		query = "City = '" + comboString + "'";
		array<DataRow^>^ myRows = db->Economic->Select(query);
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

			val1 = int::Parse(myRows[0]->default[1]->ToString());	val2 = int::Parse(myRows[0]->default[2]->ToString());	val3 = int::Parse(myRows[0]->default[3]->ToString());
			val4 = int::Parse(myRows[0]->default[5]->ToString());	val5 = int::Parse(myRows[0]->default[6]->ToString());	val6 = int::Parse(myRows[0]->default[7]->ToString());
			val7 = int::Parse(myRows[0]->default[9]->ToString());	val8 = int::Parse(myRows[0]->default[10]->ToString());	val9 = int::Parse(myRows[0]->default[11]->ToString());

			checkFlag = CheckExistCity(name, comboString);
		}
	}

	//comment data catch and pass other function to save xml file
	private: System::Void btnComment_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if(txt1->Text != "" || txt2->Text != "" || txt3->Text != "" )
		{
			if(checkFlag == 0)
			{
				String^ path = "..\\App_Data\\EconomicComments.xml";
				XmlDocument^ doc = gcnew XmlDocument();

				//If there is no current file, then create a new one
				XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
				XmlComment^ comment = doc->CreateComment("This is an XML Generated File");
				if (!System::IO::File::Exists(path))
				{
					//Create necessary nodes
					declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
					comment = doc->CreateComment("This is an XML Generated File");
					doc->InnerXml = "<?xml version='1.0' standalone='yes'?><EHM><EconomicComments></EconomicComments></EHM>";
				}
				else //If there is already a file
				{
					//Load the XML File
					doc->Load(path);
				}

				//Get the root element
				XmlElement^ root = doc->CreateElement("EHM");
				XmlElement^ Subroot = doc->CreateElement("EconomicComments");

				XmlElement ^ UserName = doc->CreateElement("UserName");
				XmlElement ^ CityName = doc->CreateElement("CityName");
				XmlElement ^ PovertyComment = doc->CreateElement("PovertyComment");
				XmlElement ^ WomenComment = doc->CreateElement("WomenComment");
				XmlElement ^ SecureComment = doc->CreateElement("SecureComment");

				a1 = name;
				a2 = comboBox2->Text;
				a3 = txt1->Text;
				a4 = txt2->Text;
				a5 = txt3->Text;		
		
				UserName->InnerText = a1;
				CityName->InnerText = a2;
				PovertyComment->InnerText = a3;
				WomenComment->InnerText = a4;
				SecureComment->InnerText = a5;

				XmlNode^ docNode = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");				 
				doc->DocumentElement->AppendChild( Subroot );

				Subroot->AppendChild( UserName );
				Subroot->AppendChild( CityName );
				Subroot->AppendChild( PovertyComment );
				Subroot->AppendChild( WomenComment );
				Subroot->AppendChild( SecureComment );

				doc->Save(path);

				MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );

				txt1->Text="";
				txt2->Text="";
				txt3->Text="";
			}
			else
			{
				this->db2 = gcnew database();
				this->db2->read_economicComment_db();
				String^ query;
				query = "UserName = '" + name + "'";
				array<DataRow^>^ myRows = this->db2->EconomicComments->Select(query);
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
							myRows[i]->EndEdit();
							MessageBox::Show( "Data updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );
							db2->write_economicComment_db(); //write xml file
							break;
						}
					}
				}
			}
			DataEconomic::Close();
		}		
	}
	private: System::Void btnPrint_Click(System::Object^  sender, System::EventArgs^  e) {
		this->printPreviewDialog1->ShowDialog();
	}
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
		
		//int xpos = e->MarginBounds.Left;
		//int ypos = e->MarginBounds.Top;
		int xpos = 50;
		int ypos = 50;
		int lineHeight = 50;
		System::Drawing::Font ^ft = gcnew System::Drawing::Font("Garamond", 28, FontStyle::Regular);
		e->Graphics->DrawString("Electronic Urban Health Record", ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		ypos += lineHeight;
		
		ft = gcnew System::Drawing::Font("Garamond", 13, FontStyle::Bold);
		e->Graphics->DrawString("Policy Domain\t:\tEconomic", ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString("User Name\t:\t" + name, ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString("City Name\t:\t" + comboBox2->Text, ft, Brushes::Gray, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;

		ft = gcnew System::Drawing::Font("Times New Roman", 12, FontStyle::Regular);
		e->Graphics->DrawString(String::Concat("Indicator Name\t\tInput\tUpper\tLower\tColor\tComment"), ft, Brushes::Black, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("Poverty\t\t\t", val1, "\t", val3, "\t", val2, "\t", this->input1, "\t", this->txt1->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("WomenInWorkforce\t", val4, "\t", val6, "\t", val5, "\t", this->input2, "\t", this->txt2->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
		ypos += lineHeight;
		e->Graphics->DrawString(String::Concat("SecureTenure\t\t", val7, "\t", val9, "\t", val8, "\t", this->input3, "\t", this->txt3->Text), ft, Brushes::Green, static_cast<Single>(xpos), static_cast<Single>(ypos));
	}
};
}
