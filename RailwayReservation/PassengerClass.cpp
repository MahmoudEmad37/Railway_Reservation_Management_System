#include "PassengerClass.h"

PassengerClass::PassengerClass()
{

}

int PassengerClass::regist(int id, string name, string mail, string password)
{
	string outFile = "passenger.txt";
	ofstream output(outFile.c_str(), ios::app);

	PassengerClass::railway_input(3);
	vector<PassengerClass>::iterator it;
	for (it = passengers.begin(); it != passengers.end(); it++)
	{
		if (it->mail == mail)
		{
			return -1;
		}
		else
		{
			continue;
		}
	}
	output << endl << id << "\t" << name << "\t" << mail << "\t" << password;
	return id;
	
}

int PassengerClass::loginAsPas(string mail, string password)
{
	PassengerClass::railway_input(3);
	vector<PassengerClass>::iterator it;
	for (it = passengers.begin(); it != passengers.end(); it++)
	{
		if (it->mail == mail &&it->password==password)
		{
			int id = stoi(it->id);			
			return id;
		}
		else
		{
			continue;
		}
	}
	return -1;
}


void PassengerClass::railway_input(int choise)
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
		RequestClass newrequest;
		fstream request;
		request.open("request.txt");
		getline(request, newrequest.id, '\n');
		for (int i = 0; request.eof() == false; i++)
		{
			getline(request, newrequest.id, '	');
			getline(request, newrequest.start, '	');
			getline(request, newrequest.end, '	');
			getline(request, newrequest.date_of_travel.hour, ':');
			getline(request, newrequest.date_of_travel.minute, '	');
			getline(request, newrequest.date_of_travel.day, '/');
			getline(request, newrequest.date_of_travel.month, '/');
			getline(request, newrequest.date_of_travel.year, '	');
			getline(request, newrequest.passenger_id, '	');
			getline(request, newrequest.train_num);
			requests.push_back(newrequest);
		}
		request.close();
	}
	if (choise == 3)
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