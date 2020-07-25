#include "AdminClass.h"

bool AdminClass::login(string username, string password)
{
	list<string> elements;
	list<string>::iterator iter;
	string inFile = "AdminFile.txt";
	ifstream input(inFile.c_str());
	elements.clear();
	string line;
	for (int lineN = 1; getline(input, line); lineN++)
		elements.push_back(line);
	input.close();
	for (iter = elements.begin(); iter != elements.end(); iter++)
	{
		if ((*iter) == username)
		{
			++iter;
			if ((*iter) == password)
				return true;

			else
				continue;
		}
		else
		{
			continue;
		}
	}
	return false;
}

void AdminClass::insertAsAdmin(string nowTime)
{
	string outFile = "AdminFile.txt";
	ofstream output(outFile.c_str(), ios::app);
	output << endl << nowTime;
}

void AdminClass::railway_input(int choise)
{
	if (choise == 1)
	{
		TrainClass newtrain;
		fstream train;
		train.open("train.txt");
		getline(train, newtrain.train_num, '\n');
		for (int i = 0; train.eof() == false; i++)
		{
			getline(train, newtrain.train_num, '	');
			getline(train, newtrain.start, '	');
			getline(train, newtrain.end, '	');
			getline(train, newtrain.date_of_travel.hour, ':');
			getline(train, newtrain.date_of_travel.minute, '	');
			getline(train, newtrain.date_of_travel.day, '/');
			getline(train, newtrain.date_of_travel.month, '/');
			getline(train, newtrain.date_of_travel.year, '	');
			getline(train, newtrain.number_of_seat, '	');
			getline(train, newtrain.ticket_cost);

			newtrain.travel_date.tm_hour = atoi(newtrain.date_of_travel.hour.c_str());
			newtrain.travel_date.tm_min = atoi(newtrain.date_of_travel.minute.c_str());
			newtrain.travel_date.tm_mday = atoi(newtrain.date_of_travel.day.c_str());
			newtrain.travel_date.tm_mon = atoi(newtrain.date_of_travel.month.c_str());
			newtrain.travel_date.tm_year = atoi(newtrain.date_of_travel.year.c_str());

			trains.push_back(newtrain);
		}
		train.close();
	}
	if (choise == 2)
	{
		PassengerClass newpassenger;
		fstream passenger;
		passenger.open("passenger.txt");
		getline(passenger, newpassenger.id, '\n');
		for (int i = 0; passenger.eof() == false; i++)
		{
			getline(passenger, newpassenger.id, '	');
			getline(passenger, newpassenger.name, '	');
			getline(passenger, newpassenger.mail, '	');
			getline(passenger, newpassenger.password);
			passengers.push_back(newpassenger);
		}
		passenger.close();
	}
}

