#pragma once

#include "NewCity.h"
#include "CityModification.h"
#include "ChangeCityName.h"
#include "AccessAllCities.h"
#include "DeleteCity.h"
#include "ChangeCityInfo.h"
#include "Physical environment and infrastructure.h"
#include "Economic.h"
#include "Governance.h"
#include "Health care outcomes.h"
#include "Social and human development.h"
#include "DispalyEconomic.h"
#include "DispalyGovernance.h"
#include "DispalyHealthCareOutcomes.h"
#include "DispalyPhysicalEnvironmentAndInfrastructure.h"
#include "DispalySocialAndHumanDevelopment.h"
#include "Registration.h"
#include "AboutUs.h"
#include "ChangeUserInfo.h"

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	public : String^ name;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  createANewCityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  modificaitonCityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  accessToDataOfAllCitiesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  changeCityNameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  changeACityInformationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteACityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dataEntryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  physicalEnvironmentInfrastructureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  economicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  healthCareOutcomesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  socialAndHumanDevelopmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  governanceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  policyDomainDisplayDataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  physicalEnvironmentAndInfrastructureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  economicToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  healthCareOutcomesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  socialAndHumanDevelopmentToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  governanceToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  registrationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewHelpManualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutUsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  createUserToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editUserToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteUserToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createANewCityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificaitonCityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeCityNameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeACityInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteACityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->accessToDataOfAllCitiesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataEntryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->physicalEnvironmentInfrastructureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->economicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->healthCareOutcomesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->socialAndHumanDevelopmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->governanceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->policyDomainDisplayDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->economicToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->healthCareOutcomesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->socialAndHumanDevelopmentToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->governanceToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registrationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createUserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editUserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteUserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewHelpManualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->adminToolStripMenuItem, 
				this->dataEntryToolStripMenuItem, this->policyDomainDisplayDataToolStripMenuItem, this->registrationToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(965, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->createANewCityToolStripMenuItem, 
				this->modificaitonCityToolStripMenuItem, this->accessToDataOfAllCitiesToolStripMenuItem, this->exitToolStripMenuItem});
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->adminToolStripMenuItem->Text = L"Services";
			// 
			// createANewCityToolStripMenuItem
			// 
			this->createANewCityToolStripMenuItem->Name = L"createANewCityToolStripMenuItem";
			this->createANewCityToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->createANewCityToolStripMenuItem->Text = L"Create A New City";
			this->createANewCityToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::createANewCityToolStripMenuItem_Click);
			// 
			// modificaitonCityToolStripMenuItem
			// 
			this->modificaitonCityToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->changeCityNameToolStripMenuItem, 
				this->changeACityInformationToolStripMenuItem, this->deleteACityToolStripMenuItem});
			this->modificaitonCityToolStripMenuItem->Name = L"modificaitonCityToolStripMenuItem";
			this->modificaitonCityToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->modificaitonCityToolStripMenuItem->Text = L"Modificaiton City";
			// 
			// changeCityNameToolStripMenuItem
			// 
			this->changeCityNameToolStripMenuItem->Name = L"changeCityNameToolStripMenuItem";
			this->changeCityNameToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->changeCityNameToolStripMenuItem->Text = L"Change City Name";
			this->changeCityNameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::changeCityNameToolStripMenuItem_Click);
			// 
			// changeACityInformationToolStripMenuItem
			// 
			this->changeACityInformationToolStripMenuItem->Name = L"changeACityInformationToolStripMenuItem";
			this->changeACityInformationToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->changeACityInformationToolStripMenuItem->Text = L"Change A City Information";
			this->changeACityInformationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::changeACityInformationToolStripMenuItem_Click);
			// 
			// deleteACityToolStripMenuItem
			// 
			this->deleteACityToolStripMenuItem->Name = L"deleteACityToolStripMenuItem";
			this->deleteACityToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->deleteACityToolStripMenuItem->Text = L"Delete A City";
			this->deleteACityToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::deleteACityToolStripMenuItem_Click);
			// 
			// accessToDataOfAllCitiesToolStripMenuItem
			// 
			this->accessToDataOfAllCitiesToolStripMenuItem->Name = L"accessToDataOfAllCitiesToolStripMenuItem";
			this->accessToDataOfAllCitiesToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->accessToDataOfAllCitiesToolStripMenuItem->Text = L"Access To Data Of All Cities";
			this->accessToDataOfAllCitiesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::accessToDataOfAllCitiesToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::exitToolStripMenuItem_Click);
			// 
			// dataEntryToolStripMenuItem
			// 
			this->dataEntryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->physicalEnvironmentInfrastructureToolStripMenuItem, 
				this->economicToolStripMenuItem, this->healthCareOutcomesToolStripMenuItem, this->socialAndHumanDevelopmentToolStripMenuItem, 
				this->governanceToolStripMenuItem});
			this->dataEntryToolStripMenuItem->Name = L"dataEntryToolStripMenuItem";
			this->dataEntryToolStripMenuItem->Size = System::Drawing::Size(163, 20);
			this->dataEntryToolStripMenuItem->Text = L"Policy Domain (Insert Data)";
			// 
			// physicalEnvironmentInfrastructureToolStripMenuItem
			// 
			this->physicalEnvironmentInfrastructureToolStripMenuItem->Name = L"physicalEnvironmentInfrastructureToolStripMenuItem";
			this->physicalEnvironmentInfrastructureToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->physicalEnvironmentInfrastructureToolStripMenuItem->Text = L"Physical environment and infrastructure";
			this->physicalEnvironmentInfrastructureToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::physicalEnvironmentInfrastructureToolStripMenuItem_Click);
			// 
			// economicToolStripMenuItem
			// 
			this->economicToolStripMenuItem->Name = L"economicToolStripMenuItem";
			this->economicToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->economicToolStripMenuItem->Text = L"Economic";
			this->economicToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::economicToolStripMenuItem_Click);
			// 
			// healthCareOutcomesToolStripMenuItem
			// 
			this->healthCareOutcomesToolStripMenuItem->Name = L"healthCareOutcomesToolStripMenuItem";
			this->healthCareOutcomesToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->healthCareOutcomesToolStripMenuItem->Text = L"Health care outcomes";
			this->healthCareOutcomesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::healthCareOutcomesToolStripMenuItem_Click);
			// 
			// socialAndHumanDevelopmentToolStripMenuItem
			// 
			this->socialAndHumanDevelopmentToolStripMenuItem->Name = L"socialAndHumanDevelopmentToolStripMenuItem";
			this->socialAndHumanDevelopmentToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->socialAndHumanDevelopmentToolStripMenuItem->Text = L"Social and human development";
			this->socialAndHumanDevelopmentToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::socialAndHumanDevelopmentToolStripMenuItem_Click);
			// 
			// governanceToolStripMenuItem
			// 
			this->governanceToolStripMenuItem->Name = L"governanceToolStripMenuItem";
			this->governanceToolStripMenuItem->Size = System::Drawing::Size(285, 22);
			this->governanceToolStripMenuItem->Text = L"Governance";
			this->governanceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::governanceToolStripMenuItem_Click);
			// 
			// policyDomainDisplayDataToolStripMenuItem
			// 
			this->policyDomainDisplayDataToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->physicalEnvironmentAndInfrastructureToolStripMenuItem, 
				this->economicToolStripMenuItem1, this->healthCareOutcomesToolStripMenuItem1, this->socialAndHumanDevelopmentToolStripMenuItem1, 
				this->governanceToolStripMenuItem1});
			this->policyDomainDisplayDataToolStripMenuItem->Name = L"policyDomainDisplayDataToolStripMenuItem";
			this->policyDomainDisplayDataToolStripMenuItem->Size = System::Drawing::Size(172, 20);
			this->policyDomainDisplayDataToolStripMenuItem->Text = L"Policy Domain (Display Data)";
			// 
			// physicalEnvironmentAndInfrastructureToolStripMenuItem
			// 
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Name = L"physicalEnvironmentAndInfrastructureToolStripMenuItem";
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Size = System::Drawing::Size(287, 22);
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Text = L"Physical Environment And Infrastructure";
			this->physicalEnvironmentAndInfrastructureToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::physicalEnvironmentAndInfrastructureToolStripMenuItem_Click);
			// 
			// economicToolStripMenuItem1
			// 
			this->economicToolStripMenuItem1->Name = L"economicToolStripMenuItem1";
			this->economicToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->economicToolStripMenuItem1->Text = L"Economic";
			this->economicToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Admin::economicToolStripMenuItem1_Click);
			// 
			// healthCareOutcomesToolStripMenuItem1
			// 
			this->healthCareOutcomesToolStripMenuItem1->Name = L"healthCareOutcomesToolStripMenuItem1";
			this->healthCareOutcomesToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->healthCareOutcomesToolStripMenuItem1->Text = L"Health Care Outcomes";
			this->healthCareOutcomesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Admin::healthCareOutcomesToolStripMenuItem1_Click);
			// 
			// socialAndHumanDevelopmentToolStripMenuItem1
			// 
			this->socialAndHumanDevelopmentToolStripMenuItem1->Name = L"socialAndHumanDevelopmentToolStripMenuItem1";
			this->socialAndHumanDevelopmentToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->socialAndHumanDevelopmentToolStripMenuItem1->Text = L"Social And Human Development";
			this->socialAndHumanDevelopmentToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Admin::socialAndHumanDevelopmentToolStripMenuItem1_Click);
			// 
			// governanceToolStripMenuItem1
			// 
			this->governanceToolStripMenuItem1->Name = L"governanceToolStripMenuItem1";
			this->governanceToolStripMenuItem1->Size = System::Drawing::Size(287, 22);
			this->governanceToolStripMenuItem1->Text = L"Governance";
			this->governanceToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Admin::governanceToolStripMenuItem1_Click);
			// 
			// registrationToolStripMenuItem
			// 
			this->registrationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->createUserToolStripMenuItem, 
				this->editUserToolStripMenuItem, this->deleteUserToolStripMenuItem});
			this->registrationToolStripMenuItem->Name = L"registrationToolStripMenuItem";
			this->registrationToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->registrationToolStripMenuItem->Text = L"Registration";
			// 
			// createUserToolStripMenuItem
			// 
			this->createUserToolStripMenuItem->Name = L"createUserToolStripMenuItem";
			this->createUserToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->createUserToolStripMenuItem->Text = L"Create User";
			this->createUserToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::createUserToolStripMenuItem_Click);
			// 
			// editUserToolStripMenuItem
			// 
			this->editUserToolStripMenuItem->Name = L"editUserToolStripMenuItem";
			this->editUserToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->editUserToolStripMenuItem->Text = L"Edit User";
			this->editUserToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::editUserToolStripMenuItem_Click);
			// 
			// deleteUserToolStripMenuItem
			// 
			this->deleteUserToolStripMenuItem->Name = L"deleteUserToolStripMenuItem";
			this->deleteUserToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->deleteUserToolStripMenuItem->Text = L"Delete User";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->viewHelpManualToolStripMenuItem, 
				this->aboutUsToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// viewHelpManualToolStripMenuItem
			// 
			this->viewHelpManualToolStripMenuItem->Name = L"viewHelpManualToolStripMenuItem";
			this->viewHelpManualToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->viewHelpManualToolStripMenuItem->Text = L"View Help Manual";
			// 
			// aboutUsToolStripMenuItem
			// 
			this->aboutUsToolStripMenuItem->Name = L"aboutUsToolStripMenuItem";
			this->aboutUsToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->aboutUsToolStripMenuItem->Text = L"About Us";
			this->aboutUsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::aboutUsToolStripMenuItem_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 38);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(450, 128);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
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
			this->label4->TabIndex = 7;
			this->label4->Text = L"Electronic Urban Health Record";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 234);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(283, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(965, 504);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void createANewCityToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		NewCity^ city = gcnew NewCity();
		city->ShowDialog();
		//Admin::Show();
	}
	private: System::Void changeCityNameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		ChangeCityName^ ccity = gcnew ChangeCityName();
		ccity->ShowDialog();
		//Admin::Show();
	}
	private: System::Void accessToDataOfAllCitiesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		AccessAllCities^ access = gcnew AccessAllCities();
		access->ShowDialog();
		//Admin::Show();
	}
	private: System::Void deleteACityToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		DeleteCity^ dcity = gcnew DeleteCity();
		dcity->ShowDialog();
		//Admin::Show();
	}
	private: System::Void changeACityInformationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		ChangeCityInfo^ icity = gcnew ChangeCityInfo();
		icity->ShowDialog();
		//Admin::Show();
	}

//private: System::Void policyDomainToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//		Admin::Hide();
//		PolicyDomain^ domain = gcnew PolicyDomain();
//		domain->ShowDialog();
//		Admin::Show();
//	}

	private: System::Void physicalEnvironmentInfrastructureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		Physicalenvironmentandinfrastructure ^ formPhy = gcnew Physicalenvironmentandinfrastructure;
		formPhy->ShowDialog();
		//Admin::Show();
	}
	private: System::Void economicToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		Economic ^ formEco = gcnew Economic;
		formEco->ShowDialog();
		//Admin::Show();
	}
	private: System::Void healthCareOutcomesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		Healthcareoutcomes ^ formHealth = gcnew Healthcareoutcomes;
		formHealth->ShowDialog();
		//Admin::Show();
	}
	private: System::Void socialAndHumanDevelopmentToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		Socialandhumandevelopment ^ formSocial = gcnew Socialandhumandevelopment;
		formSocial->ShowDialog();
		//Admin::Show();	 
	}
	private: System::Void governanceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		Governance ^ formGovernance = gcnew Governance;
		formGovernance->ShowDialog();
		//Admin::Show();	 
	}

	private: System::Void physicalEnvironmentAndInfrastructureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin::Hide();
		DispalyPhysicalEnvironmentAndInfrastructure^ disphy = gcnew DispalyPhysicalEnvironmentAndInfrastructure();
		disphy->ShowDialog();
		Admin::Show();
	}
	private: System::Void economicToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin::Hide();
		DispalyEconomic^ diseco = gcnew DispalyEconomic();
		diseco->ShowDialog();
		Admin::Show();
	}
	private: System::Void healthCareOutcomesToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin::Hide();
		DispalyHealthCareOutcomes^ dishea = gcnew DispalyHealthCareOutcomes();
		dishea->ShowDialog();
		Admin::Show();
	}
	private: System::Void socialAndHumanDevelopmentToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin::Hide();
		DispalySocialAndHumanDevelopment^ dissoc = gcnew DispalySocialAndHumanDevelopment();
		dissoc->ShowDialog();
		Admin::Show();
	}
	private: System::Void governanceToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin::Hide();
		DispalyGovernance^ disgov = gcnew DispalyGovernance();
		disgov->ShowDialog();
		Admin::Show();
	}
	private: System::Void createUserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Admin::Hide();
		Registration^ reg = gcnew Registration();
		reg->ShowDialog();
		//Admin::Show();
	}
	private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox2->Image = Image::FromFile("logo_uni_big.png");
	}
	private: System::Void aboutUsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		AboutUs^ aboutus = gcnew AboutUs();
		aboutus->ShowDialog();
	}
	private: System::Void editUserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		ChangeUserInfo^ changeUserInfo = gcnew ChangeUserInfo();
		changeUserInfo->ShowDialog();
	}
};
}
