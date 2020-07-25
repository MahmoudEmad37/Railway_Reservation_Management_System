#pragma once
#include"PassengerClass.h"
#include <msclr\marshal_cppstd.h>
#include <fstream>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace std;

namespace RailwayReservation {

	/// <summary>
	/// Summary for DisplayTrains
	/// </summary>
	public ref class DisplayTrains : public System::Windows::Forms::UserControl
	{
	public:
		DisplayTrains(void)
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
		~DisplayTrains()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  TravelDate;
	protected:
	public: System::Windows::Forms::Label^  TicketPrice;
	public: System::Windows::Forms::Label^  AvailableSeats;
	public: System::Windows::Forms::Label^  DistinationPoint;

	public: System::Windows::Forms::Label^  BoardingPoint;

	public: System::Windows::Forms::Label^  TrainNum;
	public: System::Windows::Forms::Button^  BookBtn;
	public: static int pasnow;
	public: System::Windows::Forms::Label^  trainID;


	public:
	private:


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
			this->TravelDate = (gcnew System::Windows::Forms::Label());
			this->TicketPrice = (gcnew System::Windows::Forms::Label());
			this->AvailableSeats = (gcnew System::Windows::Forms::Label());
			this->DistinationPoint = (gcnew System::Windows::Forms::Label());
			this->BoardingPoint = (gcnew System::Windows::Forms::Label());
			this->TrainNum = (gcnew System::Windows::Forms::Label());
			this->BookBtn = (gcnew System::Windows::Forms::Button());
			this->trainID = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TravelDate
			// 
			this->TravelDate->AutoSize = true;
			this->TravelDate->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TravelDate->ForeColor = System::Drawing::Color::White;
			this->TravelDate->Location = System::Drawing::Point(291, 85);
			this->TravelDate->Name = L"TravelDate";
			this->TravelDate->Size = System::Drawing::Size(139, 23);
			this->TravelDate->TabIndex = 11;
			this->TravelDate->Text = L"Travel Time :";
			// 
			// TicketPrice
			// 
			this->TicketPrice->AutoSize = true;
			this->TicketPrice->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketPrice->ForeColor = System::Drawing::Color::White;
			this->TicketPrice->Location = System::Drawing::Point(291, 45);
			this->TicketPrice->Name = L"TicketPrice";
			this->TicketPrice->Size = System::Drawing::Size(139, 23);
			this->TicketPrice->TabIndex = 10;
			this->TicketPrice->Text = L"Ticket Price :";
			// 
			// AvailableSeats
			// 
			this->AvailableSeats->AutoSize = true;
			this->AvailableSeats->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AvailableSeats->ForeColor = System::Drawing::Color::White;
			this->AvailableSeats->Location = System::Drawing::Point(291, 5);
			this->AvailableSeats->Name = L"AvailableSeats";
			this->AvailableSeats->Size = System::Drawing::Size(232, 23);
			this->AvailableSeats->TabIndex = 9;
			this->AvailableSeats->Text = L"No. Of Available Seats :";
			// 
			// DistinationPoint
			// 
			this->DistinationPoint->AutoSize = true;
			this->DistinationPoint->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DistinationPoint->ForeColor = System::Drawing::Color::White;
			this->DistinationPoint->Location = System::Drawing::Point(4, 85);
			this->DistinationPoint->Name = L"DistinationPoint";
			this->DistinationPoint->Size = System::Drawing::Size(187, 23);
			this->DistinationPoint->TabIndex = 8;
			this->DistinationPoint->Text = L"Destination Point :";
			// 
			// BoardingPoint
			// 
			this->BoardingPoint->AutoSize = true;
			this->BoardingPoint->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BoardingPoint->ForeColor = System::Drawing::Color::White;
			this->BoardingPoint->Location = System::Drawing::Point(4, 45);
			this->BoardingPoint->Name = L"BoardingPoint";
			this->BoardingPoint->Size = System::Drawing::Size(164, 23);
			this->BoardingPoint->TabIndex = 7;
			this->BoardingPoint->Text = L"Boarding Point :";
			// 
			// TrainNum
			// 
			this->TrainNum->AutoSize = true;
			this->TrainNum->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrainNum->ForeColor = System::Drawing::Color::White;
			this->TrainNum->Location = System::Drawing::Point(4, 5);
			this->TrainNum->Name = L"TrainNum";
			this->TrainNum->Size = System::Drawing::Size(157, 23);
			this->TrainNum->TabIndex = 6;
			this->TrainNum->Text = L"Train Number :";
			// 
			// BookBtn
			// 
			this->BookBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->BookBtn->BackColor = System::Drawing::Color::White;
			this->BookBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BookBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BookBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookBtn->ForeColor = System::Drawing::Color::Black;
			this->BookBtn->Location = System::Drawing::Point(542, 121);
			this->BookBtn->Name = L"BookBtn";
			this->BookBtn->Size = System::Drawing::Size(125, 45);
			this->BookBtn->TabIndex = 39;
			this->BookBtn->Text = L"Book";
			this->BookBtn->UseVisualStyleBackColor = false;
			this->BookBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DisplayTrains::BookBtn_MouseClick);
			// 
			// trainID
			// 
			this->trainID->AutoSize = true;
			this->trainID->Location = System::Drawing::Point(112, 141);
			this->trainID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->trainID->Name = L"trainID";
			this->trainID->Size = System::Drawing::Size(35, 13);
			this->trainID->TabIndex = 44;
			this->trainID->Text = L"label2";
			this->trainID->Visible = false;
			// 
			// DisplayTrains
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Controls->Add(this->trainID);
			this->Controls->Add(this->BookBtn);
			this->Controls->Add(this->TravelDate);
			this->Controls->Add(this->TicketPrice);
			this->Controls->Add(this->AvailableSeats);
			this->Controls->Add(this->DistinationPoint);
			this->Controls->Add(this->BoardingPoint);
			this->Controls->Add(this->TrainNum);
			this->Name = L"DisplayTrains";
			this->Size = System::Drawing::Size(670, 169);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//public: static int trainnow;//Fen bya5od el value??
		//public: static int pasnow;
	private: System::Void BookBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		bool available = false;
		string trainnow = msclr::interop::marshal_as <string>(trainID->Text);
		PassengerClass pas;
		pas.railway_input(1);
		list<TrainClass>::iterator it;
		for (it = pas.trains.begin(); it != pas.trains.end(); it++)
		{
			if (it->train_num == trainnow && stoi(it->number_of_seat) > 0)
			{
				it->number_of_seat = std::to_string((stoi(it->number_of_seat)) - 1);
				MessageBox::Show("You Booked On This Train Successfully");
				available = true;
				break;
			}
			else if (it->train_num == trainnow && stoi(it->number_of_seat) <= 0)
			{
				MessageBox::Show("There is no available seats on this train");
				available = false;
				break;
			}

		}
		if (available)
		{
			pas.railway_input(2);
			string outFile = "request.txt";
			ofstream output(outFile.c_str(), ios::app);
			output << endl << (pas.requests.size() + 1) << "\t" << it->start << "\t" << it->end << "\t" << it->date_of_travel.hour << ":" << it->date_of_travel.minute << "\t"
				<< it->date_of_travel.day << "/" << it->date_of_travel.month << "/" << it->date_of_travel.year << "\t" << pasnow << "\t" << trainnow;
			output.close();
			string outFile1 = "train.txt";
			ofstream output1(outFile1.c_str(), ios::trunc);
			for (it = pas.trains.begin(); it != pas.trains.end(); it++)
			{
				output1 << endl << it->train_num << "\t" << it->start << "\t" << it->end << "\t" << it->date_of_travel.hour << ":" << it->date_of_travel.minute << "\t"
					<< it->date_of_travel.day << "/" << it->date_of_travel.month << "/" << it->date_of_travel.year << "\t" << it->number_of_seat << "\t" << it->ticket_cost;
			}
		}
		
		
	}

};
}
