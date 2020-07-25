#pragma once
#include <string>
#include <iostream>
#include"TrainClass.h"

using namespace std;

class RequestClass
{
public:
	string id;
	string passenger_id;
	string train_num;
	string start;
	string end;
	date date_of_travel;
	RequestClass();
};

