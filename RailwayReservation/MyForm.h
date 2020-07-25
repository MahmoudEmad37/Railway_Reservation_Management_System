#pragma once
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>
#include "DisplayTrains.h"
#include "DisplayPassengers.h"
#include "AddTrains.h"
//#include "EditPassenger.h"
//#include "AdminClass.h"

namespace RailwayReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace msclr::interop;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{ 
	public:
		MyForm()
		{
			AdminClass adm;
			adm.railway_input(1);
			InitializeComponent();
			list<TrainClass>::iterator it;
			for (it = adm.trains.begin(); it != adm.trains.end(); it++)
			{
				DisplayTrains^ display = gcnew DisplayTrains();
				display->BookBtn->Visible = false;
				String^ xstring;
				xstring = marshal_as<String^>(it->train_num);
				display->TrainNum->Text = "Train Number : " + xstring;
				xstring = marshal_as<String^>(it->start);
				display->BoardingPoint->Text = "Boarding Point : " + xstring;
				xstring = marshal_as<String^>(it->end);
				display->DistinationPoint->Text = "Destination Point : " + xstring;
				xstring = marshal_as<String^>(it->number_of_seat);
				display->AvailableSeats->Text = "No. Of Available Seats : " + xstring;
				xstring = marshal_as<String^>(it->ticket_cost);
				display->TicketPrice->Text = "Ticket Price : " + xstring;
				xstring = marshal_as<String^>(it->date_of_travel.hour+":"+it->date_of_travel.minute+" "+ it->date_of_travel.day+"/" + it->date_of_travel.month + "/" + it->date_of_travel.year);
				display->TravelDate->Text = "Travel Time : " + xstring;
				flowLayoutPanel1->Controls->Add(display);
			}
			//flowLayoutPanel1->Controls->Add(display);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  closeBtn;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::Panel^  onDisplay;
	private: System::Windows::Forms::Panel^  onEdit;
	private: System::Windows::Forms::Panel^  onHome;
	private: System::Windows::Forms::Panel^  onAdd;
	private: System::Windows::Forms::Button^  HomeBtn;
	private: System::Windows::Forms::Button^  AddBtn;
	private: System::Windows::Forms::Button^  editBtn;
	private: System::Windows::Forms::Button^  displayBtn;
	private: System::Windows::Forms::Button^  editPassengerBtn;
	private: System::Windows::Forms::Button^  editTrainBtn;
	private: System::Windows::Forms::Button^  disTrainBtn;
	private: System::Windows::Forms::Button^  disPassengerBtn;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;

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
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->closeBtn = (gcnew System::Windows::Forms::PictureBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->onDisplay = (gcnew System::Windows::Forms::Panel());
			this->onEdit = (gcnew System::Windows::Forms::Panel());
			this->onHome = (gcnew System::Windows::Forms::Panel());
			this->onAdd = (gcnew System::Windows::Forms::Panel());
			this->HomeBtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->displayBtn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->editPassengerBtn = (gcnew System::Windows::Forms::Button());
			this->editTrainBtn = (gcnew System::Windows::Forms::Button());
			this->disTrainBtn = (gcnew System::Windows::Forms::Button());
			this->disPassengerBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::Color::White;
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->closeBtn);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(800, 462);
			this->splitContainer1->SplitterDistance = 40;
			this->splitContainer1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 35);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Railway Reservation";
			// 
			// closeBtn
			// 
			this->closeBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->closeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(758, 0);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(40, 38);
			this->closeBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->closeBtn->TabIndex = 2;
			this->closeBtn->TabStop = false;
			this->closeBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::closeBtn_MouseClick);
			// 
			// splitContainer2
			// 
			this->splitContainer2->BackColor = System::Drawing::Color::White;
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->onDisplay);
			this->splitContainer2->Panel1->Controls->Add(this->onEdit);
			this->splitContainer2->Panel1->Controls->Add(this->onHome);
			this->splitContainer2->Panel1->Controls->Add(this->onAdd);
			this->splitContainer2->Panel1->Controls->Add(this->HomeBtn);
			this->splitContainer2->Panel1->Controls->Add(this->AddBtn);
			this->splitContainer2->Panel1->Controls->Add(this->editBtn);
			this->splitContainer2->Panel1->Controls->Add(this->displayBtn);
			this->splitContainer2->Panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::splitContainer2_Panel1_MouseMove);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->AutoScroll = true;
			this->splitContainer2->Panel2->Controls->Add(this->flowLayoutPanel1);
			this->splitContainer2->Panel2->Controls->Add(this->editPassengerBtn);
			this->splitContainer2->Panel2->Controls->Add(this->editTrainBtn);
			this->splitContainer2->Panel2->Controls->Add(this->disTrainBtn);
			this->splitContainer2->Panel2->Controls->Add(this->disPassengerBtn);
			this->splitContainer2->Panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::splitContainer2_Panel2_MouseMove);
			this->splitContainer2->Size = System::Drawing::Size(798, 416);
			this->splitContainer2->SplitterDistance = 70;
			this->splitContainer2->TabIndex = 0;
			// 
			// onDisplay
			// 
			this->onDisplay->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->onDisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->onDisplay->Location = System::Drawing::Point(603, 58);
			this->onDisplay->Name = L"onDisplay";
			this->onDisplay->Size = System::Drawing::Size(196, 10);
			this->onDisplay->TabIndex = 6;
			this->onDisplay->Visible = false;
			// 
			// onEdit
			// 
			this->onEdit->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->onEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->onEdit->Location = System::Drawing::Point(403, 58);
			this->onEdit->Name = L"onEdit";
			this->onEdit->Size = System::Drawing::Size(196, 10);
			this->onEdit->TabIndex = 6;
			this->onEdit->Visible = false;
			// 
			// onHome
			// 
			this->onHome->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->onHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->onHome->Location = System::Drawing::Point(3, 58);
			this->onHome->Name = L"onHome";
			this->onHome->Size = System::Drawing::Size(196, 10);
			this->onHome->TabIndex = 4;
			// 
			// onAdd
			// 
			this->onAdd->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->onAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->onAdd->Location = System::Drawing::Point(203, 58);
			this->onAdd->Name = L"onAdd";
			this->onAdd->Size = System::Drawing::Size(196, 10);
			this->onAdd->TabIndex = 5;
			this->onAdd->Visible = false;
			// 
			// HomeBtn
			// 
			this->HomeBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->HomeBtn->BackColor = System::Drawing::Color::Black;
			this->HomeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HomeBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HomeBtn->ForeColor = System::Drawing::Color::White;
			this->HomeBtn->Location = System::Drawing::Point(2, 0);
			this->HomeBtn->Name = L"HomeBtn";
			this->HomeBtn->Size = System::Drawing::Size(200, 68);
			this->HomeBtn->TabIndex = 0;
			this->HomeBtn->Text = L"HOME";
			this->HomeBtn->UseVisualStyleBackColor = false;
			this->HomeBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::HomeBtn_MouseClick);
			this->HomeBtn->MouseEnter += gcnew System::EventHandler(this, &MyForm::HomeBtn_MouseEnter);
			// 
			// AddBtn
			// 
			this->AddBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddBtn->BackColor = System::Drawing::Color::Black;
			this->AddBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddBtn->ForeColor = System::Drawing::Color::White;
			this->AddBtn->Location = System::Drawing::Point(202, 0);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(200, 68);
			this->AddBtn->TabIndex = 1;
			this->AddBtn->Text = L"ADD";
			this->AddBtn->UseVisualStyleBackColor = false;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			this->AddBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::AddBtn_MouseClick);
			this->AddBtn->MouseEnter += gcnew System::EventHandler(this, &MyForm::AddBtn_MouseEnter);
			// 
			// editBtn
			// 
			this->editBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->editBtn->BackColor = System::Drawing::Color::Black;
			this->editBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::Color::White;
			this->editBtn->Location = System::Drawing::Point(402, 0);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(200, 68);
			this->editBtn->TabIndex = 2;
			this->editBtn->Text = L"EDIT";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::editBtn_MouseClick);
			this->editBtn->MouseEnter += gcnew System::EventHandler(this, &MyForm::editBtn_MouseEnter);
			// 
			// displayBtn
			// 
			this->displayBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->displayBtn->BackColor = System::Drawing::Color::Black;
			this->displayBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->displayBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->displayBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayBtn->ForeColor = System::Drawing::Color::White;
			this->displayBtn->Location = System::Drawing::Point(602, 0);
			this->displayBtn->Name = L"displayBtn";
			this->displayBtn->Size = System::Drawing::Size(200, 68);
			this->displayBtn->TabIndex = 3;
			this->displayBtn->Text = L"DISPLAY";
			this->displayBtn->UseVisualStyleBackColor = false;
			this->displayBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::displayBtn_MouseClick);
			this->displayBtn->MouseEnter += gcnew System::EventHandler(this, &MyForm::displayBtn_MouseEnter);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(798, 342);
			this->flowLayoutPanel1->TabIndex = 12;
			this->flowLayoutPanel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::flowLayoutPanel1_MouseMove);
			// 
			// editPassengerBtn
			// 
			this->editPassengerBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->editPassengerBtn->BackColor = System::Drawing::Color::Black;
			this->editPassengerBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editPassengerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editPassengerBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editPassengerBtn->ForeColor = System::Drawing::Color::White;
			this->editPassengerBtn->Location = System::Drawing::Point(402, 75);
			this->editPassengerBtn->Name = L"editPassengerBtn";
			this->editPassengerBtn->Size = System::Drawing::Size(200, 68);
			this->editPassengerBtn->TabIndex = 11;
			this->editPassengerBtn->Text = L"PASSENGERS";
			this->editPassengerBtn->UseVisualStyleBackColor = false;
			this->editPassengerBtn->Visible = false;
			this->editPassengerBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::editPassengerBtn_MouseClick);
			// 
			// editTrainBtn
			// 
			this->editTrainBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->editTrainBtn->BackColor = System::Drawing::Color::Black;
			this->editTrainBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editTrainBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editTrainBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editTrainBtn->ForeColor = System::Drawing::Color::White;
			this->editTrainBtn->Location = System::Drawing::Point(402, 0);
			this->editTrainBtn->Name = L"editTrainBtn";
			this->editTrainBtn->Size = System::Drawing::Size(200, 68);
			this->editTrainBtn->TabIndex = 10;
			this->editTrainBtn->Text = L"TRAIN";
			this->editTrainBtn->UseVisualStyleBackColor = false;
			this->editTrainBtn->Visible = false;
			this->editTrainBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::editTrainBtn_MouseClick);
			// 
			// disTrainBtn
			// 
			this->disTrainBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->disTrainBtn->BackColor = System::Drawing::Color::Black;
			this->disTrainBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->disTrainBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->disTrainBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->disTrainBtn->ForeColor = System::Drawing::Color::White;
			this->disTrainBtn->Location = System::Drawing::Point(602, 0);
			this->disTrainBtn->Name = L"disTrainBtn";
			this->disTrainBtn->Size = System::Drawing::Size(200, 68);
			this->disTrainBtn->TabIndex = 7;
			this->disTrainBtn->Text = L"TRAIN";
			this->disTrainBtn->UseVisualStyleBackColor = false;
			this->disTrainBtn->Visible = false;
			this->disTrainBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::disTrainBtn_MouseClick);
			// 
			// disPassengerBtn
			// 
			this->disPassengerBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->disPassengerBtn->BackColor = System::Drawing::Color::Black;
			this->disPassengerBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->disPassengerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->disPassengerBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->disPassengerBtn->ForeColor = System::Drawing::Color::White;
			this->disPassengerBtn->Location = System::Drawing::Point(602, 75);
			this->disPassengerBtn->Name = L"disPassengerBtn";
			this->disPassengerBtn->Size = System::Drawing::Size(200, 68);
			this->disPassengerBtn->TabIndex = 8;
			this->disPassengerBtn->Text = L"PASSENGERS";
			this->disPassengerBtn->UseVisualStyleBackColor = false;
			this->disPassengerBtn->Visible = false;
			this->disPassengerBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::disPassengerBtn_MouseClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 462);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"AdminForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeBtn))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:	bool editClicked = false;
	public:	bool disClicked = false;
private: System::Void closeBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Application::Exit();
}
private: System::Void HomeBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	flowLayoutPanel1->Controls->Clear();
	flowLayoutPanel1->Visible = true;
	flowLayoutPanel1->BringToFront();
	AdminClass adm;
	adm.railway_input(1);
	list<TrainClass>::iterator it;
	for (it = adm.trains.begin(); it != adm.trains.end(); it++)
	{
		DisplayTrains^ display = gcnew DisplayTrains;
		display->BookBtn->Visible = false;
		String^ xstring;
		xstring = marshal_as<String^>(it->train_num);
		display->TrainNum->Text = "Train Number : " + xstring;
		xstring = marshal_as<String^>(it->start);
		display->BoardingPoint->Text = "Boarding Point : " + xstring;
		xstring = marshal_as<String^>(it->end);
		display->DistinationPoint->Text = "Destination Point : " + xstring;
		xstring = marshal_as<String^>(it->number_of_seat);
		display->AvailableSeats->Text = "No. Available Of Seats : " + xstring;
		xstring = marshal_as<String^>(it->ticket_cost);
		display->TicketPrice->Text = "Ticket Price : " + xstring;
		xstring = marshal_as<String^>(it->date_of_travel.hour + ":" + it->date_of_travel.minute + " " + it->date_of_travel.day + "/" + it->date_of_travel.month + "/" + it->date_of_travel.year);
		display->TravelDate->Text = "Travel Time : " + xstring;
		flowLayoutPanel1->Controls->Add(display);
	}
    //flowLayoutPanel1->Controls->Add(display);
	onHome->Visible = true;
	onAdd->Visible = false;
	onEdit->Visible = false;
	onDisplay->Visible = false;
}

private: System::Void AddBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
		AddTrains^ add = gcnew AddTrains;
		flowLayoutPanel1->Visible = false;
		splitContainer2->Panel2->Controls->Add(add);
		add->Dock = DockStyle::Fill;
		add->BringToFront();
		editClicked = false;
		disClicked = false;
		onAdd->Visible = true;
		onHome->Visible = false;
		onEdit->Visible = false;
		onDisplay->Visible = false;
}
private: System::Void editBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	editClicked = true;
	disClicked = false;
	editTrainBtn->Visible = true;
	editPassengerBtn->Visible = true;
	editTrainBtn->BringToFront();
	editPassengerBtn->BringToFront();
}

private: System::Void displayBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	editClicked = false;
	disClicked = true;
	disTrainBtn->Visible = true;
	disPassengerBtn->Visible = true;
	disTrainBtn->BringToFront();
	disPassengerBtn->BringToFront();
}

private: System::Void editTrainBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	AddTrains^ add = gcnew AddTrains;
	flowLayoutPanel1->Visible = false;
	add->chooseTrainLabel->Visible = true;
	add->chooseTrainBox->Visible = true;
	splitContainer2->Panel2->Controls->Add(add);
	add->Dock = DockStyle::Fill;
	add->BringToFront();
	onHome->Visible = false;
	onAdd->Visible = false;
	onEdit->Visible = true;
	onDisplay->Visible = false;
	editTrainBtn->Visible = false;
	editPassengerBtn->Visible = false;
	AdminClass adm;
	adm.railway_input(1);
	list<TrainClass>::iterator it;
	for (it = adm.trains.begin(); it != adm.trains.end(); it++)
	{
		String^ xstring;
		xstring = marshal_as<String^>(it->train_num);
		add->chooseTrainBox->Items->Add(xstring);
	}

}

private: System::Void editPassengerBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	EditPassenger^ edit = gcnew EditPassenger;
	flowLayoutPanel1->Visible = false;
	splitContainer2->Panel2->Controls->Add(edit);
	edit->Dock = DockStyle::Fill;
	edit->BringToFront();
	onHome->Visible = false;
	onAdd->Visible = false;
	onEdit->Visible = true;
	onDisplay->Visible = false;
	editTrainBtn->Visible = false;
	editPassengerBtn->Visible = false;
	AdminClass adm;
	adm.railway_input(2);
	vector<PassengerClass>::iterator it;
	for (it = adm.passengers.begin(); it != adm.passengers.end(); it++)
	{
		String^ xstring;
		xstring = marshal_as<String^>(it->id);
		edit->choosePasBox->Items->Add(xstring);
	}
}

private: System::Void disTrainBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	flowLayoutPanel1->Controls->Clear();
	flowLayoutPanel1->Visible = true;
	flowLayoutPanel1->BringToFront();
	AdminClass adm;
	adm.railway_input(1);
	list<TrainClass>::iterator it;
	for (it = adm.trains.begin(); it != adm.trains.end(); it++)
	{
		DisplayTrains^ display = gcnew DisplayTrains;
		display->BookBtn->Visible = false;
		String^ xstring;
		xstring = marshal_as<String^>(it->train_num);
		display->TrainNum->Text = "Train Number : " + xstring;
		xstring = marshal_as<String^>(it->start);
		display->BoardingPoint->Text = "Boarding Point : " + xstring;
		xstring = marshal_as<String^>(it->end);
		display->DistinationPoint->Text = "Destination Point : " + xstring;
		xstring = marshal_as<String^>(it->number_of_seat);
		display->AvailableSeats->Text = "No. Available Of Seats : " + xstring;
		xstring = marshal_as<String^>(it->ticket_cost);
		display->TicketPrice->Text = "Ticket Price : " + xstring;
		xstring = marshal_as<String^>(it->date_of_travel.hour + ":" + it->date_of_travel.minute + " " + it->date_of_travel.day + "/" + it->date_of_travel.month + "/" + it->date_of_travel.year);
		display->TravelDate->Text = "Travel Time : " + xstring;
		flowLayoutPanel1->Controls->Add(display);
	}
	//DisplayTrains^ display = gcnew DisplayTrains;
	//display->BookBtn->Visible = false;
	//flowLayoutPanel1->Controls->Add(display);
	onHome->Visible = false;
	onAdd->Visible = false;
	onEdit->Visible = false;
	onDisplay->Visible = true;
	disTrainBtn->Visible = false;
	disPassengerBtn->Visible = false;
}

private: System::Void disPassengerBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	flowLayoutPanel1->Controls->Clear();
	flowLayoutPanel1->Visible = true;
	flowLayoutPanel1->BringToFront();
	AdminClass adm;
	adm.railway_input(2);
	vector<PassengerClass>::iterator it;
	for (it = adm.passengers.begin(); it != adm.passengers.end(); it++)
	{
		DisplayPassengers^ display = gcnew DisplayPassengers;
		String^ xstring;
		xstring = marshal_as<String^>(it->id);
		display->PasID->Text = "ID : " + xstring;
		xstring = marshal_as<String^>(it->name);
		display->PasName->Text = "Name : " + xstring;
		xstring = marshal_as<String^>(it->mail);
		display->PasMail->Text = "E-Mail : " + xstring;
		xstring = marshal_as<String^>(it->password);
		display->PasPassword->Text = "Password : " + xstring;
		flowLayoutPanel1->Controls->Add(display);
	}
//	DisplayPassengers^ display = gcnew DisplayPassengers;
//	flowLayoutPanel1->Controls->Add(display);
	onHome->Visible = false;
	onAdd->Visible = false;
	onEdit->Visible = false;
	onDisplay->Visible = true;
	disTrainBtn->Visible = false;
	disPassengerBtn->Visible = false;
}

private: System::Void displayBtn_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
{
	disClicked = true;
	editTrainBtn->Visible = false;
	editPassengerBtn->Visible = false;
	disTrainBtn->Visible = true;
	disPassengerBtn->Visible = true;
	disTrainBtn->BringToFront();
	disPassengerBtn->BringToFront();
}

private: System::Void editBtn_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
{
	editClicked = true;
	editTrainBtn->Visible = true;
	editPassengerBtn->Visible = true;
	disTrainBtn->Visible = false;
	disPassengerBtn->Visible = false;
	editTrainBtn->BringToFront();
	editPassengerBtn->BringToFront();
}

private: System::Void AddBtn_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
{
	editTrainBtn->Visible = false;
	editPassengerBtn->Visible = false;
	disTrainBtn->Visible = false;
	disPassengerBtn->Visible = false;
}

private: System::Void HomeBtn_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
{
	editTrainBtn->Visible = false;
	editPassengerBtn->Visible = false;
	disTrainBtn->Visible = false;
	disPassengerBtn->Visible = false;
}

private: System::Void splitContainer2_Panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	editTrainBtn->Visible = false;
	editPassengerBtn->Visible = false;
	disTrainBtn->Visible = false;
	disPassengerBtn->Visible = false;
}

private: System::Void splitContainer2_Panel2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (disClicked == true)
	{
		if (e->X >= 882 && e->X <= 1080 && e->Y >= 0 && e->Y <= 145)
		{
			disTrainBtn->Visible = true;
			disPassengerBtn->Visible = true;
			disTrainBtn->BringToFront();
			disPassengerBtn->BringToFront();
		}
		else
		{
			disClicked = false;
			disTrainBtn->Visible = false;
			disPassengerBtn->Visible = false;
		}
	}
	else
	{
		disTrainBtn->Visible = false;
		disPassengerBtn->Visible = false;
	}

	if (editClicked == true)
	{
		if (e->X >= 682 && e->X <= 881 && e->Y >= 0 && e->Y <= 145)
		{
			editTrainBtn->Visible = true;
			editPassengerBtn->Visible = true;
			editTrainBtn->BringToFront();
			editPassengerBtn->BringToFront();
		}
		else
		{
			editClicked = false;
			editTrainBtn->Visible = false;
			editPassengerBtn->Visible = false;
		}
	}
	else
	{
		editTrainBtn->Visible = false;
		editPassengerBtn->Visible = false;
	}
}

private: System::Void flowLayoutPanel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (disClicked == true)
	{
		if (e->X >= 882 && e->X <= 1080 && e->Y >= 0 && e->Y <= 145)
		{
			disTrainBtn->Visible = true;
			disPassengerBtn->Visible = true;
			disTrainBtn->BringToFront();
			disPassengerBtn->BringToFront();
		}
		else
		{
			disClicked = false;
			disTrainBtn->Visible = false;
			disPassengerBtn->Visible = false;
		}
	}
	else
	{
		disTrainBtn->Visible = false;
		disPassengerBtn->Visible = false;
	}

	if (editClicked == true)
	{
		if (e->X >= 682 && e->X <= 881 && e->Y >= 0 && e->Y <= 145)
		{
			editTrainBtn->Visible = true;
			editPassengerBtn->Visible = true;
			editTrainBtn->BringToFront();
			editPassengerBtn->BringToFront();
		}
		else
		{
			editClicked = false;
			editTrainBtn->Visible = false;
			editPassengerBtn->Visible = false;
		}
	}
	else
	{
		editTrainBtn->Visible = false;
		editPassengerBtn->Visible = false;
	}
}
private: System::Void AddBtn_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
