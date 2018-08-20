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
	/// Summary for DispalyEconomic
	/// </summary>
	public ref class DispalyEconomic : public System::Windows::Forms::Form
	{
	public:
		DispalyEconomic(void)
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
		~DispalyEconomic()
		{
			if (components)
			{
				delete components;
			}
		}

	public: String^ role; 
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::DataGridView^  XMLdataGridView;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->XMLdataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->XMLdataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(115, 637);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 40);
			this->btnClose->TabIndex = 10;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &DispalyEconomic::btnClose_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(328, 637);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(100, 40);
			this->btnUpdate->TabIndex = 9;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &DispalyEconomic::btnUpdate_Click);
			// 
			// XMLdataGridView
			// 
			this->XMLdataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->XMLdataGridView->Location = System::Drawing::Point(40, 180);
			this->XMLdataGridView->Name = L"XMLdataGridView";
			this->XMLdataGridView->Size = System::Drawing::Size(1285, 381);
			this->XMLdataGridView->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(435, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(497, 39);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Electronic Urban Health Record";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(35, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(353, 30);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Economic Data For All Cities";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(399, 21);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Simply Edit Grid Data and Delete Row then Press Update";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(37, 580);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 18);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Note : Please Don\'t Change city Name.";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(1252, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 88;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1252, 45);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 89;
			this->pictureBox2->TabStop = false;
			// 
			// DispalyEconomic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->XMLdataGridView);
			this->Name = L"DispalyEconomic";
			this->Text = L"DispalyEconomic";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &DispalyEconomic::DispalyEconomic_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->XMLdataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	XmlDataDocument mydoc;
	//form load and read all data of Economic and display the Grid view
	private: System::Void DispalyEconomic_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		try
		{
			mydoc.DataSet->ReadXml("..\\App_Data\\Economic.xml");
			XMLdataGridView->DataSource = mydoc.DataSet->DefaultViewManager;
			XMLdataGridView->DataMember = "Economic";
			XMLdataGridView->ReadOnly = true;
			label4->Visible = false;
			label1->Visible = false;
			btnUpdate->Visible = false;
			/*if(role == "Manager")
			{
				XMLdataGridView->ReadOnly = true;
				label4->Visible = false;
				label1->Visible = false;
				btnUpdate->Visible = false;
			}
			else
			{
				XMLdataGridView->ReadOnly = false;
				label4->Visible = true;
				label1->Visible = true;
				btnUpdate->Visible = true;
			}*/
		}
		catch(Exception^ ex)
		{
			MessageBox::Show("Error:"+ ex->Message);
		}
	}
	//Save/update grid data which is exist into grid view....save all if blank is there
	private: System::Void btnUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
		mydoc.DataSet->WriteXml("..\\App_Data\\Economic.xml");
		MessageBox::Show("Update Successful");
		this->Close();
	}
	//close form...
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
