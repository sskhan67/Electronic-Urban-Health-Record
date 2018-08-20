#pragma once

#include "DataPhysicalEnvironmentAndInfrastructure.h"
#include "DataEconomic.h"
#include "DataHealthCareOutcomes.h"
#include "DataSocialAndHumanDevelopment.h"
#include "DataGovernance.h"

#include "DispalyPhysicalEnvironmentAndInfrastructure.h"
#include "DispalyEconomic.h"
#include "DispalyHealthCareOutcomes.h"
#include "DispalySocialAndHumanDevelopment.h"
#include "DispalyGovernance.h"

#include "CommentsEconomic.h"

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
	/// Summary for ManagerPage
	/// </summary>
	public ref class ManagerPage : public System::Windows::Forms::Form
	{
	public:
		ManagerPage(void)
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
		~ManagerPage()
		{
			if (components)
			{
				delete components;
			}
		}
	public: String^ name;
	public: String^ role;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  btnCityA5;
	private: System::Windows::Forms::GroupBox^  gb2;
	private: System::Windows::Forms::Button^  btnPDisplay5;
	private: System::Windows::Forms::Button^  btnPDisplay4;
	private: System::Windows::Forms::Button^  btnPDisplay3;
	private: System::Windows::Forms::Button^  btnPDisplay2;
	private: System::Windows::Forms::Button^  btnPDisplay1;
	private: System::Windows::Forms::Button^  btnHelp2;
	private: System::Windows::Forms::GroupBox^  gb4;
	private: System::Windows::Forms::Button^  btnHelp1;
	private: System::Windows::Forms::GroupBox^  gb1;
	private: System::Windows::Forms::Button^  btnCityA4;
	private: System::Windows::Forms::Button^  btnCityA3;
	private: System::Windows::Forms::Button^  btnCityA2;
	private: System::Windows::Forms::Button^  btnCityA1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Button^  btnHelp3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  gb3;
	private: System::Windows::Forms::Button^  btnQuery5;
	private: System::Windows::Forms::Button^  btnQuery4;
	private: System::Windows::Forms::Button^  btnQuery3;
	private: System::Windows::Forms::Button^  btnQuery2;
	private: System::Windows::Forms::Button^  btnQuery1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnCityA5 = (gcnew System::Windows::Forms::Button());
			this->gb2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnPDisplay5 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay4 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay3 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay2 = (gcnew System::Windows::Forms::Button());
			this->btnPDisplay1 = (gcnew System::Windows::Forms::Button());
			this->btnHelp2 = (gcnew System::Windows::Forms::Button());
			this->gb4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnHelp3 = (gcnew System::Windows::Forms::Button());
			this->btnHelp1 = (gcnew System::Windows::Forms::Button());
			this->gb1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCityA4 = (gcnew System::Windows::Forms::Button());
			this->btnCityA3 = (gcnew System::Windows::Forms::Button());
			this->btnCityA2 = (gcnew System::Windows::Forms::Button());
			this->btnCityA1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->gb3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnQuery5 = (gcnew System::Windows::Forms::Button());
			this->btnQuery4 = (gcnew System::Windows::Forms::Button());
			this->btnQuery3 = (gcnew System::Windows::Forms::Button());
			this->btnQuery2 = (gcnew System::Windows::Forms::Button());
			this->btnQuery1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->gb2->SuspendLayout();
			this->gb4->SuspendLayout();
			this->gb1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->gb3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(37, 69);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(305, 553);
			this->groupBox1->TabIndex = 93;
			this->groupBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Location = System::Drawing::Point(20, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(264, 50);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Query";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ManagerPage::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->Location = System::Drawing::Point(20, 390);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(264, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Logout";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ManagerPage::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->Location = System::Drawing::Point(20, 300);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(264, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Help";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ManagerPage::button5_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Location = System::Drawing::Point(20, 120);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(264, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Policy Domain (Display Data)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ManagerPage::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->Location = System::Drawing::Point(20, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(264, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"City Data Analysis";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ManagerPage::button2_Click);
			// 
			// btnCityA5
			// 
			this->btnCityA5->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCityA5->Location = System::Drawing::Point(768, 20);
			this->btnCityA5->Name = L"btnCityA5";
			this->btnCityA5->Size = System::Drawing::Size(180, 45);
			this->btnCityA5->TabIndex = 4;
			this->btnCityA5->Text = L"Governance";
			this->btnCityA5->UseVisualStyleBackColor = true;
			this->btnCityA5->Click += gcnew System::EventHandler(this, &ManagerPage::btnCityA5_Click);
			// 
			// gb2
			// 
			this->gb2->Controls->Add(this->btnPDisplay5);
			this->gb2->Controls->Add(this->btnPDisplay4);
			this->gb2->Controls->Add(this->btnPDisplay3);
			this->gb2->Controls->Add(this->btnPDisplay2);
			this->gb2->Controls->Add(this->btnPDisplay1);
			this->gb2->Location = System::Drawing::Point(348, 171);
			this->gb2->Name = L"gb2";
			this->gb2->Size = System::Drawing::Size(976, 80);
			this->gb2->TabIndex = 98;
			this->gb2->TabStop = false;
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
			this->btnPDisplay5->Click += gcnew System::EventHandler(this, &ManagerPage::btnPDisplay5_Click);
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
			this->btnPDisplay4->Click += gcnew System::EventHandler(this, &ManagerPage::btnPDisplay4_Click);
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
			this->btnPDisplay3->Click += gcnew System::EventHandler(this, &ManagerPage::btnPDisplay3_Click);
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
			this->btnPDisplay2->Click += gcnew System::EventHandler(this, &ManagerPage::btnPDisplay2_Click);
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
			this->btnPDisplay1->Click += gcnew System::EventHandler(this, &ManagerPage::btnPDisplay1_Click);
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
			this->btnHelp2->Click += gcnew System::EventHandler(this, &ManagerPage::btnHelp2_Click);
			// 
			// gb4
			// 
			this->gb4->Controls->Add(this->btnHelp3);
			this->gb4->Controls->Add(this->btnHelp2);
			this->gb4->Controls->Add(this->btnHelp1);
			this->gb4->Location = System::Drawing::Point(348, 353);
			this->gb4->Name = L"gb4";
			this->gb4->Size = System::Drawing::Size(976, 80);
			this->gb4->TabIndex = 100;
			this->gb4->TabStop = false;
			// 
			// btnHelp3
			// 
			this->btnHelp3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHelp3->Location = System::Drawing::Point(398, 18);
			this->btnHelp3->Name = L"btnHelp3";
			this->btnHelp3->Size = System::Drawing::Size(180, 45);
			this->btnHelp3->TabIndex = 2;
			this->btnHelp3->Text = L"Contact Us";
			this->btnHelp3->UseVisualStyleBackColor = true;
			this->btnHelp3->Click += gcnew System::EventHandler(this, &ManagerPage::btnHelp3_Click);
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
			this->btnHelp1->Click += gcnew System::EventHandler(this, &ManagerPage::btnHelp1_Click);
			// 
			// gb1
			// 
			this->gb1->Controls->Add(this->btnCityA5);
			this->gb1->Controls->Add(this->btnCityA4);
			this->gb1->Controls->Add(this->btnCityA3);
			this->gb1->Controls->Add(this->btnCityA2);
			this->gb1->Controls->Add(this->btnCityA1);
			this->gb1->Location = System::Drawing::Point(348, 80);
			this->gb1->Name = L"gb1";
			this->gb1->Size = System::Drawing::Size(976, 80);
			this->gb1->TabIndex = 97;
			this->gb1->TabStop = false;
			// 
			// btnCityA4
			// 
			this->btnCityA4->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCityA4->Location = System::Drawing::Point(582, 21);
			this->btnCityA4->Name = L"btnCityA4";
			this->btnCityA4->Size = System::Drawing::Size(180, 45);
			this->btnCityA4->TabIndex = 3;
			this->btnCityA4->Text = L"Social and human development";
			this->btnCityA4->UseVisualStyleBackColor = true;
			this->btnCityA4->Click += gcnew System::EventHandler(this, &ManagerPage::btnCityA4_Click);
			// 
			// btnCityA3
			// 
			this->btnCityA3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCityA3->Location = System::Drawing::Point(396, 21);
			this->btnCityA3->Name = L"btnCityA3";
			this->btnCityA3->Size = System::Drawing::Size(180, 45);
			this->btnCityA3->TabIndex = 2;
			this->btnCityA3->Text = L"Health care outcomes";
			this->btnCityA3->UseVisualStyleBackColor = true;
			this->btnCityA3->Click += gcnew System::EventHandler(this, &ManagerPage::btnCityA3_Click);
			// 
			// btnCityA2
			// 
			this->btnCityA2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCityA2->Location = System::Drawing::Point(210, 20);
			this->btnCityA2->Name = L"btnCityA2";
			this->btnCityA2->Size = System::Drawing::Size(180, 45);
			this->btnCityA2->TabIndex = 1;
			this->btnCityA2->Text = L"Economic";
			this->btnCityA2->UseVisualStyleBackColor = true;
			this->btnCityA2->Click += gcnew System::EventHandler(this, &ManagerPage::btnCityA2_Click);
			// 
			// btnCityA1
			// 
			this->btnCityA1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCityA1->Location = System::Drawing::Point(24, 21);
			this->btnCityA1->Name = L"btnCityA1";
			this->btnCityA1->Size = System::Drawing::Size(180, 45);
			this->btnCityA1->TabIndex = 0;
			this->btnCityA1->Text = L"Physical environment and infrastructure";
			this->btnCityA1->UseVisualStyleBackColor = true;
			this->btnCityA1->Click += gcnew System::EventHandler(this, &ManagerPage::btnCityA1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(37, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 95;
			this->pictureBox1->TabStop = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Garamond", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::Blue;
			this->label34->Location = System::Drawing::Point(340, 20);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(673, 42);
			this->label34->TabIndex = 94;
			this->label34->Text = L"Electronic Urban Health Record (EUHR)";
			// 
			// gb3
			// 
			this->gb3->Controls->Add(this->btnQuery5);
			this->gb3->Controls->Add(this->btnQuery4);
			this->gb3->Controls->Add(this->btnQuery3);
			this->gb3->Controls->Add(this->btnQuery2);
			this->gb3->Controls->Add(this->btnQuery1);
			this->gb3->Location = System::Drawing::Point(348, 263);
			this->gb3->Name = L"gb3";
			this->gb3->Size = System::Drawing::Size(976, 80);
			this->gb3->TabIndex = 99;
			this->gb3->TabStop = false;
			// 
			// btnQuery5
			// 
			this->btnQuery5->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuery5->Location = System::Drawing::Point(768, 20);
			this->btnQuery5->Name = L"btnQuery5";
			this->btnQuery5->Size = System::Drawing::Size(180, 45);
			this->btnQuery5->TabIndex = 4;
			this->btnQuery5->Text = L"Governance";
			this->btnQuery5->UseVisualStyleBackColor = true;
			this->btnQuery5->Click += gcnew System::EventHandler(this, &ManagerPage::btnQuery5_Click);
			// 
			// btnQuery4
			// 
			this->btnQuery4->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuery4->Location = System::Drawing::Point(582, 21);
			this->btnQuery4->Name = L"btnQuery4";
			this->btnQuery4->Size = System::Drawing::Size(180, 45);
			this->btnQuery4->TabIndex = 3;
			this->btnQuery4->Text = L"Social and human development";
			this->btnQuery4->UseVisualStyleBackColor = true;
			this->btnQuery4->Click += gcnew System::EventHandler(this, &ManagerPage::btnQuery4_Click);
			// 
			// btnQuery3
			// 
			this->btnQuery3->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuery3->Location = System::Drawing::Point(396, 21);
			this->btnQuery3->Name = L"btnQuery3";
			this->btnQuery3->Size = System::Drawing::Size(180, 45);
			this->btnQuery3->TabIndex = 2;
			this->btnQuery3->Text = L"Health care outcomes";
			this->btnQuery3->UseVisualStyleBackColor = true;
			this->btnQuery3->Click += gcnew System::EventHandler(this, &ManagerPage::btnQuery3_Click);
			// 
			// btnQuery2
			// 
			this->btnQuery2->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuery2->Location = System::Drawing::Point(210, 20);
			this->btnQuery2->Name = L"btnQuery2";
			this->btnQuery2->Size = System::Drawing::Size(180, 45);
			this->btnQuery2->TabIndex = 1;
			this->btnQuery2->Text = L"Economic";
			this->btnQuery2->UseVisualStyleBackColor = true;
			this->btnQuery2->Click += gcnew System::EventHandler(this, &ManagerPage::btnQuery2_Click);
			// 
			// btnQuery1
			// 
			this->btnQuery1->Font = (gcnew System::Drawing::Font(L"Garamond", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnQuery1->Location = System::Drawing::Point(24, 21);
			this->btnQuery1->Name = L"btnQuery1";
			this->btnQuery1->Size = System::Drawing::Size(180, 45);
			this->btnQuery1->TabIndex = 0;
			this->btnQuery1->Text = L"Physical environment and infrastructure";
			this->btnQuery1->UseVisualStyleBackColor = true;
			this->btnQuery1->Click += gcnew System::EventHandler(this, &ManagerPage::btnQuery1_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(675, 524);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(395, 225);
			this->pictureBox4->TabIndex = 103;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(347, 640);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 90);
			this->pictureBox3->TabIndex = 102;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(348, 534);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 85);
			this->pictureBox2->TabIndex = 101;
			this->pictureBox2->TabStop = false;
			// 
			// ManagerPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->gb3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->gb2);
			this->Controls->Add(this->gb4);
			this->Controls->Add(this->gb1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label34);
			this->Name = L"ManagerPage";
			this->Text = L"ManagerPage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ManagerPage::ManagerPage_Load);
			this->groupBox1->ResumeLayout(false);
			this->gb2->ResumeLayout(false);
			this->gb4->ResumeLayout(false);
			this->gb1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->gb3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ManagerPage_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("logo_uni_mid.png");
		pictureBox3->Image = Image::FromFile("kbs_transparent_mid.png");
		pictureBox4->Image = Image::FromFile("Urban_mid.jpg");
		gb1->Hide();
		gb2->Hide();
		gb3->Hide();
		gb4->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Show();
		gb2->Hide();
		gb3->Hide();
		gb4->Hide();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Hide();
		gb2->Show();
		gb3->Hide();
		gb4->Hide();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Hide();
		gb2->Hide();
		gb3->Show();
		gb4->Hide();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		gb1->Hide();
		gb2->Hide();
		gb3->Hide();
		gb4->Show();
	}

	private: System::Void btnCityA1_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataPhysicalEnvironmentAndInfrastructure^ dataphysical = gcnew DataPhysicalEnvironmentAndInfrastructure();
		dataphysical-> name = name;
		dataphysical-> print = 0;
		dataphysical->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnCityA2_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataEconomic^ dataeconomic = gcnew DataEconomic();
		dataeconomic->name = name;
		dataeconomic->print = 0;
		dataeconomic->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnCityA3_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataHealthCareOutcomes^ datahealth = gcnew DataHealthCareOutcomes();
		datahealth-> name = name;
		datahealth-> print = 0;
		datahealth->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnCityA4_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataSocialAndHumanDevelopment^ datasocial = gcnew DataSocialAndHumanDevelopment();
		datasocial-> name = name;
		datasocial-> print = 0;
		datasocial->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnCityA5_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataGovernance^ datagovernance = gcnew DataGovernance();
		datagovernance-> name = name;
		datagovernance->print = 0;
		datagovernance->ShowDialog();
		ManagerPage::Show();
	}

	private: System::Void btnPDisplay1_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DispalyPhysicalEnvironmentAndInfrastructure^ disphy = gcnew DispalyPhysicalEnvironmentAndInfrastructure();
		disphy->role = role;
		disphy->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnPDisplay2_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DispalyEconomic^ diseco = gcnew DispalyEconomic();
		diseco->role = role;
		diseco->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnPDisplay3_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DispalyHealthCareOutcomes^ dishea = gcnew DispalyHealthCareOutcomes();
		dishea->role = role;
		dishea->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnPDisplay4_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DispalySocialAndHumanDevelopment^ dissoc = gcnew DispalySocialAndHumanDevelopment();
		dissoc->role = role;
		dissoc->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnPDisplay5_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DispalyGovernance^ disgov = gcnew DispalyGovernance();
		disgov->role = role;
		disgov->ShowDialog();
		ManagerPage::Show();
	}

	private: System::Void btnQuery1_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataPhysicalEnvironmentAndInfrastructure^ dataphysical = gcnew DataPhysicalEnvironmentAndInfrastructure();
		dataphysical->name = name;
		dataphysical->print = 1;
		dataphysical->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnQuery2_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataEconomic^ dataeconomic = gcnew DataEconomic();
		dataeconomic->name = name;
		dataeconomic->print = 1;
		dataeconomic->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnQuery3_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataHealthCareOutcomes^ datahealth = gcnew DataHealthCareOutcomes();
		datahealth->name = name;
		datahealth->print = 1;
		datahealth->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnQuery4_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataSocialAndHumanDevelopment^ datasocial = gcnew DataSocialAndHumanDevelopment();
		datasocial->name = name;
		datasocial->print = 1;
		datasocial->ShowDialog();
		ManagerPage::Show();
	}
	private: System::Void btnQuery5_Click(System::Object^  sender, System::EventArgs^  e) {
		ManagerPage::Hide();
		DataGovernance^ datagovernance = gcnew DataGovernance();
		datagovernance->name = name;
		datagovernance->print = 1;
		datagovernance->ShowDialog();
		ManagerPage::Show();
	}

	private: System::Void btnHelp1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ path = Application::StartupPath;
		String^ url = "file:///"+path->Replace('\\','/')+"/document.pdf";
		Process^ sortProcess;
		sortProcess = gcnew Process;
		sortProcess->Start(url);
	}
	private: System::Void btnHelp2_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutUs^ aboutus = gcnew AboutUs();
		aboutus->ShowDialog();
	}
	private: System::Void btnHelp3_Click(System::Object^  sender, System::EventArgs^  e) {
		ContactUs^ contactUs = gcnew ContactUs();
		contactUs->ShowDialog();
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
