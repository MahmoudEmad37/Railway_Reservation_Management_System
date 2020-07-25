#include "Files.h"

void files::getData(string inFile, list<string> &elements)
{
	ifstream input(inFile.c_str());
	elements.clear();
	string line;
	for (int lineN = 1; getline(input, line); lineN++)
		elements.push_back(line);
	input.close();
}

void files::insertAsAdmin(string outFile, string nowTime)
{
	ofstream output(outFile.c_str(), ios::app);
	output << endl << nowTime;
}

void files::insertAsPassenger(string outFile, string name, string username, string password)
{
	ofstream output(outFile.c_str(), ios::app);
	output << endl << name << endl << username << endl << password;
}