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
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	public: database ^ db;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected: 
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  btnCreate;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblUserNameError;
	private: System::Windows::Forms::Label^  lblPasswordError;
	private: System::Windows::Forms::Label^  lblRoleError;
	private: System::Windows::Forms::Label^  lblUserNameError2;
	private: System::Windows::Forms::Label^  lblPasswordError2;
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblPasswordError2 = (gcnew System::Windows::Forms::Label());
			this->lblUserNameError2 = (gcnew System::Windows::Forms::Label());
			this->lblRoleError = (gcnew System::Windows::Forms::Label());
			this->lblPasswordError = (gcnew System::Windows::Forms::Label());
			this->lblUserNameError = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblPasswordError2);
			this->groupBox2->Controls->Add(this->lblUserNameError2);
			this->groupBox2->Controls->Add(this->lblRoleError);
			this->groupBox2->Controls->Add(this->lblPasswordError);
			this->groupBox2->Controls->Add(this->lblUserNameError);
			this->groupBox2->Controls->Add(this->btnExit);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->btnCreate);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox2->Location = System::Drawing::Point(140, 83);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(489, 509);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// lblPasswordError2
			// 
			this->lblPasswordError2->AutoSize = true;
			this->lblPasswordError2->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPasswordError2->ForeColor = System::Drawing::Color::Red;
			this->lblPasswordError2->Location = System::Drawing::Point(251, 246);
			this->lblPasswordError2->Name = L"lblPasswordError2";
			this->lblPasswordError2->Size = System::Drawing::Size(89, 12);
			this->lblPasswordError2->TabIndex = 16;
			this->lblPasswordError2->Text = L"*Password Please";
			// 
			// lblUserNameError2
			// 
			this->lblUserNameError2->AutoSize = true;
			this->lblUserNameError2->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblUserNameError2->ForeColor = System::Drawing::Color::Red;
			this->lblUserNameError2->Location = System::Drawing::Point(251, 195);
			this->lblUserNameError2->Name = L"lblUserNameError2";
			this->lblUserNameError2->Size = System::Drawing::Size(64, 12);
			this->lblUserNameError2->TabIndex = 16;
			this->lblUserNameError2->Text = L"*User Name";
			// 
			// lblRoleError
			// 
			this->lblRoleError->AutoSize = true;
			this->lblRoleError->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblRoleError->ForeColor = System::Drawing::Color::Red;
			this->lblRoleError->Location = System::Drawing::Point(251, 395);
			this->lblRoleError->Name = L"lblRoleError";
			this->lblRoleError->Size = System::Drawing::Size(57, 12);
			this->lblRoleError->TabIndex = 15;
			this->lblRoleError->Text = L"Select Role";
			// 
			// lblPasswordError
			// 
			this->lblPasswordError->AutoSize = true;
			this->lblPasswordError->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblPasswordError->ForeColor = System::Drawing::Color::Red;
			this->lblPasswordError->Location = System::Drawing::Point(251, 296);
			this->lblPasswordError->Name = L"lblPasswordError";
			this->lblPasswordError->Size = System::Drawing::Size(100, 12);
			this->lblPasswordError->TabIndex = 14;
			this->lblPasswordError->Text = L"Password not match";
			// 
			// lblUserNameError
			// 
			this->lblUserNameError->AutoSize = true;
			this->lblUserNameError->Font = (gcnew System::Drawing::Font(L"Garamond", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblUserNameError->ForeColor = System::Drawing::Color::Red;
			this->lblUserNameError->Location = System::Drawing::Point(251, 195);
			this->lblUserNameError->Name = L"lblUserNameError";
			this->lblUserNameError->Size = System::Drawing::Size(96, 12);
			this->lblUserNameError->TabIndex = 13;
			this->lblUserNameError->Text = L"Used ! Try Another";
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(179, 433);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(100, 40);
			this->btnExit->TabIndex = 12;
			this->btnExit->Text = L"Close";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Registration::btnExit_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label9->Location = System::Drawing::Point(230, 61);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(199, 39);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Registration";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(83, 369);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 18);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Role As";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(86, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(128, 128);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// btnCreate
			// 
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCreate->Location = System::Drawing::Point(302, 433);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(100, 40);
			this->btnCreate->TabIndex = 9;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &Registration::btnCreate_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Admin", L"Manager"});
			this->comboBox1->Location = System::Drawing::Point(250, 366);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(154, 26);
			this->comboBox1->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(250, 317);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(154, 25);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(250, 268);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(154, 25);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(250, 218);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(154, 25);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(250, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 25);
			this->textBox1->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(83, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 18);
			this->label6->TabIndex = 3;
			this->label6->Text = L"E-Mail";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(83, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 18);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Retype Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(83, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(83, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"User Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(124, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(497, 39);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(643, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(643, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 607);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
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

	/*Loading Function*/
	private: System::Void Registration_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		pictureBox3->Image = Image::FromFile("Registration.png");
		lblUserNameError->Hide();
		lblUserNameError2->Hide();
		lblPasswordError->Hide();
		lblPasswordError2->Hide();
		lblRoleError->Hide();		
	}
	/*User Create Function*/
	private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e) {
		/*Checking User already Exist or Not*/
		this->db = gcnew database();
		this->db->read_db();
		int l;
		String^ query;
		query = "UserName = '" + textBox1->Text + "'";
		array<DataRow^>^ myRows = db->Registration->Select(query);
		l = myRows->Length;
		if(myRows->Length > 0)		/*User Exist*/
		{
			lblUserNameError->Show();
			lblUserNameError2->Hide();
			lblPasswordError->Hide();
			lblPasswordError2->Hide();
			lblRoleError->Hide();
			
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
		}
		else if(textBox1->Text == "")
		{
			lblUserNameError->Hide();
			lblUserNameError2->Show();
			lblPasswordError->Hide();
			lblPasswordError2->Hide();
			lblRoleError->Hide();
		}
		else			/*User Not Exist*/
		{
			/*Insert New User in XML file*/
			String^ path = "..\\App_Data\\Registration.xml";
			XmlDocument^ doc = gcnew XmlDocument();

			//If there is no current file, then create a new one
			XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
			XmlComment^ comment = doc->CreateComment("This is an XML Generated File");
			if (!System::IO::File::Exists(path))
			{
				//Create necessary nodes

				declaration = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");
				comment = doc->CreateComment("This is an XML Generated File");
				doc->InnerXml = "<?xml version='1.0' standalone='yes'?><EHM><Registration></Registration></EHM>";
			}
			else //If there is already a file
			{
				//Load the XML File
				doc->Load(path);
			}
			//Get the root element
			XmlElement^ root = doc->CreateElement("EHM");
			XmlElement^ Subroot = doc->CreateElement("Registration");

			XmlElement ^ UserName = doc->CreateElement("UserName");
			XmlElement^ Password = doc->CreateElement("Password");
			XmlElement^ Email = doc->CreateElement("Email");
			XmlElement ^ Role = doc->CreateElement("Role");

			//Add the values for each nodes
			a1 = textBox1->Text;
			a2 = textBox2->Text;
			a5 = textBox3->Text;
			a3 = textBox4->Text;
			a4 = comboBox1->Text;
			if(a2 == a5 && a4 != "" && a2 != "" && a5 != "")
			{
				UserName->InnerText = a1;
				Password->InnerText = a2;
				Email->InnerText = a3;
				Role->InnerText = a4;

				XmlNode^ docNode = doc->CreateXmlDeclaration("1.0", "UTF-8", "yes");				 
				doc->DocumentElement->AppendChild( Subroot );
				Subroot->AppendChild( UserName );
				Subroot->AppendChild( Password );
				Subroot->AppendChild( Email );
				Subroot->AppendChild( Role );
				doc->Save(path);

				MessageBox::Show("Update Successful");
				textBox1->Text="";
				textBox2->Text="";
				textBox3->Text="";
				textBox4->Text="";
				comboBox1->Text="";
				this->Close();
			}
			else
			{
				if(a2 != a5)
				{
					lblUserNameError->Hide();
					lblUserNameError2->Hide();
					lblPasswordError->Show();
					lblPasswordError2->Hide();
					lblRoleError->Hide();
					textBox2->Text="";
					textBox3->Text="";
				}
				else if(a2 == "" || a5 == "")
				{
					lblUserNameError->Hide();
					lblUserNameError2->Hide();
					lblPasswordError->Hide();
					lblPasswordError2->Show();
					lblRoleError->Hide();
					textBox2->Text="";
					textBox3->Text="";
				}
				else
				{
					lblUserNameError->Hide();
					lblUserNameError2->Hide();
					lblPasswordError->Hide();
					lblPasswordError2->Hide();
					lblRoleError->Show();
				}
			}			
		}
	}
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
