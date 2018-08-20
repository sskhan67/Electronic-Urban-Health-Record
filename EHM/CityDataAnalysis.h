#pragma once

#include"database.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CityDataAnalysis
	/// </summary>
	public ref class CityDataAnalysis : public System::Windows::Forms::Form
	{
	public:
		CityDataAnalysis(void)
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
		~CityDataAnalysis()
		{
			if (components)
			{
				delete components;
			}
		}
	public: database^ db;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	public: 
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  Pic01;
	private: System::Windows::Forms::PictureBox^  Pic02;
	private: System::Windows::Forms::PictureBox^  Pic07;
	private: System::Windows::Forms::PictureBox^  Pic06;
	private: System::Windows::Forms::PictureBox^  Pic05;
	private: System::Windows::Forms::PictureBox^  Pic04;
	private: System::Windows::Forms::PictureBox^  Pic03;





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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic07))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic01))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
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
			this->groupBox1->Location = System::Drawing::Point(42, 187);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(628, 466);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// Pic02
			// 
			this->Pic02->Location = System::Drawing::Point(321, 133);
			this->Pic02->Name = L"Pic02";
			this->Pic02->Size = System::Drawing::Size(288, 36);
			this->Pic02->TabIndex = 44;
			this->Pic02->TabStop = false;
			// 
			// Pic07
			// 
			this->Pic07->Location = System::Drawing::Point(321, 416);
			this->Pic07->Name = L"Pic07";
			this->Pic07->Size = System::Drawing::Size(288, 36);
			this->Pic07->TabIndex = 43;
			this->Pic07->TabStop = false;
			// 
			// Pic06
			// 
			this->Pic06->Location = System::Drawing::Point(321, 359);
			this->Pic06->Name = L"Pic06";
			this->Pic06->Size = System::Drawing::Size(288, 36);
			this->Pic06->TabIndex = 42;
			this->Pic06->TabStop = false;
			// 
			// Pic05
			// 
			this->Pic05->Location = System::Drawing::Point(321, 302);
			this->Pic05->Name = L"Pic05";
			this->Pic05->Size = System::Drawing::Size(288, 36);
			this->Pic05->TabIndex = 41;
			this->Pic05->TabStop = false;
			// 
			// Pic04
			// 
			this->Pic04->Location = System::Drawing::Point(321, 245);
			this->Pic04->Name = L"Pic04";
			this->Pic04->Size = System::Drawing::Size(288, 36);
			this->Pic04->TabIndex = 40;
			this->Pic04->TabStop = false;
			// 
			// Pic03
			// 
			this->Pic03->Location = System::Drawing::Point(321, 190);
			this->Pic03->Name = L"Pic03";
			this->Pic03->Size = System::Drawing::Size(288, 36);
			this->Pic03->TabIndex = 39;
			this->Pic03->TabStop = false;
			// 
			// Pic01
			// 
			this->Pic01->Location = System::Drawing::Point(321, 78);
			this->Pic01->Name = L"Pic01";
			this->Pic01->Size = System::Drawing::Size(288, 36);
			this->Pic01->TabIndex = 37;
			this->Pic01->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Garamond", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(318, 33);
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
			this->label10->Location = System::Drawing::Point(34, 33);
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
			this->label7->Location = System::Drawing::Point(31, 416);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 18);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Green spaces";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 359);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 18);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Alcohol outlets";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 302);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(207, 18);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Access to improved sanitation  ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 18);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Access to safe water";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 18);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Work related injuries";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(31, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 18);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Solid fuels";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(31, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(241, 36);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Household served by municipal solid\r\nwaste management system";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Location = System::Drawing::Point(42, 36);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(628, 130);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"City Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Policy Domain Name";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(221, 86);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 26);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &CityDataAnalysis::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Garamond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Physical Environment And Infrastructure", L"Economic", 
				L"Health Care Outcomes", L"Social And Human Development", L"Governance"});
			this->comboBox1->Location = System::Drawing::Point(221, 27);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(329, 26);
			this->comboBox1->TabIndex = 4;
			// 
			// CityDataAnalysis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 750);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CityDataAnalysis";
			this->Text = L"CityDataAnalysis";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &CityDataAnalysis::CityDataAnalysis_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic07))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Pic01))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void CityDataAnalysis_Load(System::Object^  sender, System::EventArgs^  e) {
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
				this->comboBox2->Items->Add(comboString);
			}
		}

		//pbHouse->Image = Image::FromFile("red05.png");
	}
	void BaseLine(int val, int index)
	{
		if(val > 90)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("red05.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("red05.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("red05.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("red05.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("red05.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("red05.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("red05.png");
		}
		else if(val > 80)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("red04.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("red04.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("red04.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("red04.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("red04.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("red04.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("red04.png");
		}
		else if(val > 70)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("red03.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("red03.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("red03.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("red03.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("red03.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("red03.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("red03.png");
		}
		else if(val > 60)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("red02.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("red02.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("red02.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("red02.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("red02.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("red02.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("red02.png");
		}
		else if(val > 50)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("red01.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("red01.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("red01.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("red01.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("red01.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("red01.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("red01.png");
		}
		else if(val > 40)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("green01.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("green01.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("green01.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("green01.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("green01.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("green01.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("green01.png");
		}
		else if(val > 30)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("green02.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("green02.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("green02.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("green02.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("green02.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("green02.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("green02.png");
		}
		else if(val > 20)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("green03.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("green03.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("green03.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("green03.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("green03.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("green03.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("green03.png");
		}
		else if(val > 10)
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("green04.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("green04.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("green04.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("green04.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("green04.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("green04.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("green04.png");
		}
		else
		{
			if(index == 1)
				Pic01->Image = Image::FromFile("green05.png");
			else if(index == 2)
				Pic02->Image = Image::FromFile("green05.png");
			else if(index == 3)
				Pic03->Image = Image::FromFile("green05.png");
			else if(index == 4)
				Pic04->Image = Image::FromFile("green05.png");
			else if(index == 5)
				Pic05->Image = Image::FromFile("green05.png");
			else if(index == 6)
				Pic06->Image = Image::FromFile("green05.png");
			else if(index == 7)
				Pic07->Image = Image::FromFile("green05.png");
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->db->read_physical_db();
		String^ comboString;
		comboString = comboBox2->Text;
		String^ query;
		query = "City = '" + comboString + "'";
		array<DataRow^>^ myRows = db->Physical->Select(query);
		int sign;

		if(myRows->Length > 0)
		{
			BaseLine(int::Parse(myRows[0]->default[1]->ToString()), 1);
			BaseLine(int::Parse(myRows[0]->default[2]->ToString()), 2);
			BaseLine(int::Parse(myRows[0]->default[3]->ToString()), 3);
			BaseLine(int::Parse(myRows[0]->default[4]->ToString()), 4);
			BaseLine(int::Parse(myRows[0]->default[5]->ToString()), 5);
			BaseLine(int::Parse(myRows[0]->default[6]->ToString()), 6);
			BaseLine(int::Parse(myRows[0]->default[7]->ToString()), 7);
		}
	}
};
}
