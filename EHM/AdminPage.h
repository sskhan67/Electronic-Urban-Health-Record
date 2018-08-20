#pragma once

#include "NewCity.h"
#include "ChangeCityInfo.h"
#include "DeleteCity.h"
#include "AccessAllCities.h"

#include "Physical environment and infrastructure.h"
#include "Economic.h"
#include "Health care outcomes.h"
#include "Social and human development.h"
#include "Governance.h"

#include "DispalyPhysicalEnvironmentAndInfrastructure.h"
#include "DispalyEconomic.h"
#include "DispalyHealthCareOutcomes.h"
#include "DispalySocialAndHumanDevelopment.h"
#include "DispalyGovernance.h"

#include "Registration.h"
#include "ChangeUserInfo.h"
#include "DeleteUser.h"

#include "AboutUs.h"
#include "ContactUs.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Threading;
	using namespace System::ComponentModel;

	/// <summary>
	/// Summary for AdminPage
	/// </summary>
	public ref class AdminPage : public System::Windows::Forms::Form
	{
	public:
		AdminPage(void)
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
		~AdminPage()
		{
			if (components)
			{
				delete components;
			}
		}
	public: String^ name;
	public: String^ role;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  gb1;
	private: System::Windows::Forms::Button^  btnServices5;

	private: System::Windows::Forms::Button^  btnServices4;

	private: System::Windows::Forms::Button^  btnServices3;



	private: System::Windows::Forms::Button^  btnServices1;
	private: System::Windows::Forms::GroupBox^  gb2;

	private: System::Windows::Forms::Button^  btnPInsert5;

	private: System::Windows::Forms::Button^  btnPInsert4;

	private: System::Windows::Forms::Button^  btnPInsert3;
	private: System::Windows::Forms::Button^  btnPInsert2;



	private: System::Windows::Forms::Button^  btnPInsert1;
	private: System::Windows::Forms::GroupBox^  gb4;








	private: System::Windows::Forms::Button^  btnReg3;



	private: System::Windows::Forms::Button^  btnReg2;

	private: System::Windows::Forms::Button^  btnReg1;
	private: System::Windows::Forms::GroupBox^  gb3;


	private: System::Windows::Forms::Button^  btnPDisplay5;
	private: System::Windows::Forms::Button^  btnPDisplay4;
	private: System::Windows::Forms::Button^  btnPDisplay3;
	private: System::Windows::Forms::Button^  btnPDisplay2;
	private: System::Windows::Forms::Button^  btnPDisplay1;
	private: System::Windows::Forms::GroupBox^  gb5;
	private: System::Windows::Forms::Button^  btnHelp2;
	private: System::Windows::Forms::Button^  btnHelp1;

	private: System::Windows::Forms::Button^  btnHelp23;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gb1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnServices5 = (gcnew System::Windows::Forms::Button());
			this->btnServices4 = (gcnew System::Windows::Forms::Button());
			this->btnServices3 = (gcnew System::Windows::Forms::Button());
			this->btnServices1 = (gcnew System::Windows::Forms::Button());
			this->gb2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPInsert5 = (gcnew System::Windows::Forms::Button());
			this->btnPInsert4 = (gcnew System::Windows::Forms::Button());
			this->btnPInsert3 = (gcnew System::Windows::Forms::Button());
			this->btnPInsert2 = (gcnew System::Windows::Forms::Button());
			this->btnPInsert1 = (gcnew System::Windows::Forms::Button());
			this->gb4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnReg3 = (gcnew System::Windows::Forms::Button());
			this->btnReg2 = (gcnew System::Windows::Forms::Button());
			this->btnReg1 = (gcnew System::Windows::Forms::Button());
			this->gb3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPDisplay5 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay4 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay3 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay2 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay1 = (gcnew System::Windows::Forms::Button());
			this->gb5 = (gcnew System::Windows::Forms::GroupBox());
			this->btnHelp23 = (gcnew System::Windows::Forms::Button());
			this->btnHelp2 = (gcnew System::Windows::Forms::Button());
			this->btnHelp1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->gb1->SuspendLayout();
			this->gb2->SuspendLayout();
			this->gb4->SuspendLayout();
			this->gb3->SuspendLayout();
			this->gb5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(37, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 553);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Location = System::Drawing::Point(20, 480);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(264, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Logout";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminPage::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Location = System::Drawing::Point(20, 390);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(264, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Help";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminPage::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Location = System::Drawing::Point(20, 300);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(264, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Registration";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPage::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Location = System::Drawing::Point(20, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(264, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Policy Domain (Display Data)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminPage::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(20, 120);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(264, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Policy Domain (Insert Data)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPage::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(20, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(264, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Services";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPage::button1_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Garamond", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::Blue;
			this->label34->Location = System::Drawing::Point(340, 19);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(673, 42);
			this->label34->TabIndex = 85;
			this->label34->Text = L"Electronic Urban Health Record (EUHR)";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(37, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 87;
			this->pictureBox1->TabStop = false;
			// 
			// gb1
			// 
			this->gb1->Controls->Add(this->btnServices5);
			this->gb1->Controls->Add(this->btnServices4);
			this->gb1->Controls->Add(this->btnServices3);
			this->gb1->Controls->Add(this->btnServices1);
			this->gb1->Location = System::Drawing::Point(348, 80);
			this->gb1->Name = L"gb1";
			this->gb1->Size = System::Drawing::Size(976, 80);
			this->gb1->TabIndex = 88;
			this->gb1->TabStop = false;
			// 
			// btnServices5
			// 
			this->btnServices5->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnServices5->Location = System::Drawing::Point(582, 20);
			this->btnServices5->Name = L"btnServices5";
			this->btnServices5->Size = System::Drawing::Size(180, 45);
			this->btnServices5->TabIndex = 4;
			this->btnServices5->Text = L"Show All City Info.";
			this->btnServices5->UseVisualStyleBackColor = true;
			this->btnServices5->Click += gcnew System::EventHandler(this, &AdminPage::btnServices5_Click);
			// 
			// btnServices4
			// 
			this->btnServices4->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnServices4->Location = System::Drawing::Point(396, 21);
			this->btnServices4->Name = L"btnServices4";
			this->btnServices4->Size = System::Drawing::Size(180, 45);
			this->btnServices4->TabIndex = 3;
			this->btnServices4->Text = L"Delete City";
			this->btnServices4->UseVisualStyleBackColor = true;
			this->btnServices4->Click += gcnew System::EventHandler(this, &AdminPage::btnServices4_Click);
			// 
			// btnServices3
			// 
			this->btnServices3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnServices3->Location = System::Drawing::Point(210, 21);
			this->btnServices3->Name = L"btnServices3";
			this->btnServices3->Size = System::Drawing::Size(180, 45);
			this->btnServices3->TabIndex = 2;
			this->btnServices3->Text = L"Update City Info.";
			this->btnServices3->UseVisualStyleBackColor = true;
			this->btnServices3->Click += gcnew System::EventHandler(this, &AdminPage::btnServices3_Click);
			// 
			// btnServices1
			// 
			this->btnServices1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnServices1->Location = System::Drawing::Point(24, 21);
			this->btnServices1->Name = L"btnServices1";
			this->btnServices1->Size = System::Drawing::Size(180, 45);
			this->btnServices1->TabIndex = 0;
			this->btnServices1->Text = L"New City";
			this->btnServices1->UseVisualStyleBackColor = true;
			this->btnServices1->Click += gcnew System::EventHandler(this, &AdminPage::btnServices1_Click);
			// 
			// gb2
			// 
			this->gb2->Controls->Add(this->btnPInsert5);
			this->gb2->Controls->Add(this->btnPInsert4);
			this->gb2->Controls->Add(this->btnPInsert3);
			this->gb2->Controls->Add(this->btnPInsert2);
			this->gb2->Controls->Add(this->btnPInsert1);
			this->gb2->Location = System::Drawing::Point(348, 171);
			this->gb2->Name = L"gb2";
			this->gb2->Size = System::Drawing::Size(976, 80);
			this->gb2->TabIndex = 89;
			this->gb2->TabStop = false;
			// 
			// btnPInsert5
			// 
			this->btnPInsert5->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPInsert5->Location = System::Drawing::Point(768, 20);
			this->btnPInsert5->Name = L"btnPInsert5";
			this->btnPInsert5->Size = System::Drawing::Size(180, 45);
			this->btnPInsert5->TabIndex = 4;
			this->btnPInsert5->Text = L"Governance";
			this->btnPInsert5->UseVisualStyleBackColor = true;
			this->btnPInsert5->Click += gcnew System::EventHandler(this, &AdminPage::btnPInsert5_Click);
			// 
			// btnPInsert4
			// 
			this->btnPInsert4->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPInsert4->Location = System::Drawing::Point(582, 21);
			this->btnPInsert4->Name = L"btnPInsert4";
			this->btnPInsert4->Size = System::Drawing::Size(180, 45);
			this->btnPInsert4->TabIndex = 3;
			this->btnPInsert4->Text = L"Social and human development";
			this->btnPInsert4->UseVisualStyleBackColor = true;
			this->btnPInsert4->Click += gcnew System::EventHandler(this, &AdminPage::btnPInsert4_Click);
			// 
			// btnPInsert3
			// 
			this->btnPInsert3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPInsert3->Location = System::Drawing::Point(396, 21);
			this->btnPInsert3->Name = L"btnPInsert3";
			this->btnPInsert3->Size = System::Drawing::Size(180, 45);
			this->btnPInsert3->TabIndex = 2;
			this->btnPInsert3->Text = L"Health care outcomes";
			this->btnPInsert3->UseVisualStyleBackColor = true;
			this->btnPInsert3->Click += gcnew System::EventHandler(this, &AdminPage::btnPInsert3_Click);
			// 
			// btnPInsert2
			// 
			this->btnPInsert2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPInsert2->Location = System::Drawing::Point(210, 20);
			this->btnPInsert2->Name = L"btnPInsert2";
			this->btnPInsert2->Size = System::Drawing::Size(180, 45);
			this->btnPInsert2->TabIndex = 1;
			this->btnPInsert2->Text = L"Economic";
			this->btnPInsert2->UseVisualStyleBackColor = true;
			this->btnPInsert2->Click += gcnew System::EventHandler(this, &AdminPage::btnPInsert2_Click);
			// 
			// btnPInsert1
			// 
			this->btnPInsert1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPInsert1->Location = System::Drawing::Point(24, 21);
			this->btnPInsert1->Name = L"btnPInsert1";
			this->btnPInsert1->Size = System::Drawing::Size(180, 45);
			this->btnPInsert1->TabIndex = 0;
			this->btnPInsert1->Text = L"Physical environment and infrastructure";
			this->btnPInsert1->UseVisualStyleBackColor = true;
			this->btnPInsert1->Click += gcnew System::EventHandler(this, &AdminPage::btnPInsert1_Click);
			// 
			// gb4
			// 
			this->gb4->Controls->Add(this->btnReg3);
			this->gb4->Controls->Add(this->btnReg2);
			this->gb4->Controls->Add(this->btnReg1);
			this->gb4->Location = System::Drawing::Point(348, 353);
			this->gb4->Name = L"gb4";
			this->gb4->Size = System::Drawing::Size(976, 80);
			this->gb4->TabIndex = 91;
			this->gb4->TabStop = false;
			// 
			// btnReg3
			// 
			this->btnReg3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReg3->Location = System::Drawing::Point(396, 21);
			this->btnReg3->Name = L"btnReg3";
			this->btnReg3->Size = System::Drawing::Size(180, 45);
			this->btnReg3->TabIndex = 2;
			this->btnReg3->Text = L"Delete User";
			this->btnReg3->UseVisualStyleBackColor = true;
			this->btnReg3->Click += gcnew System::EventHandler(this, &AdminPage::btnReg3_Click);
			// 
			// btnReg2
			// 
			this->btnReg2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReg2->Location = System::Drawing::Point(210, 20);
			this->btnReg2->Name = L"btnReg2";
			this->btnReg2->Size = System::Drawing::Size(180, 45);
			this->btnReg2->TabIndex = 1;
			this->btnReg2->Text = L"Update User";
			this->btnReg2->UseVisualStyleBackColor = true;
			this->btnReg2->Click += gcnew System::EventHandler(this, &AdminPage::btnReg2_Click);
			// 
			// btnReg1
			// 
			this->btnReg1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnReg1->Location = System::Drawing::Point(24, 21);
			this->btnReg1->Name = L"btnReg1";
			this->btnReg1->Size = System::Drawing::Size(180, 45);
			this->btnReg1->TabIndex = 0;
			this->btnReg1->Text = L"New User";
			this->btnReg1->UseVisualStyleBackColor = true;
			this->btnReg1->Click += gcnew System::EventHandler(this, &AdminPage::btnReg1_Click);
			// 
			// gb3
			// 
			this->gb3->Controls->Add(this->btnPDisplay5);
			this->gb3->Controls->Add(this->btnPDisplay4);
			this->gb3->Controls->Add(this->btnPDisplay3);
			this->gb3->Controls->Add(this->btnPDisplay2);
			this->gb3->Controls->Add(this->btnPDisplay1);
			this->gb3->Location = System::Drawing::Point(348, 263);
			this->gb3->Name = L"gb3";
			this->gb3->Size = System::Drawing::Size(976, 80);
			this->gb3->TabIndex = 90;
			this->gb3->TabStop = false;
			// 
			// btnPDisplay5
			// 
			this->btnPDisplay5->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPDisplay5->Location = System::Drawing::Point(768, 20);
			this->btnPDisplay5->Name = L"btnPDisplay5";
			this->btnPDisplay5->Size = System::Drawing::Size(180, 45);
			this->btnPDisplay5->TabIndex = 4;
			this->btnPDisplay5->Text = L"Governance";
			this->btnPDisplay5->UseVisualStyleBackColor = true;
			this->btnPDisplay5->Click += gcnew System::EventHandler(this, &AdminPage::btnPDisplay5_Click);
			// 
			// btnPDisplay4
			// 
			this->btnPDisplay4->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPDisplay4->Location = System::Drawing::Point(582, 21);
			this->btnPDisplay4->Name = L"btnPDisplay4";
			this->btnPDisplay4->Size = System::Drawing::Size(180, 45);
			this->btnPDisplay4->TabIndex = 3;
			this->btnPDisplay4->Text = L"Social and human development";
			this->btnPDisplay4->UseVisualStyleBackColor = true;
			this->btnPDisplay4->Click += gcnew System::EventHandler(this, &AdminPage::btnPDisplay4_Click);
			// 
			// btnPDisplay3
			// 
			this->btnPDisplay3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPDisplay3->Location = System::Drawing::Point(396, 21);
			this->btnPDisplay3->Name = L"btnPDisplay3";
			this->btnPDisplay3->Size = System::Drawing::Size(180, 45);
			this->btnPDisplay3->TabIndex = 2;
			this->btnPDisplay3->Text = L"Health care outcomes";
			this->btnPDisplay3->UseVisualStyleBackColor = true;
			this->btnPDisplay3->Click += gcnew System::EventHandler(this, &AdminPage::btnPDisplay3_Click);
			// 
			// btnPDisplay2
			// 
			this->btnPDisplay2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPDisplay2->Location = System::Drawing::Point(210, 20);
			this->btnPDisplay2->Name = L"btnPDisplay2";
			this->btnPDisplay2->Size = System::Drawing::Size(180, 45);
			this->btnPDisplay2->TabIndex = 1;
			this->btnPDisplay2->Text = L"Economic";
			this->btnPDisplay2->UseVisualStyleBackColor = true;
			this->btnPDisplay2->Click += gcnew System::EventHandler(this, &AdminPage::btnPDisplay2_Click);
			// 
			// btnPDisplay1
			// 
			this->btnPDisplay1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPDisplay1->Location = System::Drawing::Point(24, 21);
			this->btnPDisplay1->Name = L"btnPDisplay1";
			this->btnPDisplay1->Size = System::Drawing::Size(180, 45);
			this->btnPDisplay1->TabIndex = 0;
			this->btnPDisplay1->Text = L"Physical environment and infrastructure";
			this->btnPDisplay1->UseVisualStyleBackColor = true;
			this->btnPDisplay1->Click += gcnew System::EventHandler(this, &AdminPage::btnPDisplay1_Click);
			// 
			// gb5
			// 
			this->gb5->Controls->Add(this->btnHelp23);
			this->gb5->Controls->Add(this->btnHelp2);
			this->gb5->Controls->Add(this->btnHelp1);
			this->gb5->Location = System::Drawing::Point(348, 442);
			this->gb5->Name = L"gb5";
			this->gb5->Size = System::Drawing::Size(976, 80);
			this->gb5->TabIndex = 92;
			this->gb5->TabStop = false;
			// 
			// btnHelp23
			// 
			this->btnHelp23->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHelp23->Location = System::Drawing::Point(398, 18);
			this->btnHelp23->Name = L"btnHelp23";
			this->btnHelp23->Size = System::Drawing::Size(180, 45);
			this->btnHelp23->TabIndex = 2;
			this->btnHelp23->Text = L"Contact Us";
			this->btnHelp23->UseVisualStyleBackColor = true;
			this->btnHelp23->Click += gcnew System::EventHandler(this, &AdminPage::btnHelp23_Click);
			// 
			// btnHelp2
			// 
			this->btnHelp2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHelp2->Location = System::Drawing::Point(210, 20);
			this->btnHelp2->Name = L"btnHelp2";
			this->btnHelp2->Size = System::Drawing::Size(180, 45);
			this->btnHelp2->TabIndex = 1;
			this->btnHelp2->Text = L"About Us";
			this->btnHelp2->UseVisualStyleBackColor = true;
			this->btnHelp2->Click += gcnew System::EventHandler(this, &AdminPage::btnHelp2_Click);
			// 
			// btnHelp1
			// 
			this->btnHelp1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHelp1->Location = System::Drawing::Point(24, 21);
			this->btnHelp1->Name = L"btnHelp1";
			this->btnHelp1->Size = System::Drawing::Size(180, 45);
			this->btnHelp1->TabIndex = 0;
			this->btnHelp1->Text = L"Help Manual";
			this->btnHelp1->UseVisualStyleBackColor = true;
			this->btnHelp1->Click += gcnew System::EventHandler(this, &AdminPage::btnHelp1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(347, 640);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 90);
			this->pictureBox3->TabIndex = 94;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(348, 534);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 85);
			this->pictureBox2->TabIndex = 93;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(675, 524);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(395, 225);
			this->pictureBox4->TabIndex = 95;
			this->pictureBox4->TabStop = false;
			// 
			// AdminPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->gb5);
			this->Controls->Add(this->gb3);
			this->Controls->Add(this->gb4);
			this->Controls->Add(this->gb2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->gb1);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AdminPage";
			this->Text = L"AdminPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AdminPage::AdminPage_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->gb1->ResumeLayout(false);
			this->gb2->ResumeLayout(false);
			this->gb4->ResumeLayout(false);
			this->gb3->ResumeLayout(false);
			this->gb5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Form Load
	private: System::Void AdminPage_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("logo_uni_mid.png");
		pictureBox3->Image = Image::FromFile("kbs_transparent_mid.png");
		pictureBox4->Image = Image::FromFile("Urban_mid.jpg");
		gb1->Hide();
		gb2->Hide();
		gb3->Hide();
		gb4->Hide();
		gb5->Hide();
	}
	//show 1st sub menu
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Show();
		gb2->Hide();
		gb3->Hide();
		gb4->Hide();
		gb5->Hide();
	}
	//show 2nd sub menu
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Hide();
		gb2->Show();
		gb3->Hide();
		gb4->Hide();
		gb5->Hide();
	}
	//show 3rd sub menu
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Hide();
		gb2->Hide();
		gb3->Show();
		gb4->Hide();
		gb5->Hide();
	}
	//show 4th sub menu
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Hide();
		gb2->Hide();
		gb3->Hide();
		gb4->Show();
		gb5->Hide();
	}
	//show 5th sub menu
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Hide();
		gb2->Hide();
		gb3->Hide();
		gb4->Hide();
		gb5->Show();
	}
	//New city Entry Form open
	private: System::Void btnServices1_Click(System::Object^  sender, System::EventArgs^  e) {
		NewCity^ city = gcnew NewCity();
		city->ShowDialog();
	}
	//New city Entry Form open
	private: System::Void btnServices3_Click(System::Object^  sender, System::EventArgs^  e) {
		ChangeCityInfo^ icity = gcnew ChangeCityInfo();
		icity->ShowDialog();
	}
	//Delete city Form open
	private: System::Void btnServices4_Click(System::Object^  sender, System::EventArgs^  e) {
		DeleteCity^ dcity = gcnew DeleteCity();
		dcity->ShowDialog();
	}
	//show all city info. Form open
	private: System::Void btnServices5_Click(System::Object^  sender, System::EventArgs^  e) {
		AccessAllCities^ access = gcnew AccessAllCities();
		access->ShowDialog();
	}
	//Insert Physicalenvironmentandinfrastructure
	private: System::Void btnPInsert1_Click(System::Object^  sender, System::EventArgs^  e) {
		Physicalenvironmentandinfrastructure ^ formPhy = gcnew Physicalenvironmentandinfrastructure;
		formPhy->ShowDialog();
	}
	//Insert Economic
	private: System::Void btnPInsert2_Click(System::Object^  sender, System::EventArgs^  e) {
		Economic ^ formEco = gcnew Economic;
		formEco->ShowDialog();
	}
	//Insert Healthcareoutcomes
	private: System::Void btnPInsert3_Click(System::Object^  sender, System::EventArgs^  e) {
		Healthcareoutcomes ^ formHealth = gcnew Healthcareoutcomes;
		formHealth->ShowDialog();
	}
	//Insert Physicalenvironmentandinfrastructure
	private: System::Void btnPInsert4_Click(System::Object^  sender, System::EventArgs^  e) {
		Socialandhumandevelopment ^ formSocial = gcnew Socialandhumandevelopment;
		formSocial->ShowDialog();
	}
	//Insert Governance
	private: System::Void btnPInsert5_Click(System::Object^  sender, System::EventArgs^  e) {
		Governance ^ formGovernance = gcnew Governance;
		formGovernance->ShowDialog();
	}

	//Display all data of Physicalenvironmentandinfrastructure
	private: System::Void btnPDisplay1_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminPage::Hide();
		DispalyPhysicalEnvironmentAndInfrastructure^ disphy = gcnew DispalyPhysicalEnvironmentAndInfrastructure();
		disphy->role = role;
		disphy->ShowDialog();
		AdminPage::Show();
	}
	//Display all data of Economic
	private: System::Void btnPDisplay2_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminPage::Hide();
		DispalyEconomic^ diseco = gcnew DispalyEconomic();
		diseco->role = role;
		diseco->ShowDialog();
		AdminPage::Show();
	}
	//Display all data of HealthCareOutcomes
	private: System::Void btnPDisplay3_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminPage::Hide();
		DispalyHealthCareOutcomes^ dishea = gcnew DispalyHealthCareOutcomes();
		dishea->role = role;
		dishea->ShowDialog();
		AdminPage::Show();
	}
	//Display all data of SocialAndHumanDevelopment
	private: System::Void btnPDisplay4_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminPage::Hide();
		DispalySocialAndHumanDevelopment^ dissoc = gcnew DispalySocialAndHumanDevelopment();
		dissoc->role = role;
		dissoc->ShowDialog();
		AdminPage::Show();
	}
	//Display all data of Governance
	private: System::Void btnPDisplay5_Click(System::Object^  sender, System::EventArgs^  e) {
		AdminPage::Hide();
		DispalyGovernance^ disgov = gcnew DispalyGovernance();
		disgov->role = role;
		disgov->ShowDialog();
		AdminPage::Show();
	}
	//User Registration form open
	private: System::Void btnReg1_Click(System::Object^  sender, System::EventArgs^  e) {
		Registration^ reg = gcnew Registration();
		reg->ShowDialog();
	}
	//User info. change form open
	private: System::Void btnReg2_Click(System::Object^  sender, System::EventArgs^  e) {
		ChangeUserInfo^ changeUserInfo = gcnew ChangeUserInfo();
		changeUserInfo->ShowDialog();
	}
	//Delete User form open
	private: System::Void btnReg3_Click(System::Object^  sender, System::EventArgs^  e) {
		DeleteUser^ deleteUser = gcnew DeleteUser();
		deleteUser->ShowDialog();
	}
	
	//open Help Us form
	private: System::Void btnHelp1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ path = Application::StartupPath;
		String^ url = "file:///"+path->Replace('\\','/')+"/document.pdf";
		Process^ sortProcess;
		sortProcess = gcnew Process;
		sortProcess->Start(url);
	}
	//open About Us form
	private: System::Void btnHelp2_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutUs^ aboutus = gcnew AboutUs();
		aboutus->ShowDialog();
	}
	//open Contact Us form
	private: System::Void btnHelp23_Click(System::Object^  sender, System::EventArgs^  e) {
		ContactUs^ contactUs = gcnew ContactUs();
		contactUs->ShowDialog();
	}
	
	//Close button---Exit
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
