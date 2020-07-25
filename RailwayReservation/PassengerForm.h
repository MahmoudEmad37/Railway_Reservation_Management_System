#pragma once
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>
//#include "DisplayTrains.h"
//#include"MyForm.h"
#include "ViewRequests.h"

namespace RailwayReservation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PassengerForm
	/// </summary>
	public ref class PassengerForm : public System::Windows::Forms::Form
	{
	public:
		PassengerForm(void)
		{
			InitializeComponent();
			
			PassengerClass pas;
			pas.railway_input(1);
			list<TrainClass>::iterator it;
			for (it = pas.trains.begin(); it != pas.trains.end(); it++)
			{
				String^ xstring;
				xstring = marshal_as<String^>(it->start);
				if (!boardingPoint->Items->Contains(xstring))
					boardingPoint->Items->Add(xstring);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PassengerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  onView;
	protected:

	protected:


	private: System::Windows::Forms::Panel^  onBook;


	private: System::Windows::Forms::PictureBox^  closeBtn;
	private: System::Windows::Forms::Button^  BookResBtn;
	public: System::Windows::Forms::Button^  viewBtn;
	private:





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::ComboBox^  destinationPoint;
	private: System::Windows::Forms::ComboBox^  boardingPoint;
	private: System::Windows::Forms::Button^  RequestBtn;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	public: System::Windows::Forms::Label^  reqDateTravelLabel;
	private:
	public: System::Windows::Forms::Label^  reqDestinationLabel;
	public: System::Windows::Forms::Label^  reqBoardingLabel;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	public:





	private:








	public:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PassengerForm::typeid));
			this->onView = (gcnew System::Windows::Forms::Panel());
			this->onBook = (gcnew System::Windows::Forms::Panel());
			this->closeBtn = (gcnew System::Windows::Forms::PictureBox());
			this->BookResBtn = (gcnew System::Windows::Forms::Button());
			this->viewBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->destinationPoint = (gcnew System::Windows::Forms::ComboBox());
			this->boardingPoint = (gcnew System::Windows::Forms::ComboBox());
			this->RequestBtn = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->reqDateTravelLabel = (gcnew System::Windows::Forms::Label());
			this->reqDestinationLabel = (gcnew System::Windows::Forms::Label());
			this->reqBoardingLabel = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->SuspendLayout();
			// 
			// onView
			// 
			this->onView->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->onView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->onView->Location = System::Drawing::Point(464, 58);
			this->onView->Name = L"onView";
			this->onView->Size = System::Drawing::Size(196, 10);
			this->onView->TabIndex = 6;
			this->onView->Visible = false;
			// 
			// onBook
			// 
			this->onBook->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->onBook->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->onBook->Location = System::Drawing::Point(264, 58);
			this->onBook->Name = L"onBook";
			this->onBook->Size = System::Drawing::Size(196, 10);
			this->onBook->TabIndex = 4;
			// 
			// closeBtn
			// 
			this->closeBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->closeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(882, 0);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(40, 38);
			this->closeBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->closeBtn->TabIndex = 2;
			this->closeBtn->TabStop = false;
			this->closeBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PassengerForm::closeBtn_MouseClick);
			// 
			// BookResBtn
			// 
			this->BookResBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->BookResBtn->BackColor = System::Drawing::Color::Black;
			this->BookResBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BookResBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BookResBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookResBtn->ForeColor = System::Drawing::Color::White;
			this->BookResBtn->Location = System::Drawing::Point(262, 0);
			this->BookResBtn->Name = L"BookResBtn";
			this->BookResBtn->Size = System::Drawing::Size(200, 68);
			this->BookResBtn->TabIndex = 0;
			this->BookResBtn->Text = L"Book/\r\nReservation";
			this->BookResBtn->UseVisualStyleBackColor = false;
			this->BookResBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PassengerForm::BookResBtn_MouseClick);
			// 
			// viewBtn
			// 
			this->viewBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->viewBtn->BackColor = System::Drawing::Color::Black;
			this->viewBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->viewBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewBtn->ForeColor = System::Drawing::Color::White;
			this->viewBtn->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->viewBtn->Location = System::Drawing::Point(462, 0);
			this->viewBtn->Name = L"viewBtn";
			this->viewBtn->Size = System::Drawing::Size(200, 68);
			this->viewBtn->TabIndex = 3;
			this->viewBtn->Text = L"VIEW RESERVATIONS";
			this->viewBtn->UseVisualStyleBackColor = false;
			this->viewBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PassengerForm::viewBtn_MouseClick);
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
			this->splitContainer1->Size = System::Drawing::Size(924, 462);
			this->splitContainer1->SplitterDistance = 40;
			this->splitContainer1->TabIndex = 3;
			// 
			// splitContainer2
			// 
			this->splitContainer2->BackColor = System::Drawing::Color::White;
			this->splitContainer2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->onView);
			this->splitContainer2->Panel1->Controls->Add(this->onBook);
			this->splitContainer2->Panel1->Controls->Add(this->BookResBtn);
			this->splitContainer2->Panel1->Controls->Add(this->viewBtn);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->AutoScroll = true;
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(924, 418);
			this->splitContainer2->SplitterDistance = 70;
			this->splitContainer2->TabIndex = 0;
			// 
			// splitContainer3
			// 
			this->splitContainer3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer3->IsSplitterFixed = true;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->BackColor = System::Drawing::Color::Black;
			this->splitContainer3->Panel1->Controls->Add(this->destinationPoint);
			this->splitContainer3->Panel1->Controls->Add(this->boardingPoint);
			this->splitContainer3->Panel1->Controls->Add(this->RequestBtn);
			this->splitContainer3->Panel1->Controls->Add(this->dateTimePicker1);
			this->splitContainer3->Panel1->Controls->Add(this->reqDateTravelLabel);
			this->splitContainer3->Panel1->Controls->Add(this->reqDestinationLabel);
			this->splitContainer3->Panel1->Controls->Add(this->reqBoardingLabel);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->flowLayoutPanel1);
			this->splitContainer3->Size = System::Drawing::Size(924, 344);
			this->splitContainer3->SplitterDistance = 250;
			this->splitContainer3->TabIndex = 0;
			// 
			// destinationPoint
			// 
			this->destinationPoint->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->destinationPoint->FormattingEnabled = true;
			this->destinationPoint->Location = System::Drawing::Point(35, 125);
			this->destinationPoint->Margin = System::Windows::Forms::Padding(2);
			this->destinationPoint->Name = L"destinationPoint";
			this->destinationPoint->Size = System::Drawing::Size(200, 23);
			this->destinationPoint->TabIndex = 36;
			// 
			// boardingPoint
			// 
			this->boardingPoint->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->boardingPoint->FormattingEnabled = true;
			this->boardingPoint->Location = System::Drawing::Point(35, 45);
			this->boardingPoint->Margin = System::Windows::Forms::Padding(2);
			this->boardingPoint->Name = L"boardingPoint";
			this->boardingPoint->Size = System::Drawing::Size(200, 23);
			this->boardingPoint->TabIndex = 35;
			this->boardingPoint->TextChanged += gcnew System::EventHandler(this, &PassengerForm::boardingPoint_TextChanged);
			// 
			// RequestBtn
			// 
			this->RequestBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->RequestBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->RequestBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RequestBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RequestBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RequestBtn->ForeColor = System::Drawing::Color::Black;
			this->RequestBtn->Location = System::Drawing::Point(25, 300);
			this->RequestBtn->Name = L"RequestBtn";
			this->RequestBtn->Size = System::Drawing::Size(200, 68);
			this->RequestBtn->TabIndex = 7;
			this->RequestBtn->Text = L"Request";
			this->RequestBtn->UseVisualStyleBackColor = false;
			this->RequestBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &PassengerForm::RequestBtn_MouseClick);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(35, 205);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 25);
			this->dateTimePicker1->TabIndex = 34;
			// 
			// reqDateTravelLabel
			// 
			this->reqDateTravelLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reqDateTravelLabel->AutoSize = true;
			this->reqDateTravelLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqDateTravelLabel->ForeColor = System::Drawing::Color::White;
			this->reqDateTravelLabel->Location = System::Drawing::Point(6, 165);
			this->reqDateTravelLabel->Name = L"reqDateTravelLabel";
			this->reqDateTravelLabel->Size = System::Drawing::Size(161, 23);
			this->reqDateTravelLabel->TabIndex = 33;
			this->reqDateTravelLabel->Text = L"Date Of Travel :";
			// 
			// reqDestinationLabel
			// 
			this->reqDestinationLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reqDestinationLabel->AutoSize = true;
			this->reqDestinationLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqDestinationLabel->ForeColor = System::Drawing::Color::White;
			this->reqDestinationLabel->Location = System::Drawing::Point(5, 85);
			this->reqDestinationLabel->Name = L"reqDestinationLabel";
			this->reqDestinationLabel->Size = System::Drawing::Size(187, 23);
			this->reqDestinationLabel->TabIndex = 30;
			this->reqDestinationLabel->Text = L"Destination Point :";
			// 
			// reqBoardingLabel
			// 
			this->reqBoardingLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reqBoardingLabel->AutoSize = true;
			this->reqBoardingLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqBoardingLabel->ForeColor = System::Drawing::Color::White;
			this->reqBoardingLabel->Location = System::Drawing::Point(5, 5);
			this->reqBoardingLabel->Name = L"reqBoardingLabel";
			this->reqBoardingLabel->Size = System::Drawing::Size(164, 23);
			this->reqBoardingLabel->TabIndex = 29;
			this->reqBoardingLabel->Text = L"Boarding Point :";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(668, 342);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// PassengerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 462);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PassengerForm";
			this->Text = L"PassengerForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeBtn))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		public: static int isLogged;
private: System::Void closeBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Application::Exit();
}

private: System::Void viewBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	FlowLayoutPanel^ viewPanel = gcnew FlowLayoutPanel();
	viewPanel->Dock = DockStyle::Fill;
	viewPanel->AutoScroll = true;
	splitContainer2->Panel2->Controls->Add(viewPanel);
	viewPanel->BringToFront();
	splitContainer3->SendToBack();
	PassengerClass pas;
	pas.railway_input(2);
	list<RequestClass>::iterator it;
	for (it = pas.requests.begin(); it != pas.requests.end(); it++)
	{
		if (stoi(it->passenger_id) == isLogged)
		{
			ViewRequests^ view = gcnew ViewRequests;
			String^ xstring;
			xstring = marshal_as<String^>(it->train_num);
			view->trainNum->Text = "Train Number : " + xstring;
			xstring = marshal_as<String^>(it->id);
			view->requestID->Text = xstring;
			xstring = marshal_as<String^>(it->start);
			view->reqBoardingLabel->Text = "Boarding Point : " + xstring;
			xstring = marshal_as<String^>(it->end);
			view->reqDestinationLabel->Text = "Destination Point : " + xstring;
			xstring = marshal_as<String^>(it->date_of_travel.hour + ":" + it->date_of_travel.minute + " " + it->date_of_travel.day + "/" + it->date_of_travel.month + "/" + it->date_of_travel.year);
			view->reqDateTravelLabel->Text = "Travel Time : " + xstring;
			splitContainer3->Visible = false;
			viewPanel->Controls->Add(view);
		}
	}
	onBook->Visible = false;
	onView->Visible = true;
}

private: System::Void RequestBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	flowLayoutPanel1->Controls->Clear();
	bool isfound = false;
	PassengerClass pas;
	pas.railway_input(1);
	list<TrainClass>::iterator it;
	string boarding = msclr::interop::marshal_as <string>(boardingPoint->Text);
	string destination = msclr::interop::marshal_as <string>(destinationPoint->Text);
	DateTime date = dateTimePicker1->Value;
	
	for (it = pas.trains.begin(); it != pas.trains.end(); it++)
	{ 
		if (it->start == boarding && it->end == destination && it->travel_date.tm_mday == date.Day&&it->travel_date.tm_mon == date.Month&&it->travel_date.tm_year == date.Year&&stoi(it->number_of_seat) >=1)
		{
			isfound = true;
			DisplayTrains^ display = gcnew DisplayTrains;
			display->BookBtn->Visible = true;
			String^ xstring;
			xstring = marshal_as<String^>(it->train_num);
			display->TrainNum->Text = "Train Number : " + xstring;
			display->trainID->Text = xstring;
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
			splitContainer3->Visible = true;
			splitContainer3->BringToFront();
			//display->trainnow = stoi(it->train_num);
			display->pasnow = isLogged;
			flowLayoutPanel1->Controls->Add(display);
		}
	}
	if (!isfound)
	{
		for (it = pas.trains.begin(); it != pas.trains.end(); it++)
		{
			if (it->start == boarding && it->end == destination && stoi(it->number_of_seat) >= 1)
			{
				isfound = true;
				DisplayTrains^ display = gcnew DisplayTrains;
				display->BookBtn->Visible = true;
				String^ xstring;
				xstring = marshal_as<String^>(it->train_num);
				display->TrainNum->Text = "Train Number : " + xstring;
				display->trainID->Text = xstring;
				xstring = marshal_as<String^>(it->start);
				display->BoardingPoint->Text = "Boarding Point : " + xstring;
				xstring = marshal_as<String^>(it->end);
				display->DistinationPoint->Text = "Destination Point : " + xstring;
				xstring = marshal_as<String^>(it->number_of_seat);
				display->AvailableSeats->Text = "No. Of Available Seats : " + xstring;
				xstring = marshal_as<String^>(it->ticket_cost);
				display->TicketPrice->Text = "Ticket Price : " + xstring;
				xstring = marshal_as<String^>(it->date_of_travel.hour + ":" + it->date_of_travel.minute + " " + it->date_of_travel.day + "/" + it->date_of_travel.month + "/" + it->date_of_travel.year);
				display->TravelDate->Text = "Travel Time : " + xstring;
				splitContainer3->Visible = true;
				splitContainer3->BringToFront();
				display->pasnow = isLogged;
				//flowLayoutPanel1->Controls->Clear();
				flowLayoutPanel1->Controls->Add(display);
			}
		}
	}
}

private: System::Void BookResBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	onBook->Visible = true;
	onView->Visible = false;
	splitContainer3->Visible = true;
	splitContainer3->BringToFront();
	flowLayoutPanel1->Controls->Clear();
}
private: System::Void boardingPoint_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	PassengerClass pas;
	pas.railway_input(1);
	list<TrainClass>::iterator it;
	string boarding = msclr::interop::marshal_as <string>(boardingPoint->Text);
	destinationPoint->Items->Clear();
	for (it = pas.trains.begin(); it != pas.trains.end(); it++)
	{
		if (it->start == boarding)
		{
			if (!destinationPoint->Items->Contains(marshal_as<String^>(it->end)))
				destinationPoint->Items->Add(marshal_as<String^>(it->end));
		}
	}
}

};
}
