#pragma once
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include"AdminClass.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace RailwayReservation {

	/// <summary>
	/// Summary for EditPassenger
	/// </summary>
	public ref class EditPassenger : public System::Windows::Forms::UserControl
	{
	public:
		EditPassenger(void)
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
		~EditPassenger()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  pasPassBox;
	protected:

	public: System::Windows::Forms::TextBox^  pasMailBox;
	protected:

	public: System::Windows::Forms::TextBox^  pasNameBox;

	public: System::Windows::Forms::TextBox^  pasIDBox;

	public: System::Windows::Forms::Label^  PasPassword;

	public: System::Windows::Forms::Label^  PasMail;

	public: System::Windows::Forms::Label^  PasName;

	public: System::Windows::Forms::Label^  PasID;
	private: System::Windows::Forms::Button^  FinishBtn;
	public: System::Windows::Forms::ComboBox^  choosePasBox;
	private:

	private: System::Windows::Forms::Label^  choosePasLabel;

	private:

	public:


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
			this->pasPassBox = (gcnew System::Windows::Forms::TextBox());
			this->pasMailBox = (gcnew System::Windows::Forms::TextBox());
			this->pasNameBox = (gcnew System::Windows::Forms::TextBox());
			this->pasIDBox = (gcnew System::Windows::Forms::TextBox());
			this->PasPassword = (gcnew System::Windows::Forms::Label());
			this->PasMail = (gcnew System::Windows::Forms::Label());
			this->PasName = (gcnew System::Windows::Forms::Label());
			this->PasID = (gcnew System::Windows::Forms::Label());
			this->FinishBtn = (gcnew System::Windows::Forms::Button());
			this->choosePasBox = (gcnew System::Windows::Forms::ComboBox());
			this->choosePasLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// pasPassBox
			// 
			this->pasPassBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pasPassBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pasPassBox->Location = System::Drawing::Point(480, 256);
			this->pasPassBox->Name = L"pasPassBox";
			this->pasPassBox->Size = System::Drawing::Size(200, 25);
			this->pasPassBox->TabIndex = 30;
			// 
			// pasMailBox
			// 
			this->pasMailBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pasMailBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pasMailBox->Location = System::Drawing::Point(480, 135);
			this->pasMailBox->Name = L"pasMailBox";
			this->pasMailBox->Size = System::Drawing::Size(200, 25);
			this->pasMailBox->TabIndex = 29;
			// 
			// pasNameBox
			// 
			this->pasNameBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pasNameBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pasNameBox->Location = System::Drawing::Point(100, 256);
			this->pasNameBox->Name = L"pasNameBox";
			this->pasNameBox->Size = System::Drawing::Size(200, 25);
			this->pasNameBox->TabIndex = 28;
			// 
			// pasIDBox
			// 
			this->pasIDBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pasIDBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pasIDBox->Location = System::Drawing::Point(100, 135);
			this->pasIDBox->Name = L"pasIDBox";
			this->pasIDBox->Size = System::Drawing::Size(200, 25);
			this->pasIDBox->TabIndex = 27;
			// 
			// PasPassword
			// 
			this->PasPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PasPassword->AutoSize = true;
			this->PasPassword->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasPassword->ForeColor = System::Drawing::Color::White;
			this->PasPassword->Location = System::Drawing::Point(350, 256);
			this->PasPassword->Name = L"PasPassword";
			this->PasPassword->Size = System::Drawing::Size(113, 23);
			this->PasPassword->TabIndex = 26;
			this->PasPassword->Text = L"Password :";
			// 
			// PasMail
			// 
			this->PasMail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PasMail->AutoSize = true;
			this->PasMail->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasMail->ForeColor = System::Drawing::Color::White;
			this->PasMail->Location = System::Drawing::Point(350, 135);
			this->PasMail->Name = L"PasMail";
			this->PasMail->Size = System::Drawing::Size(87, 23);
			this->PasMail->TabIndex = 25;
			this->PasMail->Text = L"E-Mail :";
			// 
			// PasName
			// 
			this->PasName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PasName->AutoSize = true;
			this->PasName->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasName->ForeColor = System::Drawing::Color::White;
			this->PasName->Location = System::Drawing::Point(5, 256);
			this->PasName->Name = L"PasName";
			this->PasName->Size = System::Drawing::Size(78, 23);
			this->PasName->TabIndex = 24;
			this->PasName->Text = L"Name :";
			// 
			// PasID
			// 
			this->PasID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PasID->AutoSize = true;
			this->PasID->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasID->ForeColor = System::Drawing::Color::White;
			this->PasID->Location = System::Drawing::Point(5, 135);
			this->PasID->Name = L"PasID";
			this->PasID->Size = System::Drawing::Size(44, 23);
			this->PasID->TabIndex = 23;
			this->PasID->Text = L"ID :";
			// 
			// FinishBtn
			// 
			this->FinishBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FinishBtn->BackColor = System::Drawing::Color::Black;
			this->FinishBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FinishBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FinishBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FinishBtn->ForeColor = System::Drawing::Color::White;
			this->FinishBtn->Location = System::Drawing::Point(153, 387);
			this->FinishBtn->Name = L"FinishBtn";
			this->FinishBtn->Size = System::Drawing::Size(400, 68);
			this->FinishBtn->TabIndex = 31;
			this->FinishBtn->Text = L"FINISH";
			this->FinishBtn->UseVisualStyleBackColor = false;
			this->FinishBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &EditPassenger::FinishBtn_MouseClick);
			// 
			// choosePasBox
			// 
			this->choosePasBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->choosePasBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->choosePasBox->FormattingEnabled = true;
			this->choosePasBox->Location = System::Drawing::Point(371, 31);
			this->choosePasBox->Name = L"choosePasBox";
			this->choosePasBox->Size = System::Drawing::Size(147, 23);
			this->choosePasBox->TabIndex = 33;
			this->choosePasBox->TextChanged += gcnew System::EventHandler(this, &EditPassenger::choosePasBox_TextChanged);
			// 
			// choosePasLabel
			// 
			this->choosePasLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->choosePasLabel->AutoSize = true;
			this->choosePasLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choosePasLabel->ForeColor = System::Drawing::Color::White;
			this->choosePasLabel->Location = System::Drawing::Point(169, 31);
			this->choosePasLabel->Name = L"choosePasLabel";
			this->choosePasLabel->Size = System::Drawing::Size(196, 23);
			this->choosePasLabel->TabIndex = 32;
			this->choosePasLabel->Text = L"Choose Passenger :";
			// 
			// EditPassenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Controls->Add(this->choosePasBox);
			this->Controls->Add(this->choosePasLabel);
			this->Controls->Add(this->FinishBtn);
			this->Controls->Add(this->pasPassBox);
			this->Controls->Add(this->pasMailBox);
			this->Controls->Add(this->pasNameBox);
			this->Controls->Add(this->pasIDBox);
			this->Controls->Add(this->PasPassword);
			this->Controls->Add(this->PasMail);
			this->Controls->Add(this->PasName);
			this->Controls->Add(this->PasID);
			this->Name = L"EditPassenger";
			this->Size = System::Drawing::Size(721, 519);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void FinishBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	string selectedTrain = msclr::interop::marshal_as<string>(choosePasBox->SelectedItem->ToString());
	AdminClass adm;
	adm.railway_input(2);
	vector<PassengerClass>::iterator it;
	for (it = adm.passengers.begin(); it != adm.passengers.end(); it++)
	{
		string xstring;
		xstring = it->id;
		if (selectedTrain == xstring)
		{
			it->id = msclr::interop::marshal_as<string>(pasIDBox->Text);
			it->name = msclr::interop::marshal_as<string>(pasNameBox->Text);
			it->mail = msclr::interop::marshal_as<string>(pasMailBox->Text);
			it->password = msclr::interop::marshal_as<string>(pasPassBox->Text);
			break;
		}
	}
	string outFile = "passenger.txt";
	ofstream output(outFile.c_str(), ios::trunc);
	for (it = adm.passengers.begin(); it != adm.passengers.end(); it++)
	{
		output << endl << it->id << "\t" << it->name << "\t" << it->mail << "\t" << it->password;
	}
	MessageBox::Show("Edit Passenger successfully");

}
private: System::Void choosePasBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	string selectedPassenger = msclr::interop::marshal_as<string>(choosePasBox->SelectedItem->ToString());
	AdminClass adm;
	adm.railway_input(2);
	vector<PassengerClass>::iterator it;
	for (it = adm.passengers.begin(); it != adm.passengers.end(); it++)
	{
		string xstring;
		xstring = it->id;
		if (selectedPassenger == xstring)
		{
			pasIDBox->Text = msclr::interop::marshal_as<System::String^>(it->id);
			pasNameBox->Text = msclr::interop::marshal_as<System::String^>(it->name);
			pasMailBox->Text = msclr::interop::marshal_as<System::String^>(it->mail);
			pasPassBox->Text = msclr::interop::marshal_as<System::String^>(it->password);
		}
	}
}
};
}
