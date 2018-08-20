#pragma once

#include "database.h"
#include "Admin.h"
#include "Manager.h"
#include "AboutUs.h"
#include "AdminPage.h"
#include "ManagerPage.h"
#include "ContactUs.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Threading;
	using namespace System::ComponentModel;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::TextBox^  txtUserName;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblError;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpManualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutUsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contactUsToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
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
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpManualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblError);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->btnLogin);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->txtUserName);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(290, 178);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(614, 333);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(195, 141);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(228, 18);
			this->lblError->TabIndex = 7;
			this->lblError->Text = L"Invalid User Name or Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label7->Location = System::Drawing::Point(307, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 39);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Login";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(182, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 129);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(182, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(333, 263);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(100, 40);
			this->btnLogin->TabIndex = 3;
			this->btnLogin->Text = L"login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(320, 219);
			this->txtPassword->MaxLength = 7;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(113, 25);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// txtUserName
			// 
			this->txtUserName->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtUserName->Location = System::Drawing::Point(320, 172);
			this->txtUserName->MaxLength = 15;
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(113, 25);
			this->txtUserName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(179, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(179, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Name";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1178, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->helpManualToolStripMenuItem, 
				this->aboutUsToolStripMenuItem, this->contactUsToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// helpManualToolStripMenuItem
			// 
			this->helpManualToolStripMenuItem->Name = L"helpManualToolStripMenuItem";
			this->helpManualToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->helpManualToolStripMenuItem->Text = L"Help Manual";
			this->helpManualToolStripMenuItem->Click += gcnew System::EventHandler(this, &Login::helpManualToolStripMenuItem_Click);
			// 
			// aboutUsToolStripMenuItem
			// 
			this->aboutUsToolStripMenuItem->Name = L"aboutUsToolStripMenuItem";
			this->aboutUsToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->aboutUsToolStripMenuItem->Text = L"About Us";
			this->aboutUsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Login::aboutUsToolStripMenuItem_Click);
			// 
			// contactUsToolStripMenuItem
			// 
			this->contactUsToolStripMenuItem->Name = L"contactUsToolStripMenuItem";
			this->contactUsToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->contactUsToolStripMenuItem->Text = L"Contact Us";
			this->contactUsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Login::contactUsToolStripMenuItem_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(290, 75);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 85);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(604, 72);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 90);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(396, 517);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(395, 225);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 750);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Login";
			this->Text = L"Login";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//variable declare
		XmlDataDocument mydoc;
		String^ a1;
		String^ a2;
		String^ a3;
		String^ a4;
		String^ a5;
		int CurrentRow;

	//close form
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

#pragma region LOGIN
	//login validation and go to requirement form (admin or manager)
private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {

	database ^ db = gcnew database();
	if(db->read_db() == 0)
	{
		String^ UserName;
		String^ Password;
		String^ Role;
		String^ query;

		UserName = this->txtUserName->Text;
		Password = this->txtPassword->Text;
		query = "UserName = '" + UserName + "'";
		array<DataRow^>^ myRows = db->Registration->Select(query);
		int l = myRows->Length;
		if(myRows->Length > 0)
		{
			if(myRows[0]->default[1]->ToString() == Password)
			{
				Role = myRows[0]->default[3]->ToString();
				this->txtUserName->Text = "";
				this->txtPassword->Text = "";
				if(Role == "Admin")
				{
					lblError->Hide();
					Login::Hide();
					/*Admin^ admin = gcnew Admin();
					admin-> name = myRows[0]->default[0]->ToString();
					admin->ShowDialog();*/
					AdminPage^ adminPage = gcnew AdminPage();
					adminPage-> name = myRows[0]->default[0]->ToString();
					adminPage-> role = myRows[0]->default[3]->ToString();
					adminPage->ShowDialog();
					Login::Show();
				}
				else if(Role == "Manager")
				{
					lblError->Hide();
					Login::Hide();
					/*Manager^ manager = gcnew Manager();
					manager-> name = myRows[0]->default[0]->ToString();
					manager->ShowDialog();*/
					ManagerPage^ managerPage = gcnew ManagerPage();
					managerPage-> name = myRows[0]->default[0]->ToString();
					managerPage-> role = myRows[0]->default[3]->ToString();
					managerPage->ShowDialog();
					Login::Show();
				}
			}
			else
				lblError->Show();
		}
		else
			lblError->Show();
	}
}
#pragma endregion LOGIN
	//form load
	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
		lblError->Hide(); // error hide at first
		pictureBox1->Image = Image::FromFile("login.png"); //image load
		pictureBox2->Image = Image::FromFile("logo_uni_mid.png");
		pictureBox3->Image = Image::FromFile("kbs_transparent_mid.png");
		pictureBox4->Image = Image::FromFile("Urban_mid.jpg");

	}
	//open about us page
	private: System::Void aboutUsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutUs^ aboutus = gcnew AboutUs();
		aboutus->ShowDialog();
	}
	//open help file
	private: System::Void helpManualToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ path = Application::StartupPath;
		String^ url = "file:///"+path->Replace('\\','/')+"/document.pdf";
		Process^ sortProcess;
		sortProcess = gcnew Process;
		sortProcess->Start(url);
	}
	//open contact us page 
	private: System::Void contactUsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		ContactUs^ contactUs = gcnew ContactUs();
		contactUs->ShowDialog();
	}
};
}
