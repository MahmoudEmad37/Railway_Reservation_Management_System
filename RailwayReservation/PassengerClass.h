#pragma once
#include <string>
#include<vector>
#include <iostream>
#include<fstream>
#include"RequestClass.h"

using namespace std;

class PassengerClass
{
public:
	string id;
	string name;
	string mail;
	string password;
	list<TrainClass>trains;
	vector<PassengerClass>passengers;
	list<RequestClass>requests;
	PassengerClass();
	void railway_input(int choise);
	int regist(int id, string name, string username, string password);
	int loginAsPas(string username, string password);
};

