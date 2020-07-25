#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace RailwayReservation {

	/// <summary>
	/// Summary for DisplayPassengers
	/// </summary>
	public ref class DisplayPassengers : public System::Windows::Forms::UserControl
	{
	public:
		DisplayPassengers(void)
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
		~DisplayPassengers()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  PasName;
	protected:
	public: System::Windows::Forms::Label^  PasPassword;
	public: System::Windows::Forms::Label^  PasMail;
	public: System::Windows::Forms::Label^  PasID;

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
			this->PasName = (gcnew System::Windows::Forms::Label());
			this->PasPassword = (gcnew System::Windows::Forms::Label());
			this->PasMail = (gcnew System::Windows::Forms::Label());
			this->PasID = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// PasName
			// 
			this->PasName->AutoSize = true;
			this->PasName->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasName->ForeColor = System::Drawing::Color::White;
			this->PasName->Location = System::Drawing::Point(5, 55);
			this->PasName->Name = L"PasName";
			this->PasName->Size = System::Drawing::Size(78, 23);
			this->PasName->TabIndex = 15;
			this->PasName->Text = L"Name :";
			// 
			// PasPassword
			// 
			this->PasPassword->AutoSize = true;
			this->PasPassword->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasPassword->ForeColor = System::Drawing::Color::White;
			this->PasPassword->Location = System::Drawing::Point(5, 155);
			this->PasPassword->Name = L"PasPassword";
			this->PasPassword->Size = System::Drawing::Size(113, 23);
			this->PasPassword->TabIndex = 14;
			this->PasPassword->Text = L"Password :";
			// 
			// PasMail
			// 
			this->PasMail->AutoSize = true;
			this->PasMail->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasMail->ForeColor = System::Drawing::Color::White;
			this->PasMail->Location = System::Drawing::Point(5, 105);
			this->PasMail->Name = L"PasMail";
			this->PasMail->Size = System::Drawing::Size(87, 23);
			this->PasMail->TabIndex = 13;
			this->PasMail->Text = L"E-Mail :";
			// 
			// PasID
			// 
			this->PasID->AutoSize = true;
			this->PasID->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasID->ForeColor = System::Drawing::Color::White;
			this->PasID->Location = System::Drawing::Point(5, 5);
			this->PasID->Name = L"PasID";
			this->PasID->Size = System::Drawing::Size(44, 23);
			this->PasID->TabIndex = 12;
			this->PasID->Text = L"ID :";
			// 
			// DisplayPassengers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Controls->Add(this->PasName);
			this->Controls->Add(this->PasPassword);
			this->Controls->Add(this->PasMail);
			this->Controls->Add(this->PasID);
			this->Name = L"DisplayPassengers";
			this->Size = System::Drawing::Size(335, 195);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
