#pragma once
#include <msclr\marshal_cppstd.h>
#include"MyForm.h"
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
	/// Summary for ViewRequests
	/// </summary>
	public ref class ViewRequests : public System::Windows::Forms::UserControl
	{
	public:
		ViewRequests(void)
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
		~ViewRequests()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  reqDateTravelLabel;
	protected:
	public: System::Windows::Forms::Label^  reqDestinationLabel;
	public: System::Windows::Forms::Label^  reqBoardingLabel;
	private: System::Windows::Forms::Button^  EditBtn;
	public:
	private: System::Windows::Forms::Button^  DeleteBtn;
	private: System::Windows::Forms::ComboBox^  editDateBox;
	private: System::Windows::Forms::Button^  editDone;
	public: System::Windows::Forms::Label^  trainNum;
	public: System::Windows::Forms::Label^  requestID;

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
			this->reqDateTravelLabel = (gcnew System::Windows::Forms::Label());
			this->reqDestinationLabel = (gcnew System::Windows::Forms::Label());
			this->reqBoardingLabel = (gcnew System::Windows::Forms::Label());
			this->EditBtn = (gcnew System::Windows::Forms::Button());
			this->DeleteBtn = (gcnew System::Windows::Forms::Button());
			this->editDateBox = (gcnew System::Windows::Forms::ComboBox());
			this->editDone = (gcnew System::Windows::Forms::Button());
			this->trainNum = (gcnew System::Windows::Forms::Label());
			this->requestID = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// reqDateTravelLabel
			// 
			this->reqDateTravelLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reqDateTravelLabel->AutoSize = true;
			this->reqDateTravelLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqDateTravelLabel->ForeColor = System::Drawing::Color::White;
			this->reqDateTravelLabel->Location = System::Drawing::Point(5, 150);
			this->reqDateTravelLabel->Name = L"reqDateTravelLabel";
			this->reqDateTravelLabel->Size = System::Drawing::Size(161, 23);
			this->reqDateTravelLabel->TabIndex = 36;
			this->reqDateTravelLabel->Text = L"Date Of Travel :";
			// 
			// reqDestinationLabel
			// 
			this->reqDestinationLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reqDestinationLabel->AutoSize = true;
			this->reqDestinationLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqDestinationLabel->ForeColor = System::Drawing::Color::White;
			this->reqDestinationLabel->Location = System::Drawing::Point(5, 100);
			this->reqDestinationLabel->Name = L"reqDestinationLabel";
			this->reqDestinationLabel->Size = System::Drawing::Size(187, 23);
			this->reqDestinationLabel->TabIndex = 35;
			this->reqDestinationLabel->Text = L"Destination Point :";
			// 
			// reqBoardingLabel
			// 
			this->reqBoardingLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->reqBoardingLabel->AutoSize = true;
			this->reqBoardingLabel->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqBoardingLabel->ForeColor = System::Drawing::Color::White;
			this->reqBoardingLabel->Location = System::Drawing::Point(5, 50);
			this->reqBoardingLabel->Name = L"reqBoardingLabel";
			this->reqBoardingLabel->Size = System::Drawing::Size(164, 23);
			this->reqBoardingLabel->TabIndex = 34;
			this->reqBoardingLabel->Text = L"Boarding Point :";
			// 
			// EditBtn
			// 
			this->EditBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->EditBtn->BackColor = System::Drawing::Color::White;
			this->EditBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditBtn->ForeColor = System::Drawing::Color::Black;
			this->EditBtn->Location = System::Drawing::Point(410, 5);
			this->EditBtn->Name = L"EditBtn";
			this->EditBtn->Size = System::Drawing::Size(125, 45);
			this->EditBtn->TabIndex = 37;
			this->EditBtn->Text = L"Edit";
			this->EditBtn->UseVisualStyleBackColor = false;
			this->EditBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewRequests::EditBtn_MouseClick);
			// 
			// DeleteBtn
			// 
			this->DeleteBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->DeleteBtn->BackColor = System::Drawing::Color::White;
			this->DeleteBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteBtn->ForeColor = System::Drawing::Color::Black;
			this->DeleteBtn->Location = System::Drawing::Point(410, 65);
			this->DeleteBtn->Name = L"DeleteBtn";
			this->DeleteBtn->Size = System::Drawing::Size(125, 45);
			this->DeleteBtn->TabIndex = 38;
			this->DeleteBtn->Text = L"Delete";
			this->DeleteBtn->UseVisualStyleBackColor = false;
			this->DeleteBtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewRequests::DeleteBtn_MouseClick);
			// 
			// editDateBox
			// 
			this->editDateBox->FormattingEnabled = true;
			this->editDateBox->Location = System::Drawing::Point(172, 150);
			this->editDateBox->Name = L"editDateBox";
			this->editDateBox->Size = System::Drawing::Size(175, 21);
			this->editDateBox->TabIndex = 39;
			this->editDateBox->Visible = false;
			// 
			// editDone
			// 
			this->editDone->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->editDone->BackColor = System::Drawing::Color::White;
			this->editDone->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editDone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editDone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editDone->ForeColor = System::Drawing::Color::Black;
			this->editDone->Location = System::Drawing::Point(410, 125);
			this->editDone->Name = L"editDone";
			this->editDone->Size = System::Drawing::Size(125, 45);
			this->editDone->TabIndex = 40;
			this->editDone->Text = L"Done";
			this->editDone->UseVisualStyleBackColor = false;
			this->editDone->Visible = false;
			this->editDone->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewRequests::editDone_MouseClick);
			// 
			// trainNum
			// 
			this->trainNum->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->trainNum->AutoSize = true;
			this->trainNum->Font = (gcnew System::Drawing::Font(L"Rockwell", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trainNum->ForeColor = System::Drawing::Color::White;
			this->trainNum->Location = System::Drawing::Point(5, 0);
			this->trainNum->Name = L"trainNum";
			this->trainNum->Size = System::Drawing::Size(157, 23);
			this->trainNum->TabIndex = 41;
			this->trainNum->Text = L"Train Number :";
			// 
			// requestID
			// 
			this->requestID->AutoSize = true;
			this->requestID->Location = System::Drawing::Point(263, 79);
			this->requestID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->requestID->Name = L"requestID";
			this->requestID->Size = System::Drawing::Size(35, 13);
			this->requestID->TabIndex = 43;
			this->requestID->Text = L"label2";
			this->requestID->Visible = false;
			// 
			// ViewRequests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Controls->Add(this->requestID);
			this->Controls->Add(this->trainNum);
			this->Controls->Add(this->editDone);
			this->Controls->Add(this->editDateBox);
			this->Controls->Add(this->DeleteBtn);
			this->Controls->Add(this->EditBtn);
			this->Controls->Add(this->reqDateTravelLabel);
			this->Controls->Add(this->reqDestinationLabel);
			this->Controls->Add(this->reqBoardingLabel);
			this->Name = L"ViewRequests";
			this->Size = System::Drawing::Size(540, 200);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void EditBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	string selectedReq= msclr::interop::marshal_as <string>(requestID->Text);
	PassengerClass pas;
	pas.railway_input(2);
	list<RequestClass>::iterator it;
	for (it = pas.requests.begin(); it != pas.requests.end(); it++)
	{
		if (it->id == selectedReq)
		{
			//MessageBox::Show(selectedReq.ToString);
			pas.railway_input(1);
			list<TrainClass>::iterator ite;
			editDateBox->Items->Clear();
			for (ite = pas.trains.begin(); ite != pas.trains.end(); ite++)
			{
				if (ite->start == it->start&&ite->end==it->end&&ite->train_num!=it->train_num)
				{
					String^ newDate = marshal_as<String^>(ite->date_of_travel.hour + ":" + ite->date_of_travel.minute + "	" + ite->date_of_travel.day + "/" + ite->date_of_travel.month + "/" + ite->date_of_travel.year);
					//if (!editDateBox->Items->Contains(marshal_as<String^>(ite->date_of_travel.hour + ":" + ite->date_of_travel.minute + " " + ite->date_of_travel.day + "/" + ite->date_of_travel.month + "/" + ite->date_of_travel.year)))
						editDateBox->Items->Add(newDate);
				}
			}
			break;
		}
	}
	reqDateTravelLabel->Text = "Travel Time : ";
	editDateBox->Visible = true;
	editDone->Visible = true;
}
private: System::Void editDone_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	string selectedReq = msclr::interop::marshal_as <string>(requestID->Text);
	string changetrain;
	string newdate = msclr::interop::marshal_as <string>(editDateBox->Text);
	PassengerClass pas;
	pas.railway_input(1);
	pas.railway_input(2);
	list<TrainClass>::iterator ite;
	list<RequestClass>::iterator it;
	string outFile = "request.txt";
	ofstream output(outFile.c_str(), ios::trunc);
	for (it = pas.requests.begin(); it != pas.requests.end(); it++)
	{
		if (it->id == selectedReq)
		{
			for (ite = pas.trains.begin(); ite != pas.trains.end(); ite++)
			{
				if (ite->train_num == it->train_num)
				{
					ite->number_of_seat = std::to_string((stoi(ite->number_of_seat)) + 1);
				}
				if (newdate == (ite->date_of_travel.hour + ":" + ite->date_of_travel.minute + "\t" + ite->date_of_travel.day + "/" + ite->date_of_travel.month + "/" + ite->date_of_travel.year))
				{

					ite->number_of_seat = std::to_string((stoi(ite->number_of_seat)) - 1);
					output << endl << it->id << "\t" << it->start << "\t" << it->end << "\t" << newdate << "\t" << it->passenger_id << "\t" << ite->train_num;
				}
			}
		}
		else
		{
			output << endl << it->id << "\t" << it->start << "\t" << it->end << "\t" << it->date_of_travel.hour << ":" << it->date_of_travel.minute << "\t"
				<< it->date_of_travel.day << "/" << it->date_of_travel.month << "/" << it->date_of_travel.year << "\t" << it->passenger_id << "\t" << it->train_num;

		}
	}
	output.close();

	string outFile1 = "train.txt";
	ofstream output1(outFile1.c_str(), ios::trunc);
	for (ite = pas.trains.begin(); ite != pas.trains.end(); ite++)
	{
		output1 << endl << ite->train_num << "\t" << ite->start << "\t" << ite->end << "\t" << ite->date_of_travel.hour << ":" << ite->date_of_travel.minute << "\t"
			<< ite->date_of_travel.day << "/" << ite->date_of_travel.month << "/" << ite->date_of_travel.year << "\t" << ite->number_of_seat << "\t" << ite->ticket_cost;
	}
	MessageBox::Show("You Edit On This Request Successfully");
}
private: System::Void DeleteBtn_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
{
	string selectedReq = msclr::interop::marshal_as <string>(requestID->Text);
	PassengerClass pas;
	pas.railway_input(2);
	list<RequestClass>::iterator it;
	pas.railway_input(1);
	list<TrainClass>::iterator ite;
	string outFile = "request.txt";
	ofstream output(outFile.c_str(), ios::trunc);
	for (it = pas.requests.begin(); it != pas.requests.end(); it++)
	{
		if (it->id == selectedReq)
		{
			for (ite = pas.trains.begin(); ite != pas.trains.end(); ite++)
			{
				if (ite->train_num == it->train_num)
				{
					ite->number_of_seat = std::to_string((stoi(ite->number_of_seat)) + 1);
				}
			}
		}
		else
		{
			output << endl << it->id << "\t" << it->start << "\t" << it->end << "\t" << it->date_of_travel.hour << ":" << it->date_of_travel.minute << "\t" << it->date_of_travel.day << "/" << it->date_of_travel.month << "/" << it->date_of_travel.year << "\t" << it->passenger_id << "\t" << it->train_num;
		}
	}
	output.close();
	string outFile1 = "train.txt";
	ofstream output1(outFile1.c_str(), ios::trunc);
	for (ite = pas.trains.begin(); ite != pas.trains.end(); ite++)
	{
		output1 << endl << ite->train_num << "\t" << ite->start << "\t" << ite->end << "\t" << ite->date_of_travel.hour << ":" << ite->date_of_travel.minute << "\t"
			<< ite->date_of_travel.day << "/" << ite->date_of_travel.month << "/" << ite->date_of_travel.year << "\t" << ite->number_of_seat << "\t" << ite->ticket_cost;
	}
	MessageBox::Show("Request Deleted Succesfully");

}
};
}
