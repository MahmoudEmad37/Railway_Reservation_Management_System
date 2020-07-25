#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <msclr\marshal_cppstd.h>
#include <time.h>
using namespace std;

class files
{
public:

	void static insertAsPassenger(string outFile, string name, string username, string password);

	void static insertAsAdmin(string outFile, string nowTime);

	void static getData(string inFile, list<string> &elements);

};