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
	/// Summary for NewCity
	/// </summary>
	public ref class NewCity : public System::Windows::Forms::Form
	{
	public:
		NewCity(void)
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
		~NewCity()
		{
			if (components)
			{
				delete components;
			}
		}
	public: database ^ db;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btnAdd3;
	private: System::Windows::Forms::Button^  btnAdd2;
	private: System::Windows::Forms::Button^  btnAdd1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lblCityError2;
	private: System::Windows::Forms::Label^  lblCityError;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblCityError = (gcnew System::Windows::Forms::Label());
			this->lblCityError2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->btnAdd3 = (gcnew System::Windows::Forms::Button());
			this->btnAdd2 = (gcnew System::Windows::Forms::Button());
			this->btnAdd1 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblCityError);
			this->groupBox1->Controls->Add(this->lblCityError2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(64, 57);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(696, 514);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// lblCityError
			// 
			this->lblCityError->AutoSize = true;
			this->lblCityError->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblCityError->ForeColor = System::Drawing::Color::Red;
			this->lblCityError->Location = System::Drawing::Point(371, 47);
			this->lblCityError->Name = L"lblCityError";
			this->lblCityError->Size = System::Drawing::Size(122, 12);
			this->lblCityError->TabIndex = 18;
			this->lblCityError->Text = L"Used Another City Name";
			// 
			// lblCityError2
			// 
			this->lblCityError2->AutoSize = true;
			this->lblCityError2->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblCityError2->ForeColor = System::Drawing::Color::Red;
			this->lblCityError2->Location = System::Drawing::Point(371, 47);
			this->lblCityError2->Name = L"lblCityError2";
			this->lblCityError2->Size = System::Drawing::Size(59, 12);
			this->lblCityError2->TabIndex = 17;
			this->lblCityError2->Text = L"*City Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(373, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 25);
			this->textBox1->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(49, 62);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(596, 429);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lbl4);
			this->groupBox3->Controls->Add(this->lbl3);
			this->groupBox3->Controls->Add(this->lbl2);
			this->groupBox3->Controls->Add(this->lbl1);
			this->groupBox3->Controls->Add(this->btnAdd3);
			this->groupBox3->Controls->Add(this->btnAdd2);
			this->groupBox3->Controls->Add(this->btnAdd1);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Location = System::Drawing::Point(294, 230);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(285, 174);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl4->Location = System::Drawing::Point(11, 134);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(13, 14);
			this->lbl4->TabIndex = 17;
			this->lbl4->Text = L"4";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl3->Location = System::Drawing::Point(11, 99);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(13, 14);
			this->lbl3->TabIndex = 16;
			this->lbl3->Text = L"3";
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(11, 62);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(13, 14);
			this->lbl2->TabIndex = 14;
			this->lbl2->Text = L"2";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(11, 22);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(13, 14);
			this->lbl1->TabIndex = 13;
			this->lbl1->Text = L"1";
			// 
			// btnAdd3
			// 
			this->btnAdd3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdd3->Location = System::Drawing::Point(179, 97);
			this->btnAdd3->Name = L"btnAdd3";
			this->btnAdd3->Size = System::Drawing::Size(50, 24);
			this->btnAdd3->TabIndex = 12;
			this->btnAdd3->Text = L"Add";
			this->btnAdd3->UseVisualStyleBackColor = true;
			this->btnAdd3->Click += gcnew System::EventHandler(this, &NewCity::btnAdd3_Click);
			// 
			// btnAdd2
			// 
			this->btnAdd2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdd2->Location = System::Drawing::Point(179, 59);
			this->btnAdd2->Name = L"btnAdd2";
			this->btnAdd2->Size = System::Drawing::Size(50, 24);
			this->btnAdd2->TabIndex = 11;
			this->btnAdd2->Text = L"Add";
			this->btnAdd2->UseVisualStyleBackColor = true;
			this->btnAdd2->Click += gcnew System::EventHandler(this, &NewCity::btnAdd2_Click);
			// 
			// btnAdd1
			// 
			this->btnAdd1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdd1->Location = System::Drawing::Point(179, 19);
			this->btnAdd1->Name = L"btnAdd1";
			this->btnAdd1->Size = System::Drawing::Size(50, 24);
			this->btnAdd1->TabIndex = 10;
			this->btnAdd1->Text = L"Add";
			this->btnAdd1->UseVisualStyleBackColor = true;
			this->btnAdd1->Click += gcnew System::EventHandler(this, &NewCity::btnAdd1_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(30, 133);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(134, 25);
			this->textBox9->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(30, 97);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(134, 25);
			this->textBox8->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(30, 59);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(134, 25);
			this->textBox7->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(30, 19);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(134, 25);
			this->textBox6->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 156);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(263, 14);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Such as No. of Hospitals, Clinics, Universities, etc.)";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(324, 199);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(134, 25);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(324, 136);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 25);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(324, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(134, 25);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(324, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 25);
			this->textBox2->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 18);
			this->label6->TabIndex = 8;
			this->label6->Text = L"City Neighbors";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(118, 18);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Link to City Page";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Related Health Care Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Number of Health Care Services";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Number of Inhabitants";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(70, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"City Name";
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(436, 599);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(100, 40);
			this->btnSave->TabIndex = 7;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &NewCity::btnSave_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(262, 599);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(100, 40);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"Close";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &NewCity::btnExit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(712, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(144, 2);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(497, 39);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(712, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// NewCity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 682);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->groupBox1);
			this->Name = L"NewCity";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Create New City";
			this->Load += gcnew System::EventHandler(this, &NewCity::NewCity_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	XmlDataDocument mydoc;
	String^ a1;
	String^ a2;
	String^ a3;
	String^ a4;
	String^ a5;
	String^ a6;
	String^ a7;
	String^ a8;
	String^ a9;
	int CurrentRow;

private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
	}

	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		/*Checking User already Exist or Not*/
		this->db = gcnew database();
		this->db->read_city_db();
		int l;
		String^ query;
		query = "Name = '" + textBox1->Text + "'";
		array<DataRow^>^ myRows = db->City->Select(query);
		l = myRows->Length;
		if(myRows->Length > 0)
		{	
			lblCityError->Show();
			lblCityError2->Hide();
			textBox1->Text = "";
		}
		else if(textBox1->Text == "")
		{
			lblCityError->Hide();
			lblCityError2->Show();
		}
		else
		{

			String^ path = "..\\App_Data\\City.xml";
			XmlDocument^ doc = gcnew XmlDocument();

			//If there is no current file, then create a new one
			XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
			XmlComment^ comment = doc->CreateComment("This is an XML Generated File");
			if (!System::IO::File::Exists(path))
			{
				//Create necessary nodes

				declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
				comment = doc->CreateComment("This is an XML Generated File");
				doc->InnerXml = "<?xml version='1.0' standalone='yes'?><EHM><City></City></EHM>";
			}
			else //If there is already a file
			{
				//Load the XML File
				doc->Load(path);
			}
			//Get the root element
			XmlElement^ root = doc->CreateElement("EHM");
			XmlElement^ Subroot = doc->CreateElement("City");

			XmlElement ^ Name = doc->CreateElement("Name");
			XmlElement^ Inhabitants = doc->CreateElement("Inhabitants");
			XmlElement^ HealthCare = doc->CreateElement("HealthCare");
			XmlElement ^ RelatedHealthCare = doc->CreateElement("RelatedHealthCare");
			XmlElement ^ LinkCityPage = doc->CreateElement("LinkCityPage");
			XmlElement ^ CityNeighbor1 = doc->CreateElement("CityNeighbor1");
			XmlElement ^ CityNeighbor2 = doc->CreateElement("CityNeighbor2");
			XmlElement ^ CityNeighbor3 = doc->CreateElement("CityNeighbor3");
			XmlElement ^ CityNeighbor4 = doc->CreateElement("CityNeighbor4");

			//Add the values for each nodes
			a1 = textBox1->Text;
			a2 = textBox2->Text;
			a3 = textBox3->Text;
			a4 = textBox4->Text;
			a5 = textBox5->Text;
			a6 = textBox6->Text;
			a7 = textBox7->Text;
			a8 = textBox8->Text;
			a9 = textBox9->Text;

			Name->InnerText = a1;
			Inhabitants->InnerText = a2;
			HealthCare->InnerText = a3;
			RelatedHealthCare->InnerText = a4;
			LinkCityPage->InnerText = a5;
			CityNeighbor1->InnerText = a6;
			CityNeighbor2->InnerText = a7;
			CityNeighbor3->InnerText = a8;
			CityNeighbor4->InnerText = a9;

			XmlNode^ docNode = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");				 
			doc->DocumentElement->AppendChild( Subroot );
			Subroot->AppendChild( Name );
			Subroot->AppendChild( Inhabitants );
			Subroot->AppendChild( HealthCare );
			Subroot->AppendChild( RelatedHealthCare );
			Subroot->AppendChild( LinkCityPage );
			Subroot->AppendChild( CityNeighbor1 );
			Subroot->AppendChild( CityNeighbor2 );
			Subroot->AppendChild( CityNeighbor3 );
			Subroot->AppendChild( CityNeighbor4 );
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

			this->Close();
		}
	}

	private: System::Void NewCity_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		lblCityError->Hide();
		lblCityError2->Hide();
		lbl2->Hide();
		lbl3->Hide();
		lbl4->Hide();
		textBox7->Hide();
		textBox8->Hide();
		textBox9->Hide();
		btnAdd2->Hide();
		btnAdd3->Hide();
		
	}
	private: System::Void btnAdd1_Click(System::Object^  sender, System::EventArgs^  e) {
		btnAdd1->Hide();
		lbl2->Show();
		textBox7->Show();
		btnAdd2->Show();
	}
	private: System::Void btnAdd2_Click(System::Object^  sender, System::EventArgs^  e) {
		btnAdd2->Hide();
		lbl3->Show();
		textBox8->Show();
		btnAdd3->Show();
	}
	private: System::Void btnAdd3_Click(System::Object^  sender, System::EventArgs^  e) {
		btnAdd3->Hide();
		lbl4->Show();
		textBox9->Show();
	}
};
}
