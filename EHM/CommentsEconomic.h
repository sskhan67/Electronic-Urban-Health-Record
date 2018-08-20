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
	/// Summary for CommentsEconomic
	/// </summary>
	public ref class CommentsEconomic : public System::Windows::Forms::Form
	{
	public:
		CommentsEconomic(void)
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
		~CommentsEconomic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DataGridView^  XMLdataGridView;
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->XMLdataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->XMLdataGridView))->BeginInit();
			this->SuspendLayout();
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
			this->label8->TabIndex = 18;
			this->label8->Text = L"Electronic Urban Health Record";
			// 
			// XMLdataGridView
			// 
			this->XMLdataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->XMLdataGridView->Location = System::Drawing::Point(40, 186);
			this->XMLdataGridView->Name = L"XMLdataGridView";
			this->XMLdataGridView->Size = System::Drawing::Size(1285, 381);
			this->XMLdataGridView->TabIndex = 19;
			// 
			// CommentsEconomic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->XMLdataGridView);
			this->Controls->Add(this->label8);
			this->Name = L"CommentsEconomic";
			this->Text = L"CommentsEconomic";
			this->Load += gcnew System::EventHandler(this, &CommentsEconomic::CommentsEconomic_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->XMLdataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	XmlDataDocument mydoc;
	private: System::Void CommentsEconomic_Load(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			mydoc.DataSet->ReadXml("..\\App_Data\\EconomicComments.xml");
			XMLdataGridView->DataSource = mydoc.DataSet->DefaultViewManager;
			XMLdataGridView->DataMember = "Economic";
		}
		catch(Exception^ ex)
		{
			MessageBox::Show("Error:"+ ex->Message);
		}
	}
	};
}
