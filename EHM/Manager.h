#pragma once

#include "DispalyPhysicalEnvironmentAndInfrastructure.h"
#include "DispalyEconomic.h"
#include "DispalyGovernance.h"
#include "DispalyHealthCareOutcomes.h"
#include "DispalySocialAndHumanDevelopment.h"
#include "CityDataAnalysis.h"
#include "DataPhysicalEnvironmentAndInfrastructure.h"
#include "DataEconomic.h"
#include "DataGovernance.h"
#include "DataHealthCareOutcomes.h"
#include "DataSocialAndHumanDevelopment.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Manager
	/// </summary>
	public ref class Manager : public System::Windows::Forms::Form
	{
	public:
		Manager(void)
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
		~Manager()
		{
			if (components)
			{
				delete components;
			}
		}
	public: String^ name;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  serviceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dispalyAllDATATableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  physicalEnvironmentAndInfrastructureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  economicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  healthCareOutcomesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  socialAndHumanDevelopmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  governanceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cityDataAnalysisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  physicalEnvironmentAndInfrastructureToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  economicToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  healthCareOutcomesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  socialAndHumanDevelopmentToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  governanceToolStripMenuItem1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Manager::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->serviceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dispalyAllDATATableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->economicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->healthCareOutcomesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->socialAndHumanDevelopmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->governanceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cityDataAnalysisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->economicToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->healthCareOutcomesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->socialAndHumanDevelopmentToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->governanceToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->serviceToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(962, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// serviceToolStripMenuItem
			// 
			this->serviceToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->dispalyAllDATATableToolStripMenuItem, 
				this->cityDataAnalysisToolStripMenuItem, this->logOutToolStripMenuItem});
			this->serviceToolStripMenuItem->Name = L"serviceToolStripMenuItem";
			this->serviceToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->serviceToolStripMenuItem->Text = L"Service";
			// 
			// dispalyAllDATATableToolStripMenuItem
			// 
			this->dispalyAllDATATableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->physicalEnvironmentAndInfrastructureToolStripMenuItem, 
				this->economicToolStripMenuItem, this->healthCareOutcomesToolStripMenuItem, this->socialAndHumanDevelopmentToolStripMenuItem, 
				this->governanceToolStripMenuItem});
			this->dispalyAllDATATableToolStripMenuItem->Name = L"dispalyAllDATATableToolStripMenuItem";
			this->dispalyAllDATATableToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->dispalyAllDATATableToolStripMenuItem->Text = L"Dispaly All DATA (Table)";
			// 
			// physicalEnvironmentAndInfrastructureToolStripMenuItem
			// 
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Name = L"physicalEnvironmentAndInfrastructureToolStripMenuItem";
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Text = L"Physical environment and infrastructure";
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Click += gcnew System::EventHandler(this, &Manager::physicalEnvironmentAndInfrastructureToolStripMenuItem_Click);
			// 
			// economicToolStripMenuItem
			// 
			this->economicToolStripMenuItem->Name = L"economicToolStripMenuItem";
			this->economicToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->economicToolStripMenuItem->Text = L"Economic";
			this->economicToolStripMenuItem->Click += gcnew System::EventHandler(this, &Manager::economicToolStripMenuItem_Click);
			// 
			// healthCareOutcomesToolStripMenuItem
			// 
			this->healthCareOutcomesToolStripMenuItem->Name = L"healthCareOutcomesToolStripMenuItem";
			this->healthCareOutcomesToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->healthCareOutcomesToolStripMenuItem->Text = L"Health care outcomes";
			this->healthCareOutcomesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Manager::healthCareOutcomesToolStripMenuItem_Click);
			// 
			// socialAndHumanDevelopmentToolStripMenuItem
			// 
			this->socialAndHumanDevelopmentToolStripMenuItem->Name = L"socialAndHumanDevelopmentToolStripMenuItem";
			this->socialAndHumanDevelopmentToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->socialAndHumanDevelopmentToolStripMenuItem->Text = L"Social and human development";
			this->socialAndHumanDevelopmentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Manager::socialAndHumanDevelopmentToolStripMenuItem_Click);
			// 
			// governanceToolStripMenuItem
			// 
			this->governanceToolStripMenuItem->Name = L"governanceToolStripMenuItem";
			this->governanceToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->governanceToolStripMenuItem->Text = L"Governance";
			this->governanceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Manager::governanceToolStripMenuItem_Click);
			// 
			// cityDataAnalysisToolStripMenuItem
			// 
			this->cityDataAnalysisToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->physicalEnvironmentAndInfrastructureToolStripMenuItem1, 
				this->economicToolStripMenuItem1, this->healthCareOutcomesToolStripMenuItem1, this->socialAndHumanDevelopmentToolStripMenuItem1, 
				this->governanceToolStripMenuItem1});
			this->cityDataAnalysisToolStripMenuItem->Name = L"cityDataAnalysisToolStripMenuItem";
			this->cityDataAnalysisToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->cityDataAnalysisToolStripMenuItem->Text = L"City Data Analysis";
			// 
			// physicalEnvironmentAndInfrastructureToolStripMenuItem1
			// 
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem1->Name = L"physicalEnvironmentAndInfrastructureToolStripMenuItem1";
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem1->Text = L"Physical Environment And Infrastructure";
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Manager::physicalEnvironmentAndInfrastructureToolStripMenuItem1_Click);
			// 
			// economicToolStripMenuItem1
			// 
			this->economicToolStripMenuItem1->Name = L"economicToolStripMenuItem1";
			this->economicToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->economicToolStripMenuItem1->Text = L"Economic";
			this->economicToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Manager::economicToolStripMenuItem1_Click);
			// 
			// healthCareOutcomesToolStripMenuItem1
			// 
			this->healthCareOutcomesToolStripMenuItem1->Name = L"healthCareOutcomesToolStripMenuItem1";
			this->healthCareOutcomesToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->healthCareOutcomesToolStripMenuItem1->Text = L"Health Care Outcomes";
			this->healthCareOutcomesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Manager::healthCareOutcomesToolStripMenuItem1_Click);
			// 
			// socialAndHumanDevelopmentToolStripMenuItem1
			// 
			this->socialAndHumanDevelopmentToolStripMenuItem1->Name = L"socialAndHumanDevelopmentToolStripMenuItem1";
			this->socialAndHumanDevelopmentToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->socialAndHumanDevelopmentToolStripMenuItem1->Text = L"Social And Human Development";
			this->socialAndHumanDevelopmentToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Manager::socialAndHumanDevelopmentToolStripMenuItem1_Click);
			// 
			// governanceToolStripMenuItem1
			// 
			this->governanceToolStripMenuItem1->Name = L"governanceToolStripMenuItem1";
			this->governanceToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->governanceToolStripMenuItem1->Text = L"Governance";
			this->governanceToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Manager::governanceToolStripMenuItem1_Click);
			// 
			// logOutToolStripMenuItem
			// 
			this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			this->logOutToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->logOutToolStripMenuItem->Text = L"Log Out";
			this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Manager::logOutToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 234);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(283, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(12, 301);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(497, 39);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 38);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(450, 128);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// Manager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 493);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Manager";
			this->Text = L"Manager";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void physicalEnvironmentAndInfrastructureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DispalyPhysicalEnvironmentAndInfrastructure^ physical = gcnew DispalyPhysicalEnvironmentAndInfrastructure();
		physical->ShowDialog();
		Manager::Show();
	}
	private: System::Void logOutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	/*private: System::Void displayDATACityToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		CityDataAnalysis^ analysis = gcnew CityDataAnalysis();
		analysis->ShowDialog();
		Manager::Show();
	private: System::Void economicToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void governanceToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
}*/
	private: System::Void economicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DispalyEconomic^ economic = gcnew DispalyEconomic();
		economic->ShowDialog();
		Manager::Show();
	}
	private: System::Void healthCareOutcomesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DispalyHealthCareOutcomes^ health = gcnew DispalyHealthCareOutcomes();
		health->ShowDialog();
		Manager::Show();
	}
	private: System::Void socialAndHumanDevelopmentToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DispalySocialAndHumanDevelopment^ social = gcnew DispalySocialAndHumanDevelopment();
		social->ShowDialog();
		Manager::Show();
	}
	private: System::Void governanceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DispalyGovernance^ governance = gcnew DispalyGovernance();
		governance->ShowDialog();
		Manager::Show();
	}
	private: System::Void physicalEnvironmentAndInfrastructureToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DataPhysicalEnvironmentAndInfrastructure^ dataphysical = gcnew DataPhysicalEnvironmentAndInfrastructure();
		dataphysical-> name = name;
		dataphysical->ShowDialog();
		Manager::Show();
	}
	private: System::Void economicToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DataEconomic^ dataeconomic = gcnew DataEconomic();
		dataeconomic->name = name;
		dataeconomic->ShowDialog();
		Manager::Show();
	}
	private: System::Void healthCareOutcomesToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DataHealthCareOutcomes^ datahealth = gcnew DataHealthCareOutcomes();
		datahealth-> name = name;
		datahealth->ShowDialog();
		Manager::Show();
	}
	private: System::Void socialAndHumanDevelopmentToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DataSocialAndHumanDevelopment^ datasocial = gcnew DataSocialAndHumanDevelopment();
		datasocial-> name = name;
		datasocial->ShowDialog();
		Manager::Show();
	}
	private: System::Void governanceToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Manager::Hide();
		DataGovernance^ datagovernance = gcnew DataGovernance();
		datagovernance-> name = name;
		datagovernance->ShowDialog();
		Manager::Show();
	}
};
}
