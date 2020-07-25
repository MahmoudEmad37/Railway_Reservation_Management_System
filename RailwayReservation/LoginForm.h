#pragma once
//#include "Files.h"
//#include "Login.h"
#include "MyForm.h"
#include "PassengerForm.h"
#include <time.h>
//#include <iostream>

namespace RailwayReservation 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	//login lists;
	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  loginAsPassenger;
	protected:
	private: System::Windows::Forms::Button^  loginAsAdmin;
	private: System::Windows::Forms::Button^  LoginRegister;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  passLabel;
	private: System::Windows::Forms::Label^  emailLabel;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  emailBox;
	private: System::Windows::Forms::Button^  registerBtn;
	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::PictureBox^  backBtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  passwordBox;
	private: System::Windows::Forms::Panel^  upPanel;
	private: System::Windows::Forms::PictureBox^  closeBtn;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  nameLabel;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::TextBox^  nameBox;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->loginAsPassenger = (gcnew System::Windows::Forms::Button());
			this->loginAsAdmin = (gcnew System::Windows::Forms::Button());
			this->LoginRegister = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->emailBox = (gcnew System::Windows::Forms::TextBox());
			this->registerBtn = (gcnew System::Windows::Forms::Button());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->backBtn = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->upPanel = (gcnew System::Windows::Forms::Panel());
			this->closeBtn = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->BeginInit();
			this->upPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeBtn))->BeginInit();
			this->SuspendLayout();
			// 
			// loginAsPassenger
			// 
			this->loginAsPassenger->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loginAsPassenger->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginAsPassenger->FlatAppearance->BorderSize = 0;
			this->loginAsPassenger->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginAsPassenger->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginAsPassenger->ForeColor = System::Drawing::Color::White;
			this->loginAsPassenger->Location = System::Drawing::Point(55, 216);
			this->loginAsPassenger->Name = L"loginAsPassenger";
			this->loginAsPassenger->Size = System::Drawing::Size(250, 62);
			this->loginAsPassenger->TabIndex = 48;
			this->loginAsPassenger->Text = L"Login As Passenger";
			this->loginAsPassenger->UseVisualStyleBackColor = false;
			this->loginAsPassenger->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::loginAsPassenger_MouseClick);
			// 
			// loginAsAdmin
			// 
			this->loginAsAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loginAsAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginAsAdmin->FlatAppearance->BorderSize = 0;
			this->loginAsAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginAsAdmin->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginAsAdmin->ForeColor = System::Drawing::Color::White;
			this->loginAsAdmin->Location = System::Drawing::Point(55, 110);
			this->loginAsAdmin->Name = L"loginAsAdmin";
			this->loginAsAdmin->Size = System::Drawing::Size(250, 62);
			this->loginAsAdmin->TabIndex = 47;
			this->loginAsAdmin->Text = L"Login As Admin";
			this->loginAsAdmin->UseVisualStyleBackColor = false;
			this->loginAsAdmin->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::loginAsAdmin_MouseClick);
			// 
			// LoginRegister
			// 
			this->LoginRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->LoginRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LoginRegister->FlatAppearance->BorderSize = 0;
			this->LoginRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginRegister->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginRegister->ForeColor = System::Drawing::Color::White;
			this->LoginRegister->Location = System::Drawing::Point(55, 251);
			this->LoginRegister->Name = L"LoginRegister";
			this->LoginRegister->Size = System::Drawing::Size(250, 62);
			this->LoginRegister->TabIndex = 46;
			this->LoginRegister->Text = L"Login";
			this->LoginRegister->UseVisualStyleBackColor = false;
			this->LoginRegister->Visible = false;
			this->LoginRegister->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::LoginRegister_MouseClick);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel4->Location = System::Drawing::Point(55, 190);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(250, 3);
			this->panel4->TabIndex = 41;
			this->panel4->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->Location = System::Drawing::Point(0, 104);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(353, 3);
			this->panel3->TabIndex = 39;
			this->panel3->Visible = false;
			// 
			// passLabel
			// 
			this->passLabel->AutoSize = true;
			this->passLabel->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->passLabel->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLabel->ForeColor = System::Drawing::Color::Silver;
			this->passLabel->Location = System::Drawing::Point(81, 200);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(96, 23);
			this->passLabel->TabIndex = 43;
			this->passLabel->Text = L"Password";
			this->passLabel->Visible = false;
			this->passLabel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::passLabel_MouseClick);
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->ForeColor = System::Drawing::Color::Silver;
			this->emailLabel->Location = System::Drawing::Point(81, 155);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(70, 23);
			this->emailLabel->TabIndex = 42;
			this->emailLabel->Text = L"E-mail";
			this->emailLabel->Visible = false;
			this->emailLabel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::emailLabel_MouseClick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(81, 225);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 3);
			this->panel2->TabIndex = 40;
			this->panel2->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(81, 180);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 3);
			this->panel1->TabIndex = 38;
			this->panel1->Visible = false;
			// 
			// emailBox
			// 
			this->emailBox->BackColor = System::Drawing::Color::White;
			this->emailBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->emailBox->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailBox->ForeColor = System::Drawing::Color::Black;
			this->emailBox->Location = System::Drawing::Point(81, 155);
			this->emailBox->Name = L"emailBox";
			this->emailBox->Size = System::Drawing::Size(200, 23);
			this->emailBox->TabIndex = 35;
			this->emailBox->Visible = false;
			this->emailBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::emailBox_MouseClick);
			// 
			// registerBtn
			// 
			this->registerBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registerBtn->FlatAppearance->BorderSize = 0;
			this->registerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerBtn->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerBtn->ForeColor = System::Drawing::Color::Gray;
			this->registerBtn->Location = System::Drawing::Point(176, 57);
			this->registerBtn->Name = L"registerBtn";
			this->registerBtn->Size = System::Drawing::Size(177, 50);
			this->registerBtn->TabIndex = 45;
			this->registerBtn->Text = L"Register";
			this->registerBtn->UseVisualStyleBackColor = true;
			this->registerBtn->Visible = false;
			this->registerBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::registerBtn_MouseClick);
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::White;
			this->loginBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::Gray;
			this->loginBtn->Location = System::Drawing::Point(0, 57);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(177, 50);
			this->loginBtn->TabIndex = 44;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Visible = false;
			this->loginBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::loginBtn_MouseClick);
			// 
			// backBtn
			// 
			this->backBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->backBtn->BackColor = System::Drawing::Color::Black;
			this->backBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(274, 2);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(35, 35);
			this->backBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->backBtn->TabIndex = 2;
			this->backBtn->TabStop = false;
			this->backBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::backBtn_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Railway Reservation";
			// 
			// passwordBox
			// 
			this->passwordBox->BackColor = System::Drawing::Color::White;
			this->passwordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordBox->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordBox->ForeColor = System::Drawing::Color::Black;
			this->passwordBox->Location = System::Drawing::Point(81, 200);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(200, 23);
			this->passwordBox->TabIndex = 37;
			this->passwordBox->Visible = false;
			this->passwordBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::passwordBox_MouseClick);
			// 
			// upPanel
			// 
			this->upPanel->Controls->Add(this->backBtn);
			this->upPanel->Controls->Add(this->label1);
			this->upPanel->Controls->Add(this->closeBtn);
			this->upPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->upPanel->Location = System::Drawing::Point(0, 0);
			this->upPanel->Name = L"upPanel";
			this->upPanel->Size = System::Drawing::Size(353, 40);
			this->upPanel->TabIndex = 36;
			// 
			// closeBtn
			// 
			this->closeBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->closeBtn->BackColor = System::Drawing::Color::Black;
			this->closeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(315, 2);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(35, 35);
			this->closeBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->closeBtn->TabIndex = 0;
			this->closeBtn->TabStop = false;
			this->closeBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::closeBtn_MouseClick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel5->Location = System::Drawing::Point(55, 150);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(250, 3);
			this->panel5->TabIndex = 45;
			this->panel5->Visible = false;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::Silver;
			this->nameLabel->Location = System::Drawing::Point(81, 115);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(63, 23);
			this->nameLabel->TabIndex = 46;
			this->nameLabel->Text = L"Name";
			this->nameLabel->Visible = false;
			this->nameLabel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::nameLabel_MouseClick);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(81, 140);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 3);
			this->panel6->TabIndex = 44;
			this->panel6->Visible = false;
			// 
			// nameBox
			// 
			this->nameBox->BackColor = System::Drawing::Color::White;
			this->nameBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameBox->ForeColor = System::Drawing::Color::Black;
			this->nameBox->Location = System::Drawing::Point(81, 115);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(200, 23);
			this->nameBox->TabIndex = 43;
			this->nameBox->Visible = false;
			this->nameBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::nameBox_MouseClick);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(353, 330);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->loginAsPassenger);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->loginAsAdmin);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->LoginRegister);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->passLabel);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->emailBox);
			this->Controls->Add(this->registerBtn);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->upPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::LoginForm_MouseClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backBtn))->EndInit();
			this->upPanel->ResumeLayout(false);
			this->upPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeBtn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool regist = false;
	public: bool isAdmin = false;
	//public: int isLogged;

	private: System::Void closeBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		Application::Exit();
	}

	private: System::Void emailBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (emailBox->Text != " ")
			emailLabel->Visible = false;
		if (emailBox->Text == " ")
			emailLabel->Visible = true;
		panel1->Visible = true;
		panel2->Visible = false;
		panel6->Visible = false;
		if (passwordBox->Text == " " || passwordBox->Text == "")
			passLabel->Visible = true;
		if(nameBox->Visible == true)
			if (nameBox->Text == " " || nameBox->Text == "")
				nameLabel->Visible = true;
	}

	private: System::Void passwordBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		if (passwordBox->Text != " ")
			passLabel->Visible = false;
		if (passwordBox->Text == " ")
			passLabel->Visible = true;
		panel2->Visible = true;
		panel1->Visible = false;
		panel6->Visible = false;
		if (emailBox->Text == " " || emailBox->Text == "")
			emailLabel->Visible = true;
		if (nameBox->Visible == true)
			if (nameBox->Text == " " || nameBox->Text == "")
				nameLabel->Visible = true;
	}

	private: System::Void LoginForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		if (passwordBox->Visible == true)
		{
			label1->Focus();
			if (emailBox->Text == " " || emailBox->Text == "")
				emailLabel->Visible = true;
			if (passwordBox->Text == " " || passwordBox->Text == "")
				passLabel->Visible = true;
			if (nameBox->Visible == true)
				if (nameBox->Text == " " || nameBox->Text == "")
					nameLabel->Visible = true;
			panel1->Visible = false;
			panel2->Visible = false;
			panel6->Visible = false;
		}
	}

	private: System::Void emailLabel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		emailBox->Focus();
		if (emailBox->Text != " ")
			emailLabel->Visible = false;
		if (emailBox->Text == " ")
			emailLabel->Visible = true;
		panel1->Visible = true;
		panel2->Visible = false;
		panel6->Visible = false;
		if (passwordBox->Text == " " || passwordBox->Text == "")
			passLabel->Visible = true;
		if (nameBox->Visible == true)
			if (nameBox->Text == " " || nameBox->Text == "")
				nameLabel->Visible = true;
	}

	private: System::Void passLabel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		passwordBox->Focus();
		if (passwordBox->Text != " ")
			passLabel->Visible = false;
		if (passwordBox->Text == " ")
			passLabel->Visible = true;
		panel2->Visible = true;
		panel1->Visible = false;
		panel6->Visible = false;
		if (emailBox->Text == " " || emailBox->Text == "")
			emailLabel->Visible = true;
		if (nameBox->Visible == true)
			if (nameBox->Text == " " || nameBox->Text == "")
				nameLabel->Visible = true;
	}

	private: System::Void registerBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		LoginRegister->Text = "Register";
		nameBox->Visible = true;
		nameLabel->Visible = true;
		panel5->Visible = true;
		panel1->Visible = false;
		panel2->Visible = false;
		emailLabel->Visible = true;
		passLabel->Visible = true;

		regist = true;
		nameBox->Clear();
		emailBox->Clear();
		passwordBox->Clear();
	}

	private: System::Void loginBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		LoginRegister->Text = "Login";
		nameBox->Visible = false;
		nameLabel->Visible = false;
		panel5->Visible = false;
		panel1->Visible = false;
		panel2->Visible = false;
		emailLabel->Visible = true;
		passLabel->Visible = true;
		regist = false;
		nameBox->Clear();
		emailBox->Clear();
		passwordBox->Clear();
	}

	private: System::Void LoginRegister_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		string username = msclr::interop::marshal_as<string>(emailBox->Text);
		string password = msclr::interop::marshal_as<string>(passwordBox->Text);
		string name = msclr::interop::marshal_as<string>(nameBox->Text);

		String^ readCurrentTime;
		string nowTime;
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
		readCurrentTime = tm.tm_year + 1900 + "/" + (tm.tm_mon + 1) + "/" + tm.tm_mday + " " + tm.tm_hour + ":" + tm.tm_min + ":" + tm.tm_sec;
		nowTime = msclr::interop::marshal_as<string>(readCurrentTime);
		PassengerClass pasnow;
		int nowPassenger;
		if (regist)
		{
			nowPassenger = pasnow.regist(nowPassenger, name, username, password);
			pasnow.railway_input(3);

			if (nowPassenger == -1)
				MessageBox::Show("E-Mail Already Exists");
			else
			{
				nowPassenger = pasnow.regist(nowPassenger, name, username, password);
				MessageBox::Show("Registered Successfully");
				nowPassenger = pasnow.passengers.size() + 1;
				PassengerForm::isLogged = nowPassenger;
				PassengerForm^ open = gcnew PassengerForm;
				open->ShowDialog();
			}
		}

		if (!regist)
		{
			if (isAdmin)
			{
				AdminClass adm;
				bool check = adm.login(username, password);
				if (check)
				{
					MessageBox::Show("Login successfully");
					adm.insertAsAdmin(nowTime);
					MyForm^ open = gcnew MyForm;
					open->ShowDialog();
				}

				else
					MessageBox::Show("username or password is incorrect");
			}
			else if (!isAdmin)
			{
				nowPassenger =pasnow.loginAsPas(username, password);
				if (nowPassenger != -1)
				{
					MessageBox::Show("Login successfully");
					PassengerForm::isLogged = nowPassenger;
					PassengerForm^ open = gcnew PassengerForm;
					open->ShowDialog();
				}

				else
					MessageBox::Show("username or password is incorrect");
			}
		}
	}

	private: System::Void loginAsAdmin_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		isAdmin = true;
		loginAsAdmin->Visible = false;
		loginAsPassenger->Visible = false;
		loginBtn->Visible = false;
		registerBtn->Visible = false;
		emailBox->Visible = true;
		emailLabel->Visible = true;
		emailLabel->BringToFront();
		passwordBox->Visible = true;
		passLabel->Visible = true;
		passLabel->BringToFront();
		panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
		panel4->Visible = true;
		LoginRegister->Visible = true;
		LoginRegister->Text = "Login";
		emailBox->Text = "";
		passwordBox->Text = "";
	}

	private: System::Void loginAsPassenger_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		isAdmin = false;
		loginAsAdmin->Visible = false;
		loginAsPassenger->Visible = false;
		loginBtn->Visible = true;
		registerBtn->Visible = true;
		emailBox->Visible = true;
		emailLabel->Visible = true;
		emailLabel->BringToFront();
		passwordBox->Visible = true;
		passLabel->Visible = true;
		passLabel->BringToFront();
		panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = true;
		panel3->BringToFront();
		panel4->Visible = true;
		LoginRegister->Visible = true;
		LoginRegister->Text = "Login";
		emailBox->Text = "";
		passwordBox->Text = "";
	}

	private: System::Void backBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		loginAsAdmin->Visible = true;
		loginAsPassenger->Visible = true;
		loginBtn->Visible = false;
		registerBtn->Visible = false;
		emailBox->Visible = false;
		emailLabel->Visible = false;
		passwordBox->Visible = false;
		passLabel->Visible = false;
		nameBox->Visible = false;
		nameLabel->Visible = false;
		panel1->Visible = false;
		panel2->Visible = false;
		panel3->Visible = false;
		panel4->Visible = false;
		panel6->Visible = false;
		LoginRegister->Visible = false;
	}

	private: System::Void nameBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (nameBox->Text != " ")
			nameLabel->Visible = false;
		if (nameBox->Text == " ")
			nameLabel->Visible = true;
		panel1->Visible = false;
		panel2->Visible = false;
		panel6->Visible = true;
		if (passwordBox->Text == " " || passwordBox->Text == "")
			passLabel->Visible = true;
		if (emailBox->Text == " " || emailBox->Text == "")
			emailLabel->Visible = true;
	}
	
	private: System::Void nameLabel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (nameBox->Text != " ")
			nameLabel->Visible = false;
		if (nameBox->Text == " ")
			nameLabel->Visible = true;
		panel1->Visible = false;
		panel2->Visible = false;
		panel6->Visible = true;
		if (passwordBox->Text == " " || passwordBox->Text == "")
			passLabel->Visible = true;
		if (emailBox->Text == " " || emailBox->Text == "")
			emailLabel->Visible = true;
	}

	private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		String^ readCurrentTime;
		string nowTime;
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
		PassengerClass pas;
		pas.railway_input(1);
		list<TrainClass>::iterator ite;
		for (ite = pas.trains.begin(); ite != pas.trains.end(); ite++)
		{
			if (tm.tm_year+1900 > ite->travel_date.tm_year)
			{
				ite->travel_date.tm_mday = ite->travel_date.tm_mday + 1;
				ite->travel_date.tm_year = tm.tm_year+1900 ;
				ite->travel_date.tm_mon = tm.tm_mon+1 ;
				ite->travel_date.tm_mday = tm.tm_mday;
			}
			else if (tm.tm_year+1900 == ite->travel_date.tm_year)
			{
				if (tm.tm_mon+1 > ite->travel_date.tm_mon)
				{
					ite->travel_date.tm_mday = ite->travel_date.tm_mday + 1;
					ite->travel_date.tm_year = tm.tm_year + 1900;
					ite->travel_date.tm_mon = tm.tm_mon + 1;
					ite->travel_date.tm_mday = tm.tm_mday;
				}
				else if (tm.tm_mon+1 == ite->travel_date.tm_mon)
				{
					if (tm.tm_mday > ite->travel_date.tm_mday)
					{
						ite->travel_date.tm_mday = ite->travel_date.tm_mday + 1;
						ite->travel_date.tm_year = tm.tm_year + 1900;
						ite->travel_date.tm_mon = tm.tm_mon + 1;
						ite->travel_date.tm_mday = tm.tm_mday;
					}
					else if (tm.tm_mday == ite->travel_date.tm_mday)
					{
						if (tm.tm_hour > ite->travel_date.tm_hour)
						{
							ite->travel_date.tm_mday = ite->travel_date.tm_mday + 1;
							ite->travel_date.tm_year = tm.tm_year + 1900;
							ite->travel_date.tm_mon = tm.tm_mon + 1;
							ite->travel_date.tm_mday = tm.tm_mday;
						}
						else if (tm.tm_hour == ite->travel_date.tm_hour)
						{
							if (tm.tm_min >= ite->travel_date.tm_min)
							{
								ite->travel_date.tm_mday = ite->travel_date.tm_mday + 1;
								ite->travel_date.tm_year = tm.tm_year + 1900;
								ite->travel_date.tm_mon = tm.tm_mon + 1;
								ite->travel_date.tm_mday = tm.tm_mday;
							}
						}
					}
				}
			}
		}
		string outFile1 = "train.txt";
		ofstream output1(outFile1.c_str(), ios::trunc);
		for (ite = pas.trains.begin(); ite != pas.trains.end(); ite++)
		{
			output1 << endl << ite->train_num << "\t" << ite->start << "\t" << ite->end << "\t" << ite->travel_date.tm_hour << ":" << ite->travel_date.tm_min << "\t"
				<< ite->travel_date.tm_mday << "/" << ite->travel_date.tm_mon << "/" << ite->travel_date.tm_year << "\t" << ite->number_of_seat << "\t" << ite->ticket_cost;
		}
		output1.close();
		pas.railway_input(2);
		list<RequestClass>::iterator it;
		string outFile = "request.txt";
		ofstream output(outFile.c_str(), ios::trunc);
		for (it = pas.requests.begin(); it != pas.requests.end(); it++)
		{
			if (tm.tm_year + 1900 > stoi(it->date_of_travel.year))
			{
				continue;
			}
			else if (tm.tm_year + 1900 == stoi(it->date_of_travel.year))
			{
				if (tm.tm_mon + 1 > stoi(it->date_of_travel.month))
				{
					continue;
				}
				else if (tm.tm_mon + 1 == stoi(it->date_of_travel.month))
				{
					if (tm.tm_mday > stoi(it->date_of_travel.day))
					{
						continue;
					}
					else if (tm.tm_mday == stoi(it->date_of_travel.day))
					{
						if (tm.tm_hour > stoi(it->date_of_travel.hour))
						{
							continue;
						}
						else if (tm.tm_hour == stoi(it->date_of_travel.hour))
						{
							if (tm.tm_min >= stoi(it->date_of_travel.minute))
							{
								continue;
							}
						}
					}
				}
			}
			output << endl << it->id << "\t" << it->start << "\t" << it->end << "\t" << it->date_of_travel.hour << ":" << it->date_of_travel.minute << "\t"
				<< it->date_of_travel.day << "/" << it->date_of_travel.month << "/" << it->date_of_travel.year << "\t" << it->passenger_id << "\t" << it->train_num;
		}
		output.close();
	}
	};
}
