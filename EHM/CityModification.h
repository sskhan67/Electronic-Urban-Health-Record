#pragma once

namespace EHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CityModification
	/// </summary>
	public ref class CityModification : public System::Windows::Forms::Form
	{
	public:
		CityModification(void)
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
		~CityModification()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnEdit;
	protected: 
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnExit;

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
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(42, 104);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(222, 51);
			this->btnEdit->TabIndex = 1;
			this->btnEdit->Text = L"Change A City Information";
			this->btnEdit->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(42, 214);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(222, 52);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"Delete A City";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(42, 321);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(222, 52);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &CityModification::btnExit_Click);
			// 
			// CityModification
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 480);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Name = L"CityModification";
			this->Text = L"CityModification";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			}
	};
}
