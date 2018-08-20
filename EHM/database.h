#pragma once

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for database
	/// </summary>
	public ref class database : public System::Windows::Forms::Form
	{
	public:
		database(void)
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
		~database()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Data::DataSet^  UserdataSet1;
	public: System::Data::DataTable^  Registration;
	public: System::Data::DataColumn^  dataColumn1;
	public: System::Data::DataColumn^  dataColumn2;

	public: int error;
	public: System::Data::DataSet^  CitydataSet1;
	public: System::Data::DataTable^  City;

	public: 

	private: 

	public: System::Data::DataColumn^  dataColumn5;
	public: System::Data::DataColumn^  dataColumn6;
	public: System::Data::DataColumn^  dataColumn7;
	public: System::Data::DataColumn^  dataColumn8;
	public: System::Data::DataColumn^  dataColumn9;
	public: System::Data::DataColumn^  dataColumn10;
	public: System::Data::DataSet^  PhysicaldataSet;
	public: System::Data::DataTable^  Physical;
	public: 
	private: 
	public: System::Data::DataColumn^  dataColumn4;
	public: System::Data::DataColumn^  dataColumn11;
	public: System::Data::DataSet^  EconomicdataSet;
	public: System::Data::DataTable^  Economic;
	public: System::Data::DataColumn^  dataColumn18;
	public: System::Data::DataColumn^  dataColumn19;
	public: System::Data::DataColumn^  dataColumn20;
	public: System::Data::DataColumn^  dataColumn21;
	public: System::Data::DataColumn^  dataColumn22;
	public: System::Data::DataColumn^  dataColumn23;
	public: System::Data::DataColumn^  dataColumn24;
	public: System::Data::DataColumn^  dataColumn25;
	public: System::Data::DataColumn^  dataColumn26;
	public: System::Data::DataColumn^  dataColumn27;
	public: System::Data::DataSet^  GovernancedataSet;

	public: 
	public: System::Data::DataTable^  Governance;
	private: 
	public: System::Data::DataColumn^  dataColumn28;
	public: System::Data::DataColumn^  dataColumn29;
	public: System::Data::DataColumn^  dataColumn30;
	public: System::Data::DataColumn^  dataColumn31;
	public: System::Data::DataColumn^  dataColumn32;
	public: System::Data::DataColumn^  dataColumn33;
	public: System::Data::DataColumn^  dataColumn34;
	public: System::Data::DataColumn^  dataColumn12;
	public: System::Data::DataColumn^  dataColumn13;
	public: System::Data::DataColumn^  dataColumn14;
	public: System::Data::DataColumn^  dataColumn15;
	public: System::Data::DataColumn^  dataColumn16;
	public: System::Data::DataColumn^  dataColumn17;
	public: System::Data::DataColumn^  dataColumn35;
	public: System::Data::DataColumn^  dataColumn36;
	public: System::Data::DataColumn^  dataColumn37;
	public: System::Data::DataColumn^  dataColumn38;
	public: System::Data::DataColumn^  dataColumn39;
	public: System::Data::DataColumn^  dataColumn40;
	public: System::Data::DataColumn^  dataColumn41;
	public: System::Data::DataColumn^  dataColumn42;
	public: System::Data::DataColumn^  dataColumn43;
	public: System::Data::DataColumn^  dataColumn44;
	public: System::Data::DataColumn^  dataColumn45;
	public: 
	public: System::Data::DataColumn^  dataColumn46;
	private: 
	public: System::Data::DataColumn^  dataColumn47;
	public: System::Data::DataColumn^  dataColumn48;
	public: System::Data::DataSet^  SocialdataSet;
	public: System::Data::DataTable^  Social;
	public: System::Data::DataColumn^  dataColumn49;
	public: System::Data::DataColumn^  dataColumn50;
	public: System::Data::DataColumn^  dataColumn51;
	public: System::Data::DataColumn^  dataColumn52;
	public: System::Data::DataColumn^  dataColumn53;
	public: System::Data::DataColumn^  dataColumn54;
	public: System::Data::DataColumn^  dataColumn55;
	public: System::Data::DataColumn^  dataColumn56;
	public: System::Data::DataColumn^  dataColumn57;
	public: System::Data::DataColumn^  dataColumn58;
	public: System::Data::DataColumn^  dataColumn59;
	public: System::Data::DataColumn^  dataColumn60;
	public: System::Data::DataColumn^  dataColumn61;
	public: System::Data::DataColumn^  dataColumn62;
	public: System::Data::DataColumn^  dataColumn63;
	public: System::Data::DataColumn^  dataColumn64;
	public: System::Data::DataColumn^  dataColumn65;
	public: System::Data::DataColumn^  dataColumn66;
	public: System::Data::DataColumn^  dataColumn67;
	public: System::Data::DataSet^  HealthdataSet;
	public: System::Data::DataTable^  Health;
	public: System::Data::DataColumn^  dataColumn68;
	public: System::Data::DataColumn^  dataColumn69;
	public: System::Data::DataColumn^  dataColumn70;
	public: System::Data::DataColumn^  dataColumn71;
	public: System::Data::DataColumn^  dataColumn72;
	public: System::Data::DataColumn^  dataColumn73;
	public: System::Data::DataColumn^  dataColumn74;
	public: System::Data::DataColumn^  dataColumn75;
	public: System::Data::DataColumn^  dataColumn76;
	public: System::Data::DataColumn^  dataColumn77;
	public: System::Data::DataColumn^  dataColumn78;
	public: System::Data::DataColumn^  dataColumn79;
	public: System::Data::DataColumn^  dataColumn80;
	public: System::Data::DataColumn^  dataColumn81;
	public: System::Data::DataColumn^  dataColumn82;
	public: System::Data::DataColumn^  dataColumn83;
	public: System::Data::DataColumn^  dataColumn84;
	public: System::Data::DataColumn^  dataColumn85;
	public: System::Data::DataColumn^  dataColumn86;
	public: System::Data::DataColumn^  dataColumn87;
	public: System::Data::DataColumn^  dataColumn88;
	public: System::Data::DataColumn^  dataColumn89;
	public: System::Data::DataColumn^  dataColumn90;
	public: System::Data::DataColumn^  dataColumn91;
	public: System::Data::DataColumn^  dataColumn92;
	public: System::Data::DataColumn^  dataColumn93;
	public: System::Data::DataColumn^  dataColumn94;
	public: System::Data::DataColumn^  dataColumn95;
	public: System::Data::DataColumn^  dataColumn96;
	public: System::Data::DataColumn^  dataColumn97;
	public: System::Data::DataColumn^  dataColumn98;
	public: System::Data::DataColumn^  dataColumn99;
	public: System::Data::DataColumn^  dataColumn100;
	public: System::Data::DataColumn^  dataColumn101;
	public: System::Data::DataColumn^  dataColumn102;
	public: System::Data::DataColumn^  dataColumn103;
	public: System::Data::DataColumn^  dataColumn104;
	public: System::Data::DataColumn^  dataColumn105;
	public: System::Data::DataColumn^  dataColumn106;
	public: System::Data::DataColumn^  dataColumn107;
	public: System::Data::DataColumn^  dataColumn108;
	public: System::Data::DataColumn^  dataColumn109;
	public: System::Data::DataColumn^  dataColumn110;
	public: System::Data::DataColumn^  dataColumn111;
	public: System::Data::DataColumn^  dataColumn112;
	public: System::Data::DataColumn^  dataColumn113;
	public: System::Data::DataColumn^  dataColumn114;
	public: System::Data::DataColumn^  dataColumn115;
	public: System::Data::DataColumn^  dataColumn116;
	public: System::Data::DataColumn^  dataColumn117;
	public: System::Data::DataColumn^  dataColumn118;
	public: System::Data::DataColumn^  dataColumn119;
	public: System::Data::DataColumn^  dataColumn120;
	public: System::Data::DataColumn^  dataColumn121;
	public: System::Data::DataColumn^  dataColumn122;
	public: System::Data::DataColumn^  dataColumn123;
	public: System::Data::DataColumn^  dataColumn124;
	public: System::Data::DataColumn^  dataColumn125;
	public: System::Data::DataColumn^  dataColumn126;
	public: System::Data::DataColumn^  dataColumn3;
public: System::Data::DataSet^  EcoComdataSet;

public: 
public: System::Data::DataTable^  EconomicComments;
private: 
public: System::Data::DataColumn^  dataColumn127;
public: System::Data::DataColumn^  dataColumn128;
public: System::Data::DataColumn^  dataColumn129;
public: System::Data::DataColumn^  dataColumn130;
private: System::Data::DataColumn^  dataColumn131;
public: System::Data::DataSet^  GovComdataSet;
private: 

public: System::Data::DataTable^  GovernanceComments;
private: 
public: System::Data::DataColumn^  dataColumn132;
public: System::Data::DataColumn^  dataColumn133;
public: System::Data::DataColumn^  dataColumn134;
public: System::Data::DataColumn^  dataColumn135;
public: System::Data::DataSet^  HeaComdataSet;

public: 
public: System::Data::DataTable^  HealthComments;
private: 
public: System::Data::DataColumn^  dataColumn136;
public: System::Data::DataColumn^  dataColumn137;
public: System::Data::DataColumn^  dataColumn138;
public: System::Data::DataColumn^  dataColumn139;
public: System::Data::DataColumn^  dataColumn140;
public: System::Data::DataColumn^  dataColumn141;
public: System::Data::DataColumn^  dataColumn142;
public: System::Data::DataColumn^  dataColumn143;
public: System::Data::DataColumn^  dataColumn144;
public: System::Data::DataColumn^  dataColumn145;
public: System::Data::DataColumn^  dataColumn146;
public: System::Data::DataSet^  PhyComdataSet;
public: System::Data::DataTable^  PhysicalComments;
public: System::Data::DataColumn^  dataColumn147;
public: System::Data::DataColumn^  dataColumn148;
public: System::Data::DataColumn^  dataColumn149;
public: System::Data::DataColumn^  dataColumn150;
public: System::Data::DataColumn^  dataColumn151;
public: System::Data::DataColumn^  dataColumn152;
public: System::Data::DataColumn^  dataColumn153;
public: System::Data::DataColumn^  dataColumn154;
public: System::Data::DataColumn^  dataColumn155;
public: System::Data::DataSet^  SocComdataSet;
public: System::Data::DataTable^  SocialComments;
public: System::Data::DataColumn^  dataColumn156;
public: System::Data::DataColumn^  dataColumn157;
public: System::Data::DataColumn^  dataColumn158;
public: System::Data::DataColumn^  dataColumn159;
public: System::Data::DataColumn^  dataColumn160;
public: System::Data::DataColumn^  dataColumn161;
public: System::Data::DataColumn^  dataColumn162;
public: System::Data::DataColumn^  dataColumn163;
public: 
	protected: 
	protected: 
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
			this->UserdataSet1 = (gcnew System::Data::DataSet());
			this->Registration = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn126 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->CitydataSet1 = (gcnew System::Data::DataSet());
			this->City = (gcnew System::Data::DataTable());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn96 = (gcnew System::Data::DataColumn());
			this->dataColumn97 = (gcnew System::Data::DataColumn());
			this->dataColumn98 = (gcnew System::Data::DataColumn());
			this->PhysicaldataSet = (gcnew System::Data::DataSet());
			this->Physical = (gcnew System::Data::DataTable());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			this->dataColumn12 = (gcnew System::Data::DataColumn());
			this->dataColumn13 = (gcnew System::Data::DataColumn());
			this->dataColumn14 = (gcnew System::Data::DataColumn());
			this->dataColumn15 = (gcnew System::Data::DataColumn());
			this->dataColumn16 = (gcnew System::Data::DataColumn());
			this->dataColumn17 = (gcnew System::Data::DataColumn());
			this->dataColumn35 = (gcnew System::Data::DataColumn());
			this->dataColumn36 = (gcnew System::Data::DataColumn());
			this->dataColumn37 = (gcnew System::Data::DataColumn());
			this->dataColumn38 = (gcnew System::Data::DataColumn());
			this->dataColumn39 = (gcnew System::Data::DataColumn());
			this->dataColumn40 = (gcnew System::Data::DataColumn());
			this->dataColumn41 = (gcnew System::Data::DataColumn());
			this->dataColumn42 = (gcnew System::Data::DataColumn());
			this->dataColumn43 = (gcnew System::Data::DataColumn());
			this->dataColumn44 = (gcnew System::Data::DataColumn());
			this->dataColumn45 = (gcnew System::Data::DataColumn());
			this->dataColumn46 = (gcnew System::Data::DataColumn());
			this->dataColumn47 = (gcnew System::Data::DataColumn());
			this->dataColumn48 = (gcnew System::Data::DataColumn());
			this->dataColumn99 = (gcnew System::Data::DataColumn());
			this->dataColumn100 = (gcnew System::Data::DataColumn());
			this->dataColumn101 = (gcnew System::Data::DataColumn());
			this->dataColumn102 = (gcnew System::Data::DataColumn());
			this->dataColumn103 = (gcnew System::Data::DataColumn());
			this->dataColumn104 = (gcnew System::Data::DataColumn());
			this->dataColumn105 = (gcnew System::Data::DataColumn());
			this->EconomicdataSet = (gcnew System::Data::DataSet());
			this->Economic = (gcnew System::Data::DataTable());
			this->dataColumn18 = (gcnew System::Data::DataColumn());
			this->dataColumn19 = (gcnew System::Data::DataColumn());
			this->dataColumn20 = (gcnew System::Data::DataColumn());
			this->dataColumn21 = (gcnew System::Data::DataColumn());
			this->dataColumn22 = (gcnew System::Data::DataColumn());
			this->dataColumn23 = (gcnew System::Data::DataColumn());
			this->dataColumn24 = (gcnew System::Data::DataColumn());
			this->dataColumn25 = (gcnew System::Data::DataColumn());
			this->dataColumn26 = (gcnew System::Data::DataColumn());
			this->dataColumn27 = (gcnew System::Data::DataColumn());
			this->dataColumn106 = (gcnew System::Data::DataColumn());
			this->dataColumn107 = (gcnew System::Data::DataColumn());
			this->dataColumn108 = (gcnew System::Data::DataColumn());
			this->GovernancedataSet = (gcnew System::Data::DataSet());
			this->Governance = (gcnew System::Data::DataTable());
			this->dataColumn28 = (gcnew System::Data::DataColumn());
			this->dataColumn29 = (gcnew System::Data::DataColumn());
			this->dataColumn30 = (gcnew System::Data::DataColumn());
			this->dataColumn31 = (gcnew System::Data::DataColumn());
			this->dataColumn32 = (gcnew System::Data::DataColumn());
			this->dataColumn33 = (gcnew System::Data::DataColumn());
			this->dataColumn34 = (gcnew System::Data::DataColumn());
			this->dataColumn109 = (gcnew System::Data::DataColumn());
			this->dataColumn110 = (gcnew System::Data::DataColumn());
			this->SocialdataSet = (gcnew System::Data::DataSet());
			this->Social = (gcnew System::Data::DataTable());
			this->dataColumn49 = (gcnew System::Data::DataColumn());
			this->dataColumn50 = (gcnew System::Data::DataColumn());
			this->dataColumn51 = (gcnew System::Data::DataColumn());
			this->dataColumn52 = (gcnew System::Data::DataColumn());
			this->dataColumn53 = (gcnew System::Data::DataColumn());
			this->dataColumn54 = (gcnew System::Data::DataColumn());
			this->dataColumn55 = (gcnew System::Data::DataColumn());
			this->dataColumn56 = (gcnew System::Data::DataColumn());
			this->dataColumn57 = (gcnew System::Data::DataColumn());
			this->dataColumn58 = (gcnew System::Data::DataColumn());
			this->dataColumn59 = (gcnew System::Data::DataColumn());
			this->dataColumn60 = (gcnew System::Data::DataColumn());
			this->dataColumn61 = (gcnew System::Data::DataColumn());
			this->dataColumn62 = (gcnew System::Data::DataColumn());
			this->dataColumn63 = (gcnew System::Data::DataColumn());
			this->dataColumn64 = (gcnew System::Data::DataColumn());
			this->dataColumn65 = (gcnew System::Data::DataColumn());
			this->dataColumn66 = (gcnew System::Data::DataColumn());
			this->dataColumn67 = (gcnew System::Data::DataColumn());
			this->dataColumn111 = (gcnew System::Data::DataColumn());
			this->dataColumn112 = (gcnew System::Data::DataColumn());
			this->dataColumn113 = (gcnew System::Data::DataColumn());
			this->dataColumn114 = (gcnew System::Data::DataColumn());
			this->dataColumn115 = (gcnew System::Data::DataColumn());
			this->dataColumn116 = (gcnew System::Data::DataColumn());
			this->HealthdataSet = (gcnew System::Data::DataSet());
			this->Health = (gcnew System::Data::DataTable());
			this->dataColumn68 = (gcnew System::Data::DataColumn());
			this->dataColumn69 = (gcnew System::Data::DataColumn());
			this->dataColumn70 = (gcnew System::Data::DataColumn());
			this->dataColumn71 = (gcnew System::Data::DataColumn());
			this->dataColumn72 = (gcnew System::Data::DataColumn());
			this->dataColumn73 = (gcnew System::Data::DataColumn());
			this->dataColumn74 = (gcnew System::Data::DataColumn());
			this->dataColumn75 = (gcnew System::Data::DataColumn());
			this->dataColumn76 = (gcnew System::Data::DataColumn());
			this->dataColumn77 = (gcnew System::Data::DataColumn());
			this->dataColumn78 = (gcnew System::Data::DataColumn());
			this->dataColumn79 = (gcnew System::Data::DataColumn());
			this->dataColumn80 = (gcnew System::Data::DataColumn());
			this->dataColumn81 = (gcnew System::Data::DataColumn());
			this->dataColumn82 = (gcnew System::Data::DataColumn());
			this->dataColumn83 = (gcnew System::Data::DataColumn());
			this->dataColumn84 = (gcnew System::Data::DataColumn());
			this->dataColumn85 = (gcnew System::Data::DataColumn());
			this->dataColumn86 = (gcnew System::Data::DataColumn());
			this->dataColumn87 = (gcnew System::Data::DataColumn());
			this->dataColumn88 = (gcnew System::Data::DataColumn());
			this->dataColumn89 = (gcnew System::Data::DataColumn());
			this->dataColumn90 = (gcnew System::Data::DataColumn());
			this->dataColumn91 = (gcnew System::Data::DataColumn());
			this->dataColumn92 = (gcnew System::Data::DataColumn());
			this->dataColumn93 = (gcnew System::Data::DataColumn());
			this->dataColumn94 = (gcnew System::Data::DataColumn());
			this->dataColumn95 = (gcnew System::Data::DataColumn());
			this->dataColumn117 = (gcnew System::Data::DataColumn());
			this->dataColumn118 = (gcnew System::Data::DataColumn());
			this->dataColumn119 = (gcnew System::Data::DataColumn());
			this->dataColumn120 = (gcnew System::Data::DataColumn());
			this->dataColumn121 = (gcnew System::Data::DataColumn());
			this->dataColumn122 = (gcnew System::Data::DataColumn());
			this->dataColumn123 = (gcnew System::Data::DataColumn());
			this->dataColumn124 = (gcnew System::Data::DataColumn());
			this->dataColumn125 = (gcnew System::Data::DataColumn());
			this->EcoComdataSet = (gcnew System::Data::DataSet());
			this->EconomicComments = (gcnew System::Data::DataTable());
			this->dataColumn127 = (gcnew System::Data::DataColumn());
			this->dataColumn128 = (gcnew System::Data::DataColumn());
			this->dataColumn129 = (gcnew System::Data::DataColumn());
			this->dataColumn130 = (gcnew System::Data::DataColumn());
			this->dataColumn131 = (gcnew System::Data::DataColumn());
			this->GovComdataSet = (gcnew System::Data::DataSet());
			this->GovernanceComments = (gcnew System::Data::DataTable());
			this->dataColumn132 = (gcnew System::Data::DataColumn());
			this->dataColumn133 = (gcnew System::Data::DataColumn());
			this->dataColumn134 = (gcnew System::Data::DataColumn());
			this->dataColumn135 = (gcnew System::Data::DataColumn());
			this->HeaComdataSet = (gcnew System::Data::DataSet());
			this->HealthComments = (gcnew System::Data::DataTable());
			this->dataColumn136 = (gcnew System::Data::DataColumn());
			this->dataColumn137 = (gcnew System::Data::DataColumn());
			this->dataColumn138 = (gcnew System::Data::DataColumn());
			this->dataColumn139 = (gcnew System::Data::DataColumn());
			this->dataColumn140 = (gcnew System::Data::DataColumn());
			this->dataColumn141 = (gcnew System::Data::DataColumn());
			this->dataColumn142 = (gcnew System::Data::DataColumn());
			this->dataColumn143 = (gcnew System::Data::DataColumn());
			this->dataColumn144 = (gcnew System::Data::DataColumn());
			this->dataColumn145 = (gcnew System::Data::DataColumn());
			this->dataColumn146 = (gcnew System::Data::DataColumn());
			this->PhyComdataSet = (gcnew System::Data::DataSet());
			this->PhysicalComments = (gcnew System::Data::DataTable());
			this->dataColumn147 = (gcnew System::Data::DataColumn());
			this->dataColumn148 = (gcnew System::Data::DataColumn());
			this->dataColumn149 = (gcnew System::Data::DataColumn());
			this->dataColumn150 = (gcnew System::Data::DataColumn());
			this->dataColumn151 = (gcnew System::Data::DataColumn());
			this->dataColumn152 = (gcnew System::Data::DataColumn());
			this->dataColumn153 = (gcnew System::Data::DataColumn());
			this->dataColumn154 = (gcnew System::Data::DataColumn());
			this->dataColumn155 = (gcnew System::Data::DataColumn());
			this->SocComdataSet = (gcnew System::Data::DataSet());
			this->SocialComments = (gcnew System::Data::DataTable());
			this->dataColumn156 = (gcnew System::Data::DataColumn());
			this->dataColumn157 = (gcnew System::Data::DataColumn());
			this->dataColumn158 = (gcnew System::Data::DataColumn());
			this->dataColumn159 = (gcnew System::Data::DataColumn());
			this->dataColumn160 = (gcnew System::Data::DataColumn());
			this->dataColumn161 = (gcnew System::Data::DataColumn());
			this->dataColumn162 = (gcnew System::Data::DataColumn());
			this->dataColumn163 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UserdataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Registration))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CitydataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->City))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PhysicaldataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Physical))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EconomicdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Economic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->GovernancedataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Governance))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SocialdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Social))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HealthdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Health))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EcoComdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EconomicComments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->GovComdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->GovernanceComments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaComdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HealthComments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PhyComdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PhysicalComments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SocComdataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SocialComments))->BeginInit();
			this->SuspendLayout();
			// 
			// UserdataSet1
			// 
			this->UserdataSet1->DataSetName = L"NewDataSet";
			this->UserdataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->Registration});
			// 
			// Registration
			// 
			this->Registration->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {this->dataColumn1, this->dataColumn2, 
				this->dataColumn126, this->dataColumn3});
			this->Registration->TableName = L"Registration";
			// 
			// dataColumn1
			// 
			this->dataColumn1->Caption = L"UserName";
			this->dataColumn1->ColumnName = L"UserName";
			// 
			// dataColumn2
			// 
			this->dataColumn2->Caption = L"Password";
			this->dataColumn2->ColumnName = L"Password";
			// 
			// dataColumn126
			// 
			this->dataColumn126->Caption = L"Email";
			this->dataColumn126->ColumnName = L"Email";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Role";
			// 
			// CitydataSet1
			// 
			this->CitydataSet1->DataSetName = L"NewDataSet";
			this->CitydataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->City});
			// 
			// City
			// 
			this->City->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(9) {this->dataColumn5, this->dataColumn6, this->dataColumn7, 
				this->dataColumn8, this->dataColumn9, this->dataColumn10, this->dataColumn96, this->dataColumn97, this->dataColumn98});
			this->City->TableName = L"City";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"Name";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"Inhabitants";
			// 
			// dataColumn7
			// 
			this->dataColumn7->Caption = L"HealthCare";
			this->dataColumn7->ColumnName = L"HealthCare";
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"RelatedHealthCare";
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"LinkCityPage";
			// 
			// dataColumn10
			// 
			this->dataColumn10->Caption = L"CityNeighbor1";
			this->dataColumn10->ColumnName = L"CityNeighbor1";
			// 
			// dataColumn96
			// 
			this->dataColumn96->Caption = L"CityNeighbor2";
			this->dataColumn96->ColumnName = L"CityNeighbor2";
			// 
			// dataColumn97
			// 
			this->dataColumn97->Caption = L"CityNeighbor3";
			this->dataColumn97->ColumnName = L"CityNeighbor3";
			// 
			// dataColumn98
			// 
			this->dataColumn98->Caption = L"CityNeighbor4";
			this->dataColumn98->ColumnName = L"CityNeighbor4";
			// 
			// PhysicaldataSet
			// 
			this->PhysicaldataSet->DataSetName = L"NewDataSet";
			this->PhysicaldataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->Physical});
			// 
			// Physical
			// 
			this->Physical->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(29) {this->dataColumn4, this->dataColumn11, 
				this->dataColumn12, this->dataColumn13, this->dataColumn14, this->dataColumn15, this->dataColumn16, this->dataColumn17, this->dataColumn35, 
				this->dataColumn36, this->dataColumn37, this->dataColumn38, this->dataColumn39, this->dataColumn40, this->dataColumn41, this->dataColumn42, 
				this->dataColumn43, this->dataColumn44, this->dataColumn45, this->dataColumn46, this->dataColumn47, this->dataColumn48, this->dataColumn99, 
				this->dataColumn100, this->dataColumn101, this->dataColumn102, this->dataColumn103, this->dataColumn104, this->dataColumn105});
			this->Physical->TableName = L"Physical";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"City";
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"Household";
			// 
			// dataColumn12
			// 
			this->dataColumn12->Caption = L"HouseholdL";
			this->dataColumn12->ColumnName = L"HouseholdL";
			// 
			// dataColumn13
			// 
			this->dataColumn13->Caption = L"HouseholdU";
			this->dataColumn13->ColumnName = L"HouseholdU";
			// 
			// dataColumn14
			// 
			this->dataColumn14->Caption = L"HouseholdDataType";
			this->dataColumn14->ColumnName = L"HouseholdDataType";
			// 
			// dataColumn15
			// 
			this->dataColumn15->Caption = L"Solid";
			this->dataColumn15->ColumnName = L"Solid";
			// 
			// dataColumn16
			// 
			this->dataColumn16->Caption = L"SolidL";
			this->dataColumn16->ColumnName = L"SolidL";
			// 
			// dataColumn17
			// 
			this->dataColumn17->Caption = L"SolidU";
			this->dataColumn17->ColumnName = L"SolidU";
			// 
			// dataColumn35
			// 
			this->dataColumn35->Caption = L"SolidDataType";
			this->dataColumn35->ColumnName = L"SolidDataType";
			// 
			// dataColumn36
			// 
			this->dataColumn36->Caption = L"Work";
			this->dataColumn36->ColumnName = L"Work";
			// 
			// dataColumn37
			// 
			this->dataColumn37->Caption = L"WorkL";
			this->dataColumn37->ColumnName = L"WorkL";
			// 
			// dataColumn38
			// 
			this->dataColumn38->Caption = L"WorkU";
			this->dataColumn38->ColumnName = L"WorkU";
			// 
			// dataColumn39
			// 
			this->dataColumn39->Caption = L"WorkDataType";
			this->dataColumn39->ColumnName = L"WorkDataType";
			// 
			// dataColumn40
			// 
			this->dataColumn40->Caption = L"AccessWater";
			this->dataColumn40->ColumnName = L"AccessWater";
			// 
			// dataColumn41
			// 
			this->dataColumn41->Caption = L"AccessWaterL";
			this->dataColumn41->ColumnName = L"AccessWaterL";
			// 
			// dataColumn42
			// 
			this->dataColumn42->Caption = L"AccessWaterU";
			this->dataColumn42->ColumnName = L"AccessWaterU";
			// 
			// dataColumn43
			// 
			this->dataColumn43->Caption = L"AccessWaterDataType";
			this->dataColumn43->ColumnName = L"AccessWaterDataType";
			// 
			// dataColumn44
			// 
			this->dataColumn44->Caption = L"AccessSanitation";
			this->dataColumn44->ColumnName = L"AccessSanitation";
			// 
			// dataColumn45
			// 
			this->dataColumn45->Caption = L"AccessSanitationL";
			this->dataColumn45->ColumnName = L"AccessSanitationL";
			// 
			// dataColumn46
			// 
			this->dataColumn46->Caption = L"AccessSanitationU";
			this->dataColumn46->ColumnName = L"AccessSanitationU";
			// 
			// dataColumn47
			// 
			this->dataColumn47->Caption = L"AccessSanitationDataType";
			this->dataColumn47->ColumnName = L"AccessSanitationDataType";
			// 
			// dataColumn48
			// 
			this->dataColumn48->Caption = L"Alcohol";
			this->dataColumn48->ColumnName = L"Alcohol";
			// 
			// dataColumn99
			// 
			this->dataColumn99->Caption = L"AlcoholL";
			this->dataColumn99->ColumnName = L"AlcoholL";
			// 
			// dataColumn100
			// 
			this->dataColumn100->Caption = L"AlcoholU";
			this->dataColumn100->ColumnName = L"AlcoholU";
			// 
			// dataColumn101
			// 
			this->dataColumn101->Caption = L"AlcoholDataType";
			this->dataColumn101->ColumnName = L"AlcoholDataType";
			// 
			// dataColumn102
			// 
			this->dataColumn102->Caption = L"Green";
			this->dataColumn102->ColumnName = L"Green";
			// 
			// dataColumn103
			// 
			this->dataColumn103->Caption = L"GreenL";
			this->dataColumn103->ColumnName = L"GreenL";
			// 
			// dataColumn104
			// 
			this->dataColumn104->Caption = L"GreenU";
			this->dataColumn104->ColumnName = L"GreenU";
			// 
			// dataColumn105
			// 
			this->dataColumn105->Caption = L"GreenDataType";
			this->dataColumn105->ColumnName = L"GreenDataType";
			// 
			// EconomicdataSet
			// 
			this->EconomicdataSet->DataSetName = L"NewDataSet";
			this->EconomicdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->Economic});
			// 
			// Economic
			// 
			this->Economic->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(13) {this->dataColumn18, this->dataColumn19, 
				this->dataColumn20, this->dataColumn21, this->dataColumn22, this->dataColumn23, this->dataColumn24, this->dataColumn25, this->dataColumn26, 
				this->dataColumn27, this->dataColumn106, this->dataColumn107, this->dataColumn108});
			this->Economic->TableName = L"Economic";
			// 
			// dataColumn18
			// 
			this->dataColumn18->Caption = L"City";
			this->dataColumn18->ColumnName = L"City";
			// 
			// dataColumn19
			// 
			this->dataColumn19->Caption = L"Poverty";
			this->dataColumn19->ColumnName = L"Poverty";
			// 
			// dataColumn20
			// 
			this->dataColumn20->Caption = L"PovertyL";
			this->dataColumn20->ColumnName = L"PovertyL";
			// 
			// dataColumn21
			// 
			this->dataColumn21->Caption = L"PovertyU";
			this->dataColumn21->ColumnName = L"PovertyU";
			// 
			// dataColumn22
			// 
			this->dataColumn22->Caption = L"PovertyDataType";
			this->dataColumn22->ColumnName = L"PovertyDataType";
			// 
			// dataColumn23
			// 
			this->dataColumn23->Caption = L"Women";
			this->dataColumn23->ColumnName = L"Women";
			// 
			// dataColumn24
			// 
			this->dataColumn24->Caption = L"WomenL";
			this->dataColumn24->ColumnName = L"WomenL";
			// 
			// dataColumn25
			// 
			this->dataColumn25->Caption = L"WomenU";
			this->dataColumn25->ColumnName = L"WomenU";
			// 
			// dataColumn26
			// 
			this->dataColumn26->Caption = L"WomenDataType";
			this->dataColumn26->ColumnName = L"WomenDataType";
			// 
			// dataColumn27
			// 
			this->dataColumn27->Caption = L"Secure";
			this->dataColumn27->ColumnName = L"Secure";
			// 
			// dataColumn106
			// 
			this->dataColumn106->Caption = L"SecureL";
			this->dataColumn106->ColumnName = L"SecureL";
			// 
			// dataColumn107
			// 
			this->dataColumn107->Caption = L"SecureU";
			this->dataColumn107->ColumnName = L"SecureU";
			// 
			// dataColumn108
			// 
			this->dataColumn108->Caption = L"SecureDataType";
			this->dataColumn108->ColumnName = L"SecureDataType";
			// 
			// GovernancedataSet
			// 
			this->GovernancedataSet->DataSetName = L"NewDataSet";
			this->GovernancedataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->Governance});
			// 
			// Governance
			// 
			this->Governance->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(9) {this->dataColumn28, this->dataColumn29, 
				this->dataColumn30, this->dataColumn31, this->dataColumn32, this->dataColumn33, this->dataColumn34, this->dataColumn109, this->dataColumn110});
			this->Governance->TableName = L"Governance";
			// 
			// dataColumn28
			// 
			this->dataColumn28->Caption = L"City";
			this->dataColumn28->ColumnName = L"City";
			// 
			// dataColumn29
			// 
			this->dataColumn29->Caption = L"VoterParticipation";
			this->dataColumn29->ColumnName = L"VoterParticipation";
			// 
			// dataColumn30
			// 
			this->dataColumn30->Caption = L"VoterParticipationL";
			this->dataColumn30->ColumnName = L"VoterParticipationL";
			// 
			// dataColumn31
			// 
			this->dataColumn31->Caption = L"VoterParticipationU";
			this->dataColumn31->ColumnName = L"VoterParticipationU";
			// 
			// dataColumn32
			// 
			this->dataColumn32->Caption = L"VoterParticipationDataType";
			this->dataColumn32->ColumnName = L"VoterParticipationDataType";
			// 
			// dataColumn33
			// 
			this->dataColumn33->Caption = L"InsuranceCoverage";
			this->dataColumn33->ColumnName = L"InsuranceCoverage";
			// 
			// dataColumn34
			// 
			this->dataColumn34->Caption = L"InsuranceCoverageL";
			this->dataColumn34->ColumnName = L"InsuranceCoverageL";
			// 
			// dataColumn109
			// 
			this->dataColumn109->ColumnName = L"InsuranceCoverageU";
			// 
			// dataColumn110
			// 
			this->dataColumn110->Caption = L"InsuranceCoverageDataType";
			this->dataColumn110->ColumnName = L"InsuranceCoverageDataType";
			// 
			// SocialdataSet
			// 
			this->SocialdataSet->DataSetName = L"NewDataSet";
			this->SocialdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->Social});
			// 
			// Social
			// 
			this->Social->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(25) {this->dataColumn49, this->dataColumn50, 
				this->dataColumn51, this->dataColumn52, this->dataColumn53, this->dataColumn54, this->dataColumn55, this->dataColumn56, this->dataColumn57, 
				this->dataColumn58, this->dataColumn59, this->dataColumn60, this->dataColumn61, this->dataColumn62, this->dataColumn63, this->dataColumn64, 
				this->dataColumn65, this->dataColumn66, this->dataColumn67, this->dataColumn111, this->dataColumn112, this->dataColumn113, this->dataColumn114, 
				this->dataColumn115, this->dataColumn116});
			this->Social->TableName = L"Social";
			// 
			// dataColumn49
			// 
			this->dataColumn49->Caption = L"City";
			this->dataColumn49->ColumnName = L"City";
			// 
			// dataColumn50
			// 
			this->dataColumn50->Caption = L"Literacy";
			this->dataColumn50->ColumnName = L"Literacy";
			// 
			// dataColumn51
			// 
			this->dataColumn51->Caption = L"LiteracyL";
			this->dataColumn51->ColumnName = L"LiteracyL";
			// 
			// dataColumn52
			// 
			this->dataColumn52->Caption = L"LiteracyU";
			this->dataColumn52->ColumnName = L"LiteracyU";
			// 
			// dataColumn53
			// 
			this->dataColumn53->Caption = L"LiteracyDataType";
			this->dataColumn53->ColumnName = L"LiteracyDataType";
			// 
			// dataColumn54
			// 
			this->dataColumn54->Caption = L"UnderweightChildren";
			this->dataColumn54->ColumnName = L"UnderweightChildren";
			// 
			// dataColumn55
			// 
			this->dataColumn55->Caption = L"UnderweightChildrenL";
			this->dataColumn55->ColumnName = L"UnderweightChildrenL";
			// 
			// dataColumn56
			// 
			this->dataColumn56->Caption = L"UnderweightChildrenU";
			this->dataColumn56->ColumnName = L"UnderweightChildrenU";
			// 
			// dataColumn57
			// 
			this->dataColumn57->Caption = L"UnderweightChildrenDataType";
			this->dataColumn57->ColumnName = L"UnderweightChildrenDataType";
			// 
			// dataColumn58
			// 
			this->dataColumn58->Caption = L"OverweightObesity";
			this->dataColumn58->ColumnName = L"OverweightObesity";
			// 
			// dataColumn59
			// 
			this->dataColumn59->Caption = L"OverweightObesityL";
			this->dataColumn59->ColumnName = L"OverweightObesityL";
			// 
			// dataColumn60
			// 
			this->dataColumn60->Caption = L"OverweightObesityU";
			this->dataColumn60->ColumnName = L"OverweightObesityU";
			// 
			// dataColumn61
			// 
			this->dataColumn61->Caption = L"OverweightObesityDataType";
			this->dataColumn61->ColumnName = L"OverweightObesityDataType";
			// 
			// dataColumn62
			// 
			this->dataColumn62->Caption = L"Breastfeeding";
			this->dataColumn62->ColumnName = L"Breastfeeding";
			// 
			// dataColumn63
			// 
			this->dataColumn63->Caption = L"BreastfeedingL";
			this->dataColumn63->ColumnName = L"BreastfeedingL";
			// 
			// dataColumn64
			// 
			this->dataColumn64->Caption = L"BreastfeedingU";
			this->dataColumn64->ColumnName = L"BreastfeedingU";
			// 
			// dataColumn65
			// 
			this->dataColumn65->Caption = L"BreastfeedingDataType";
			this->dataColumn65->ColumnName = L"BreastfeedingDataType";
			// 
			// dataColumn66
			// 
			this->dataColumn66->Caption = L"TeenagePregnancy";
			this->dataColumn66->ColumnName = L"TeenagePregnancy";
			// 
			// dataColumn67
			// 
			this->dataColumn67->Caption = L"TeenagePregnancyL";
			this->dataColumn67->ColumnName = L"TeenagePregnancyL";
			// 
			// dataColumn111
			// 
			this->dataColumn111->ColumnName = L"TeenagePregnancyU";
			// 
			// dataColumn112
			// 
			this->dataColumn112->Caption = L"TeenagePregnancyDataType";
			this->dataColumn112->ColumnName = L"TeenagePregnancyDataType";
			// 
			// dataColumn113
			// 
			this->dataColumn113->Caption = L"PhysicalActivity";
			this->dataColumn113->ColumnName = L"PhysicalActivity";
			// 
			// dataColumn114
			// 
			this->dataColumn114->Caption = L"PhysicalActivityL";
			this->dataColumn114->ColumnName = L"PhysicalActivityL";
			// 
			// dataColumn115
			// 
			this->dataColumn115->Caption = L"PhysicalActivityU";
			this->dataColumn115->ColumnName = L"PhysicalActivityU";
			// 
			// dataColumn116
			// 
			this->dataColumn116->Caption = L"PhysicalActivityDataType";
			this->dataColumn116->ColumnName = L"PhysicalActivityDataType";
			// 
			// HealthdataSet
			// 
			this->HealthdataSet->DataSetName = L"NewDataSet";
			this->HealthdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->Health});
			// 
			// Health
			// 
			this->Health->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(37) {this->dataColumn68, this->dataColumn69, 
				this->dataColumn70, this->dataColumn71, this->dataColumn72, this->dataColumn73, this->dataColumn74, this->dataColumn75, this->dataColumn76, 
				this->dataColumn77, this->dataColumn78, this->dataColumn79, this->dataColumn80, this->dataColumn81, this->dataColumn82, this->dataColumn83, 
				this->dataColumn84, this->dataColumn85, this->dataColumn86, this->dataColumn87, this->dataColumn88, this->dataColumn89, this->dataColumn90, 
				this->dataColumn91, this->dataColumn92, this->dataColumn93, this->dataColumn94, this->dataColumn95, this->dataColumn117, this->dataColumn118, 
				this->dataColumn119, this->dataColumn120, this->dataColumn121, this->dataColumn122, this->dataColumn123, this->dataColumn124, 
				this->dataColumn125});
			this->Health->TableName = L"Health";
			// 
			// dataColumn68
			// 
			this->dataColumn68->Caption = L"City";
			this->dataColumn68->ColumnName = L"City";
			// 
			// dataColumn69
			// 
			this->dataColumn69->Caption = L"UnderFiveMortality";
			this->dataColumn69->ColumnName = L"UnderFiveMortality";
			// 
			// dataColumn70
			// 
			this->dataColumn70->Caption = L"UnderFiveMortalityL";
			this->dataColumn70->ColumnName = L"UnderFiveMortalityL";
			// 
			// dataColumn71
			// 
			this->dataColumn71->Caption = L"UnderFiveMortalityU";
			this->dataColumn71->ColumnName = L"UnderFiveMortalityU";
			// 
			// dataColumn72
			// 
			this->dataColumn72->Caption = L"UnderFiveMortalityDataType";
			this->dataColumn72->ColumnName = L"UnderFiveMortalityDataType";
			// 
			// dataColumn73
			// 
			this->dataColumn73->Caption = L"MaternalMortality";
			this->dataColumn73->ColumnName = L"MaternalMortality";
			// 
			// dataColumn74
			// 
			this->dataColumn74->Caption = L"MaternalMortalityL";
			this->dataColumn74->ColumnName = L"MaternalMortalityL";
			// 
			// dataColumn75
			// 
			this->dataColumn75->Caption = L"MaternalMortalityU";
			this->dataColumn75->ColumnName = L"MaternalMortalityU";
			// 
			// dataColumn76
			// 
			this->dataColumn76->Caption = L"MaternalMortalityDataType";
			this->dataColumn76->ColumnName = L"MaternalMortalityDataType";
			// 
			// dataColumn77
			// 
			this->dataColumn77->Caption = L"LifeExpectancy";
			this->dataColumn77->ColumnName = L"LifeExpectancy";
			// 
			// dataColumn78
			// 
			this->dataColumn78->Caption = L"LifeExpectancyL";
			this->dataColumn78->ColumnName = L"LifeExpectancyL";
			// 
			// dataColumn79
			// 
			this->dataColumn79->Caption = L"LifeExpectancyU";
			this->dataColumn79->ColumnName = L"LifeExpectancyU";
			// 
			// dataColumn80
			// 
			this->dataColumn80->Caption = L"LifeExpectancyDataType";
			this->dataColumn80->ColumnName = L"LifeExpectancyDataType";
			// 
			// dataColumn81
			// 
			this->dataColumn81->Caption = L"Cancer";
			this->dataColumn81->ColumnName = L"Cancer";
			// 
			// dataColumn82
			// 
			this->dataColumn82->Caption = L"CancerL";
			this->dataColumn82->ColumnName = L"CancerL";
			// 
			// dataColumn83
			// 
			this->dataColumn83->Caption = L"CancerU";
			this->dataColumn83->ColumnName = L"CancerU";
			// 
			// dataColumn84
			// 
			this->dataColumn84->Caption = L"CancerDataType";
			this->dataColumn84->ColumnName = L"CancerDataType";
			// 
			// dataColumn85
			// 
			this->dataColumn85->Caption = L"Cardiovascular";
			this->dataColumn85->ColumnName = L"Cardiovascular";
			// 
			// dataColumn86
			// 
			this->dataColumn86->Caption = L"CardiovascularL";
			this->dataColumn86->ColumnName = L"CardiovascularL";
			// 
			// dataColumn87
			// 
			this->dataColumn87->Caption = L"CardiovascularU";
			this->dataColumn87->ColumnName = L"CardiovascularU";
			// 
			// dataColumn88
			// 
			this->dataColumn88->Caption = L"CardiovascularDataType";
			this->dataColumn88->ColumnName = L"CardiovascularDataType";
			// 
			// dataColumn89
			// 
			this->dataColumn89->Caption = L"Respiratory";
			this->dataColumn89->ColumnName = L"Respiratory";
			// 
			// dataColumn90
			// 
			this->dataColumn90->Caption = L"RespiratoryL";
			this->dataColumn90->ColumnName = L"RespiratoryL";
			// 
			// dataColumn91
			// 
			this->dataColumn91->Caption = L"RespiratoryU";
			this->dataColumn91->ColumnName = L"RespiratoryU";
			// 
			// dataColumn92
			// 
			this->dataColumn92->Caption = L"RespiratoryDataType";
			this->dataColumn92->ColumnName = L"RespiratoryDataType";
			// 
			// dataColumn93
			// 
			this->dataColumn93->Caption = L"HIV";
			this->dataColumn93->ColumnName = L"HIV";
			// 
			// dataColumn94
			// 
			this->dataColumn94->Caption = L"HIVL";
			this->dataColumn94->ColumnName = L"HIVL";
			// 
			// dataColumn95
			// 
			this->dataColumn95->Caption = L"HIVU";
			this->dataColumn95->ColumnName = L"HIVU";
			// 
			// dataColumn117
			// 
			this->dataColumn117->ColumnName = L"HIVDataType";
			// 
			// dataColumn118
			// 
			this->dataColumn118->ColumnName = L"Homicide";
			// 
			// dataColumn119
			// 
			this->dataColumn119->ColumnName = L"HomicideL";
			// 
			// dataColumn120
			// 
			this->dataColumn120->Caption = L"HomicideU";
			this->dataColumn120->ColumnName = L"HomicideU";
			// 
			// dataColumn121
			// 
			this->dataColumn121->Caption = L"HomicideDataType";
			this->dataColumn121->ColumnName = L"HomicideDataType";
			// 
			// dataColumn122
			// 
			this->dataColumn122->ColumnName = L"Mental";
			// 
			// dataColumn123
			// 
			this->dataColumn123->ColumnName = L"MentalL";
			// 
			// dataColumn124
			// 
			this->dataColumn124->Caption = L"MentalU";
			this->dataColumn124->ColumnName = L"MentalU";
			// 
			// dataColumn125
			// 
			this->dataColumn125->Caption = L"MentalDataType";
			this->dataColumn125->ColumnName = L"MentalDataType";
			// 
			// EcoComdataSet
			// 
			this->EcoComdataSet->DataSetName = L"NewDataSet";
			this->EcoComdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->EconomicComments});
			// 
			// EconomicComments
			// 
			this->EconomicComments->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {this->dataColumn127, this->dataColumn128, 
				this->dataColumn129, this->dataColumn130, this->dataColumn131});
			this->EconomicComments->TableName = L"EconomicComments";
			// 
			// dataColumn127
			// 
			this->dataColumn127->Caption = L"UserName";
			this->dataColumn127->ColumnName = L"UserName";
			// 
			// dataColumn128
			// 
			this->dataColumn128->Caption = L"CityName";
			this->dataColumn128->ColumnName = L"CityName";
			// 
			// dataColumn129
			// 
			this->dataColumn129->Caption = L"PovertyComment";
			this->dataColumn129->ColumnName = L"PovertyComment";
			// 
			// dataColumn130
			// 
			this->dataColumn130->Caption = L"WomenComment";
			this->dataColumn130->ColumnName = L"WomenComment";
			// 
			// dataColumn131
			// 
			this->dataColumn131->Caption = L"SecureComment";
			this->dataColumn131->ColumnName = L"SecureComment";
			// 
			// GovComdataSet
			// 
			this->GovComdataSet->DataSetName = L"NewDataSet";
			this->GovComdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->GovernanceComments});
			// 
			// GovernanceComments
			// 
			this->GovernanceComments->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {this->dataColumn132, this->dataColumn133, 
				this->dataColumn134, this->dataColumn135});
			this->GovernanceComments->TableName = L"GovernanceComments";
			// 
			// dataColumn132
			// 
			this->dataColumn132->Caption = L"UserName";
			this->dataColumn132->ColumnName = L"UserName";
			// 
			// dataColumn133
			// 
			this->dataColumn133->Caption = L"CityName";
			this->dataColumn133->ColumnName = L"CityName";
			// 
			// dataColumn134
			// 
			this->dataColumn134->Caption = L"VoterParticipationComment";
			this->dataColumn134->ColumnName = L"VoterParticipationComment";
			// 
			// dataColumn135
			// 
			this->dataColumn135->Caption = L"InsuranceCoverageComment";
			this->dataColumn135->ColumnName = L"InsuranceCoverageComment";
			// 
			// HeaComdataSet
			// 
			this->HeaComdataSet->DataSetName = L"NewDataSet";
			this->HeaComdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->HealthComments});
			// 
			// HealthComments
			// 
			this->HealthComments->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(11) {this->dataColumn136, this->dataColumn137, 
				this->dataColumn138, this->dataColumn139, this->dataColumn140, this->dataColumn141, this->dataColumn142, this->dataColumn143, 
				this->dataColumn144, this->dataColumn145, this->dataColumn146});
			this->HealthComments->TableName = L"HealthComments";
			// 
			// dataColumn136
			// 
			this->dataColumn136->Caption = L"UserName";
			this->dataColumn136->ColumnName = L"UserName";
			// 
			// dataColumn137
			// 
			this->dataColumn137->Caption = L"CityName";
			this->dataColumn137->ColumnName = L"CityName";
			// 
			// dataColumn138
			// 
			this->dataColumn138->Caption = L"UnderFiveMortalityComment";
			this->dataColumn138->ColumnName = L"UnderFiveMortalityComment";
			// 
			// dataColumn139
			// 
			this->dataColumn139->Caption = L"MaternalMortalityComment";
			this->dataColumn139->ColumnName = L"MaternalMortalityComment";
			// 
			// dataColumn140
			// 
			this->dataColumn140->Caption = L"LifeExpectancyComment";
			this->dataColumn140->ColumnName = L"LifeExpectancyComment";
			// 
			// dataColumn141
			// 
			this->dataColumn141->Caption = L"CancerComment";
			this->dataColumn141->ColumnName = L"CancerComment";
			// 
			// dataColumn142
			// 
			this->dataColumn142->Caption = L"CardiovascularComment";
			this->dataColumn142->ColumnName = L"CardiovascularComment";
			// 
			// dataColumn143
			// 
			this->dataColumn143->Caption = L"RespiratoryComment";
			this->dataColumn143->ColumnName = L"RespiratoryComment";
			// 
			// dataColumn144
			// 
			this->dataColumn144->Caption = L"HIVComment";
			this->dataColumn144->ColumnName = L"HIVComment";
			// 
			// dataColumn145
			// 
			this->dataColumn145->ColumnName = L"HomicideComment";
			// 
			// dataColumn146
			// 
			this->dataColumn146->Caption = L"MentalComment";
			this->dataColumn146->ColumnName = L"MentalComment";
			// 
			// PhyComdataSet
			// 
			this->PhyComdataSet->DataSetName = L"NewDataSet";
			this->PhyComdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->PhysicalComments});
			// 
			// PhysicalComments
			// 
			this->PhysicalComments->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(9) {this->dataColumn147, this->dataColumn148, 
				this->dataColumn149, this->dataColumn150, this->dataColumn151, this->dataColumn152, this->dataColumn153, this->dataColumn154, 
				this->dataColumn155});
			this->PhysicalComments->TableName = L"PhysicalComments";
			// 
			// dataColumn147
			// 
			this->dataColumn147->Caption = L"UserName";
			this->dataColumn147->ColumnName = L"UserName";
			// 
			// dataColumn148
			// 
			this->dataColumn148->Caption = L"CityName";
			this->dataColumn148->ColumnName = L"CityName";
			// 
			// dataColumn149
			// 
			this->dataColumn149->Caption = L"HouseholdComment";
			this->dataColumn149->ColumnName = L"HouseholdComment";
			// 
			// dataColumn150
			// 
			this->dataColumn150->Caption = L"SolidComment";
			this->dataColumn150->ColumnName = L"SolidComment";
			// 
			// dataColumn151
			// 
			this->dataColumn151->Caption = L"WorkComment";
			this->dataColumn151->ColumnName = L"WorkComment";
			// 
			// dataColumn152
			// 
			this->dataColumn152->Caption = L"AccessWaterComment";
			this->dataColumn152->ColumnName = L"AccessWaterComment";
			// 
			// dataColumn153
			// 
			this->dataColumn153->Caption = L"AccessSanitationComment";
			this->dataColumn153->ColumnName = L"AccessSanitationComment";
			// 
			// dataColumn154
			// 
			this->dataColumn154->Caption = L"AlcoholComment";
			this->dataColumn154->ColumnName = L"AlcoholComment";
			// 
			// dataColumn155
			// 
			this->dataColumn155->Caption = L"GreenComment";
			this->dataColumn155->ColumnName = L"GreenComment";
			// 
			// SocComdataSet
			// 
			this->SocComdataSet->DataSetName = L"NewDataSet";
			this->SocComdataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->SocialComments});
			// 
			// SocialComments
			// 
			this->SocialComments->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(8) {this->dataColumn156, this->dataColumn157, 
				this->dataColumn158, this->dataColumn159, this->dataColumn160, this->dataColumn161, this->dataColumn162, this->dataColumn163});
			this->SocialComments->TableName = L"SocialComments";
			// 
			// dataColumn156
			// 
			this->dataColumn156->Caption = L"UserName";
			this->dataColumn156->ColumnName = L"UserName";
			// 
			// dataColumn157
			// 
			this->dataColumn157->Caption = L"CityName";
			this->dataColumn157->ColumnName = L"CityName";
			// 
			// dataColumn158
			// 
			this->dataColumn158->Caption = L"LiteracyComment";
			this->dataColumn158->ColumnName = L"LiteracyComment";
			// 
			// dataColumn159
			// 
			this->dataColumn159->Caption = L"UnderweightChildrenComment";
			this->dataColumn159->ColumnName = L"UnderweightChildrenComment";
			// 
			// dataColumn160
			// 
			this->dataColumn160->Caption = L"OverweightObesityComment";
			this->dataColumn160->ColumnName = L"OverweightObesityComment";
			// 
			// dataColumn161
			// 
			this->dataColumn161->Caption = L"BreastfeedingComment";
			this->dataColumn161->ColumnName = L"BreastfeedingComment";
			// 
			// dataColumn162
			// 
			this->dataColumn162->Caption = L"TeenagePregnancyComment";
			this->dataColumn162->ColumnName = L"TeenagePregnancyComment";
			// 
			// dataColumn163
			// 
			this->dataColumn163->Caption = L"PhysicalActivityComment";
			this->dataColumn163->ColumnName = L"PhysicalActivityComment";
			// 
			// database
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Name = L"database";
			this->Text = L"database";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UserdataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Registration))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CitydataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->City))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PhysicaldataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Physical))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EconomicdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Economic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->GovernancedataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Governance))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SocialdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Social))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HealthdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Health))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EcoComdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->EconomicComments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->GovComdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->GovernanceComments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HeaComdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HealthComments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PhyComdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PhysicalComments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SocComdataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SocialComments))->EndInit();
			this->ResumeLayout(false);

		}

		//read Registration xml file
		public: int read_db()
		{
			String^ ermsg;
			try
			{
				this->UserdataSet1->ReadXml("..\\App_Data\\Registration.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Login Database(Registration.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		//write Registration xml file
		public: int write_db()
		{
			String^ ermsg;
			try
			{
				this->UserdataSet1->WriteXml("..\\App_Data\\Registration.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Login Database(Registration.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		
		//read city xml file
		public: int read_city_db()
		{
			String^ ermsg;
			try
			{
				this->CitydataSet1->ReadXml("..\\App_Data\\City.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "City Database(City.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		//write city xml file
		public: int write_city_db()
		{
			String^ ermsg;
			try
			{
				this->CitydataSet1->WriteXml("..\\App_Data\\City.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "City Database(City.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		
		//read physical xml file
		public: int read_physical_db()
		{
			String^ ermsg;
			try
			{
				this->PhysicaldataSet->ReadXml("..\\App_Data\\Physical.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Physical Database(Physical.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		//write physical xml file
		public: int write_physical_db()
		{
			String^ ermsg;
			try
			{
				this->PhysicaldataSet->WriteXml("..\\App_Data\\Physical.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Physical Database(Physical.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_economic_db()
		{
			String^ ermsg;
			try
			{
				this->EconomicdataSet->ReadXml("..\\App_Data\\Economic.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Economic Database(Economic.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_economic_db()
		{
			String^ ermsg;
			try
			{
				this->EconomicdataSet->WriteXml("..\\App_Data\\Economic.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Economic Database(Economic.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_governance_db()
		{
			String^ ermsg;
			try
			{
				this->GovernancedataSet->ReadXml("..\\App_Data\\Governance.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Governance Database(Governance.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_governance_db()
		{
			String^ ermsg;
			try
			{
				this->GovernancedataSet->WriteXml("..\\App_Data\\Governance.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Governance Database(Governance.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_social_db()
		{
			String^ ermsg;
			try
			{
				this->SocialdataSet->ReadXml("..\\App_Data\\Social.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Social Database(Social.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_social_db()
		{
			String^ ermsg;
			try
			{
				this->SocialdataSet->WriteXml("..\\App_Data\\Social.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Social Database(Social.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_health_db()
		{
			String^ ermsg;
			try
			{
				this->HealthdataSet->ReadXml("..\\App_Data\\Health.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Health Database(Health.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_health_db()
		{
			String^ ermsg;
			try
			{
				this->HealthdataSet->WriteXml("..\\App_Data\\Health.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Health Database(Health.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_economicComment_db()
		{
			String^ ermsg;
			try
			{
				this->EcoComdataSet->ReadXml("..\\App_Data\\EconomicComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Economic Comments Database(EconomicComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_economicComment_db()
		{
			String^ ermsg;
			try
			{
				this->EcoComdataSet->WriteXml("..\\App_Data\\EconomicComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Economic Comments Database(EconomicComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_governanceComment_db()
		{
			String^ ermsg;
			try
			{
				this->GovComdataSet->ReadXml("..\\App_Data\\GovernanceComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Governance Comments Database(GovernanceComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_governanceComment_db()
		{
			String^ ermsg;
			try
			{
				this->GovComdataSet->WriteXml("..\\App_Data\\GovernanceComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Governance Comments Database(GovernanceComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_healthComment_db()
		{
			String^ ermsg;
			try
			{
				this->HeaComdataSet->ReadXml("..\\App_Data\\HealthComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Health Comments Database(HealthComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_healthComment_db()
		{
			String^ ermsg;
			try
			{
				this->HeaComdataSet->WriteXml("..\\App_Data\\HealthComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Health Comments Database(HealthComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_physicalComment_db()
		{
			String^ ermsg;
			try
			{
				this->PhyComdataSet->ReadXml("..\\App_Data\\PhysicalComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Physical Comments Database(PhysicalComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_physicalComment_db()
		{
			String^ ermsg;
			try
			{
				this->PhyComdataSet->WriteXml("..\\App_Data\\PhysicalComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Physical Comments Database(PhysicalComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

		public: int read_socialComment_db()
		{
			String^ ermsg;
			try
			{
				this->SocComdataSet->ReadXml("..\\App_Data\\SocialComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Social Comments Database(SocialComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}
		public: int write_socialComment_db()
		{
			String^ ermsg;
			try
			{
				this->SocComdataSet->WriteXml("..\\App_Data\\SocialComments.xml");
			}
			catch(System::IO::FileNotFoundException^ e)
			{
				ermsg = e->ToString();
				MessageBox::Show( "Social Comments Database(SocialComments.xml) missing", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error );
				this->error = 1;
			}
			return this->error;
		}

#pragma endregion
	};
}
