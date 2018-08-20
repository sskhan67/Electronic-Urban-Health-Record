#pragma once

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// Summary for AccessAllCities
	/// </summary>
	public ref class AccessAllCities : public System::Windows::Forms::Form
	{
	public:
		AccessAllCities(void)
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
		~AccessAllCities()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  XMLDataGridView;
	protected: 

	protected: 

	protected: 

	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
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
			this->XMLDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->XMLDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// XMLDataGridView
			// 
			this->XMLDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->XMLDataGridView->Location = System::Drawing::Point(56, 172);
			this->XMLDataGridView->Name = L"XMLDataGridView";
			this->XMLDataGridView->ReadOnly = true;
			this->XMLDataGridView->Size = System::Drawing::Size(945, 314);
			this->XMLDataGridView->TabIndex = 0;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(56, 538);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(380, 40);
			this->btnUpdate->TabIndex = 2;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &AccessAllCities::btnUpdate_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(53, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(399, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Simply Edit Grid Data and Delete Row then Press Update";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(56, 597);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(380, 40);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &AccessAllCities::btnClose_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(52, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 30);
			this->label1->TabIndex = 5;
			this->label1->Text = L"All Cities Information";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(198, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(497, 39);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(895, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(55, 492);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(283, 18);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Note : Please Don\'t Change city Name.";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(895, 62);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// AccessAllCities
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1041, 684);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->XMLDataGridView);
			this->Name = L"AccessAllCities";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AccessAllCities";
			this->Load += gcnew System::EventHandler(this, &AccessAllCities::AccessAllCities_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->XMLDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	XmlDataDocument mydoc ;
	//Close Button
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	//Update Grid Data
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
		mydoc.DataSet->WriteXml("..\\App_Data\\City.xml");	//Write All Data of Grid
		MessageBox::Show("Update Successful");
		this->Close();
	}
	//Show All city info. from XML file
	private: System::Void AccessAllCities_Load(System::Object^  sender, System::EventArgs^  e) {
		label2->Hide();
		label3->Hide();
		btnUpdate->Hide();
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		try
		{
			mydoc.DataSet->ReadXml("..\\App_Data\\City.xml"); // Read XML file
			XMLDataGridView->DataSource = mydoc.DataSet->DefaultViewManager;
			XMLDataGridView->DataMember = "City";
		}
		catch(Exception^ ex)
		{
			MessageBox::Show("Error:"+ ex->Message);
		}
	}
};
}
