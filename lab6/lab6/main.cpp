/**
  @mainpage Lab #6.	\n
  Implementation abstract factories. 
*/

#include <iostream>
#include <list>
#include "ABCD.h"


void main()
{
	char* input = "BBCDC";
	std::list<A*> l;
	factoryB bfact;
	factoryC cfact;
	factoryD dfact;

	for (int i = 0; i < strlen(input); i++)
	{
		switch (input[i])
		{
		case 'B':
			l.push_back(bfact.create());
			break;
		case 'C':
			l.push_back(cfact.create());
			break;
		case 'D':
			l.push_back(dfact.create());
			break;
		default:
			break;
		}
	}

	for (auto i = l.begin(); i != l.end(); i++)
	{
		(*i)->show();
		delete (*i);
	}
	system("pause");
}
