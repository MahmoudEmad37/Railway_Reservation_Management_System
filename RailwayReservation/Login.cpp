#include "Login.h"

bool login::checkInFile(string inFile, string username, string password)
{
	list<string> elements;
	list<string>::iterator iter;
	files::getData(inFile, elements);

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