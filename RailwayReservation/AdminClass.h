#include"PassengerClass.h"

using namespace std;

public class AdminClass
{
public:
	string username;
	string password;
	list<TrainClass>trains;
	vector<PassengerClass>passengers;
	bool login(string username, string password);
	void insertAsAdmin(string nowTime);
	void railway_input(int choise);
};

