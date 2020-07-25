#pragma once
//#include <msclr\marshal_cppstd.h>
//#include <fstream>
//#include"AdminClass.h"
#include"EditPassenger.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace RailwayReservation {

	/// <summary>
	/// Summary for AddTrains
	/// </summary>
	public ref class AddTrains : public System::Windows::Forms::UserControl
	{
	public:
		AddTrains(void)
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
		~AddTrains()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  TravelTime;
	protected:

	protected:
	public: System::Windows::Forms::Label^  TicketPrice;
	public: System::Windows::Forms::Label^  AvailableSeats;
	public: System::Windows::Forms::Label^  EndPoint;
	public: System::Windows::Forms::Label^  StartPoint;
	public: System::Windows::Forms::Label^  TrainNum;
	public: System::Windows::Forms::TextBox^  trainNumBox;
	public: System::Windows::Forms::TextBox^  sPointBox;
	public: System::Windows::Forms::TextBox^  ePointBox;
	public: System::Windows::Forms::TextBox^  ticketBox;
	public: System::Windows::Forms::TextBox^  avSeatsBox;


	protected:











	private: System::Windows::Forms::Button^  FinishBtn;
	public: System::Windows::Forms::Label^  chooseTrainLabel;
	private:
	public: System::Windows::Forms::ComboBox^  chooseTrainBox;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	public:

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
			this->TravelTime = (gcnew System::Windows::Forms::Label());
			this->TicketPrice = (gcnew System::Windows::Forms::Label());
			this->AvailableSeats = (gcnew System::Windows::Forms::Label());
			this->EndPoint = (gcnew System::Windows::Forms::Label());
			this->StartPoint = (gcnew System::Windows::Forms::Label());
			this->TrainNum = (gcnew System::Windows::Forms::Label());
			this->trainNumBox = (gcnew System::Windows::Forms::TextBox());
			this->sPointBox = (gcnew System::Windows::Forms::TextBox());
			this->ePointBox = (gcnew System::Windows::Forms::TextBox());
			this->ticketBox = (gcnew System::Windows::Forms::TextBox());
			this->avSeatsBox = (gcnew System::Windows::Forms::TextBox());
			this->FinishBtn = (gcnew System::Windows::Forms::Button());
			this->chooseTrainLabel = (gcnew System::Windows::Forms::Label());
			this->chooseTrainBox = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// TravelTime
			// 
			this->TravelTime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TravelTime->AutoSize = true;
			this->TravelTime->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TravelTime->ForeColor = System::Drawing::Color::White;
			this->TravelTime->Location = System::Drawing::Point(630, 417);
			this->TravelTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TravelTime->Name = L"TravelTime";
			this->TravelTime->Size = System::Drawing::Size(209, 36);
			this->TravelTime->TabIndex = 17;
			this->TravelTime->Text = L"Travel Time :";
			// 
			// TicketPrice
			// 
			this->TicketPrice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TicketPrice->AutoSize = true;
			this->TicketPrice->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketPrice->ForeColor = System::Drawing::Color::White;
			this->TicketPrice->Location = System::Drawing::Point(630, 263);
			this->TicketPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TicketPrice->Name = L"TicketPrice";
			this->TicketPrice->Size = System::Drawing::Size(206, 36);
			this->TicketPrice->TabIndex = 16;
			this->TicketPrice->Text = L"Ticket Price :";
			// 
			// AvailableSeats
			// 
			this->AvailableSeats->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->AvailableSeats->AutoSize = true;
			this->AvailableSeats->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AvailableSeats->ForeColor = System::Drawing::Color::White;
			this->AvailableSeats->Location = System::Drawing::Point(630, 109);
			this->AvailableSeats->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AvailableSeats->Name = L"AvailableSeats";
			this->AvailableSeats->Size = System::Drawing::Size(348, 36);
			this->AvailableSeats->TabIndex = 15;
			this->AvailableSeats->Text = L"No. Of Available Seats :";
			// 
			// EndPoint
			// 
			this->EndPoint->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->EndPoint->AutoSize = true;
			this->EndPoint->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndPoint->ForeColor = System::Drawing::Color::White;
			this->EndPoint->Location = System::Drawing::Point(8, 417);
			this->EndPoint->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EndPoint->Name = L"EndPoint";
			this->EndPoint->Size = System::Drawing::Size(168, 36);
			this->EndPoint->TabIndex = 14;
			this->EndPoint->Text = L"End Point :";
			// 
			// StartPoint
			// 
			this->StartPoint->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->StartPoint->AutoSize = true;
			this->StartPoint->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartPoint->ForeColor = System::Drawing::Color::White;
			this->StartPoint->Location = System::Drawing::Point(8, 263);
			this->StartPoint->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->StartPoint->Name = L"StartPoint";
			this->StartPoint->Size = System::Drawing::Size(178, 36);
			this->StartPoint->TabIndex = 13;
			this->StartPoint->Text = L"Start Point :";
			// 
			// TrainNum
			// 
			this->TrainNum->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TrainNum->AutoSize = true;
			this->TrainNum->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrainNum->ForeColor = System::Drawing::Color::White;
			this->TrainNum->Location = System::Drawing::Point(8, 109);
			this->TrainNum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TrainNum->Name = L"TrainNum";
			this->TrainNum->Size = System::Drawing::Size(235, 36);
			this->TrainNum->TabIndex = 12;
			this->TrainNum->Text = L"Train Number :";
			// 
			// trainNumBox
			// 
			this->trainNumBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->trainNumBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->trainNumBox->Location = System::Drawing::Point(255, 109);
			this->trainNumBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->trainNumBox->Name = L"trainNumBox";
			this->trainNumBox->Size = System::Drawing::Size(298, 33);
			this->trainNumBox->TabIndex = 18;
			// 
			// sPointBox
			// 
			this->sPointBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sPointBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sPointBox->Location = System::Drawing::Point(255, 263);
			this->sPointBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sPointBox->Name = L"sPointBox";
			this->sPointBox->Size = System::Drawing::Size(298, 33);
			this->sPointBox->TabIndex = 19;
			// 
			// ePointBox
			// 
			this->ePointBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ePointBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ePointBox->Location = System::Drawing::Point(255, 417);
			this->ePointBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ePointBox->Name = L"ePointBox";
			this->ePointBox->Size = System::Drawing::Size(298, 33);
			this->ePointBox->TabIndex = 20;
			// 
			// ticketBox
			// 
			this->ticketBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ticketBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ticketBox->Location = System::Drawing::Point(990, 263);
			this->ticketBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ticketBox->Name = L"ticketBox";
			this->ticketBox->Size = System::Drawing::Size(298, 33);
			this->ticketBox->TabIndex = 22;
			// 
			// avSeatsBox
			// 
			this->avSeatsBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->avSeatsBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->avSeatsBox->Location = System::Drawing::Point(990, 109);
			this->avSeatsBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->avSeatsBox->Name = L"avSeatsBox";
			this->avSeatsBox->Size = System::Drawing::Size(298, 33);
			this->avSeatsBox->TabIndex = 21;
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
			this->FinishBtn->Location = System::Drawing::Point(356, 617);
			this->FinishBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->FinishBtn->Name = L"FinishBtn";
			this->FinishBtn->Size = System::Drawing::Size(600, 105);
			this->FinishBtn->TabIndex = 24;
			this->FinishBtn->Text = L"FINISH";
			this->FinishBtn->UseVisualStyleBackColor = false;
			this->FinishBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddTrains::FinishBtn_MouseClick);
			// 
			// chooseTrainLabel
			// 
			this->chooseTrainLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->chooseTrainLabel->AutoSize = true;
			this->chooseTrainLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chooseTrainLabel->ForeColor = System::Drawing::Color::White;
			this->chooseTrainLabel->Location = System::Drawing::Point(350, 7);
			this->chooseTrainLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->chooseTrainLabel->Name = L"chooseTrainLabel";
			this->chooseTrainLabel->Size = System::Drawing::Size(224, 36);
			this->chooseTrainLabel->TabIndex = 25;
			this->chooseTrainLabel->Text = L"Choose Train :";
			this->chooseTrainLabel->Visible = false;
			// 
			// chooseTrainBox
			// 
			this->chooseTrainBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->chooseTrainBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->chooseTrainBox->FormattingEnabled = true;
			this->chooseTrainBox->Location = System::Drawing::Point(602, 7);
			this->chooseTrainBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chooseTrainBox->Name = L"chooseTrainBox";
			this->chooseTrainBox->Size = System::Drawing::Size(158, 31);
			this->chooseTrainBox->TabIndex = 26;
			this->chooseTrainBox->Visible = false;
			this->chooseTrainBox->TextChanged += gcnew System::EventHandler(this, &AddTrains::chooseTrainBox_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(990, 417);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(298, 33);
			this->dateTimePicker1->TabIndex = 27;
			// 
			// AddTrains
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->chooseTrainBox);
			this->Controls->Add(this->chooseTrainLabel);
			this->Controls->Add(this->FinishBtn);
			this->Controls->Add(this->ticketBox);
			this->Controls->Add(this->avSeatsBox);
			this->Controls->Add(this->ePointBox);
			this->Controls->Add(this->sPointBox);
			this->Controls->Add(this->trainNumBox);
			this->Controls->Add(this->TravelTime);
			this->Controls->Add(this->TicketPrice);
			this->Controls->Add(this->AvailableSeats);
			this->Controls->Add(this->EndPoint);
			this->Controls->Add(this->StartPoint);
			this->Controls->Add(this->TrainNum);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AddTrains";
			this->Size = System::Drawing::Size(1324, 732);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void FinishBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	
	if (chooseTrainLabel->Visible == true)
	{
		string selectedTrain = msclr::interop::marshal_as<string>(chooseTrainBox->SelectedItem->ToString());
		AdminClass adm;
		adm.railway_input(1);
		list<TrainClass>::iterator it;
		for (it = adm.trains.begin(); it != adm.trains.end(); it++)
		{
			string xstring;
			xstring = it->train_num;
			if (selectedTrain == xstring)
			{
				it->train_num = msclr::interop::marshal_as<string>(trainNumBox->Text);
				it->start = msclr::interop::marshal_as<string>(sPointBox->Text);
				it->end = msclr::interop::marshal_as<string>(ePointBox->Text);
				it->ticket_cost = msclr::interop::marshal_as<string>(ticketBox->Text);
				it->number_of_seat = msclr::interop::marshal_as<string>(avSeatsBox->Text);
				DateTime date = dateTimePicker1->Value;
				it->date_of_travel.hour = msclr::interop::marshal_as<string>(date.Hour.ToString());
				it->date_of_travel.minute = msclr::interop::marshal_as<string>(date.Minute.ToString());
				it->date_of_travel.day = msclr::interop::marshal_as<string>(date.Day.ToString());
				it->date_of_travel.month = msclr::interop::marshal_as<string>(date.Month.ToString());
				it->date_of_travel.year = msclr::interop::marshal_as<string>(date.Year.ToString());
				break;
			}
		}
		string outFile = "train.txt";
		ofstream output(outFile.c_str(), ios::trunc);
		for (it = adm.trains.begin(); it != adm.trains.end(); it++)
		{
			output <<endl << it->train_num << "\t" << it->start << "\t" << it->end << "\t" << it->date_of_travel.hour << ":" << it->date_of_travel.minute << "\t"
				<< it->date_of_travel.day << "/" << it->date_of_travel.month << "/" << it->date_of_travel.year << "\t" << it->number_of_seat << "\t" << it->ticket_cost;
		}
		MessageBox::Show("Edit Train successfully");
			// yalla kamel enta ,, lamo2a5za :D

		
	}
	else if (chooseTrainLabel->Visible == false)
	{
		TrainClass newtrain;
		newtrain.train_num = msclr::interop::marshal_as<string>(trainNumBox->Text);
		newtrain.start = msclr::interop::marshal_as<string>(sPointBox->Text);
		newtrain.end = msclr::interop::marshal_as<string>(ePointBox->Text);
		newtrain.ticket_cost = msclr::interop::marshal_as<string>(ticketBox->Text);
		newtrain.number_of_seat = msclr::interop::marshal_as<string>(avSeatsBox->Text);
		DateTime date = dateTimePicker1->Value;
		string outFile = "train.txt";
		ofstream output(outFile.c_str(), ios::app);
		output <<endl << newtrain.train_num << "\t" << newtrain.start << "\t" << newtrain.end << "\t" << date.Hour << ":" << date.Minute << "\t"
			<< date.Day << "/" << date.Month << "/" << date.Year << "\t" << newtrain.number_of_seat << "\t" << newtrain.ticket_cost;
		MessageBox::Show("Add New Train successfully");

	}
}
private: System::Void chooseTrainBox_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	string selectedTrain = msclr::interop::marshal_as<string>(chooseTrainBox->SelectedItem->ToString());
	AdminClass adm;
	adm.railway_input(1);
	list<TrainClass>::iterator it;
	for (it = adm.trains.begin(); it != adm.trains.end(); it++)
	{
		string xstring;
		xstring = it->train_num;
		if (selectedTrain == xstring)
		{
			trainNumBox->Text = msclr::interop::marshal_as<System::String^>(it->train_num);
			sPointBox->Text = msclr::interop::marshal_as<System::String^>(it->start);
			ePointBox->Text = msclr::interop::marshal_as<System::String^>(it->end);
			avSeatsBox->Text = msclr::interop::marshal_as<System::String^>(it->number_of_seat);
			ticketBox->Text = msclr::interop::marshal_as<System::String^>(it->ticket_cost);

		}
	}

}
};
}
