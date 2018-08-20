#pragma once

#include "database.h"
#include "string.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteCity
	/// </summary>
	public ref class DeleteCity : public System::Windows::Forms::Form
	{
	public:
		DeleteCity(void)
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
		~DeleteCity()
		{
			if (components)
			{
				delete components;
			}
		}
	public: database ^ db;
	public: database ^ db1;
	public: database ^ db2;
	public: database ^ db3;
	public: database ^ db4;
	public: database ^ db5;
	private: System::Windows::Forms::Button^  btnClose;
	protected: 
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lblError;
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
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(101, 132);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 40);
			this->btnClose->TabIndex = 11;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &DeleteCity::btnClose_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(251, 132);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(100, 40);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DeleteCity::btnDelete_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(246, 59);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 18);
			this->label1->TabIndex = 7;
			this->label1->Text = L"City Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Location = System::Drawing::Point(45, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(497, 39);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(553, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 30);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblError);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnDelete);
			this->groupBox1->Controls->Add(this->btnClose);
			this->groupBox1->Location = System::Drawing::Point(115, 97);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(450, 194);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(80, 25);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(178, 18);
			this->lblError->TabIndex = 12;
			this->lblError->Text = L"Please Select City Name";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(553, 54);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(106, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// DeleteCity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 374);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"DeleteCity";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeleteCity";
			this->Load += gcnew System::EventHandler(this, &DeleteCity::DeleteCity_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//close form
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	//form load
	private: System::Void DeleteCity_Load_1(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Image = Image::FromFile("logo_uni.png");
		pictureBox2->Image = Image::FromFile("kbs_transparent.png");
		lblError->Hide();

		this->db = gcnew database();
		this->db->read_city_db();
		int l;
		String^ comboString;
		String^ query;
		query = "Name <> '" + "nai" + "'";
		array<DataRow^>^ myRows = db->City->Select(query);
		l = myRows->Length;
		if(myRows->Length > 0)
		{
			for(int i=0; i< l; i++)
			{
				comboString = myRows[i]->default[0]->ToString();
				this->comboBox1->Items->Add(comboString);
			}
		}
	}
	
	//delete Economic data row where that city is exist
	void deleteEconomic(String^ city)
	{
		this->db1 = gcnew database();
		this->db1->read_economic_db();
		String^ query = "City = '" + city + "'";
		array<DataRow^>^ myRows = this->db1->Economic->Select(query);
		if(myRows->Length > 0)
			db1->Economic->Rows->Remove(myRows[0]);
		db1->write_economic_db();
	}
	void deleteGovernance(String^ city)
	{
		this->db2 = gcnew database();
		this->db2->read_governance_db();
		String^ query = "City = '" + city + "'";
		array<DataRow^>^ myRows = this->db2->Governance->Select(query);
		if(myRows->Length > 0)
			db2->Governance->Rows->Remove(myRows[0]);
		db2->write_governance_db();
	}
	void deleteHealth(String^ city)
	{
		this->db3 = gcnew database();
		this->db3->read_health_db();
		String^ query = "City = '" + city + "'";
		array<DataRow^>^ myRows = this->db3->Health->Select(query);
		if(myRows->Length > 0)
			db3->Health->Rows->Remove(myRows[0]);
		db3->write_health_db();
	}
	void deletePhysical(String^ city)
	{
		this->db4 = gcnew database();
		this->db4->read_physical_db();
		String^ query = "City = '" + city + "'";
		array<DataRow^>^ myRows = this->db4->Physical->Select(query);
		if(myRows->Length > 0)
			db4->Physical->Rows->Remove(myRows[0]);
		db4->write_physical_db();
	}
	void deleteSocial(String^ city)
	{
		this->db5 = gcnew database();
		this->db5->read_social_db();
		String^ query = "City = '" + city + "'";
		array<DataRow^>^ myRows = this->db5->Social->Select(query);
		if(myRows->Length > 0)
			db5->Social->Rows->Remove(myRows[0]);
		db5->write_social_db();
	}
	//delete city from xml file and other xml file where this city is exist...
	private: System::Void btnDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if(comboBox1->Text != "")
		{
			String^ query = "Name = '" + comboBox1->Text + "'";
			array<DataRow^>^ myRows = this->db->City->Select(query);

			if(myRows->Length > 0)
			{
				db->City->Rows->Remove(myRows[0]);

				deleteEconomic(comboBox1->Text);
				deleteGovernance(comboBox1->Text);
				deleteHealth(comboBox1->Text);
				deletePhysical(comboBox1->Text);
				deleteSocial(comboBox1->Text);

				//clear_fields();
				MessageBox::Show( "Record data deleted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::None );
			}
			else
			{
				MessageBox::Show( "No data found on this date", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning );
			}

			db->write_city_db();
			DeleteCity::Hide();
		}
		else
			lblError->Show();

	}


};
}
