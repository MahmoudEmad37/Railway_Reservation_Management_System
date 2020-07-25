#pragma once
#include<string>
#include<iostream>
#include<list>

using namespace std;

struct date
{
	string minute;
	string hour;
	string day;
	string month;
	string year;
};

class TrainClass
{
public:
	string train_num;
	string start;
	string end;
	string number_of_seat;
	string ticket_cost;
	tm travel_date;
	date date_of_travel;
	TrainClass();
	list<TrainClass> search_train(string key, list<TrainClass> trains);
	void display();
};

