// ConsoleApplication33.cpp : Defines the entry point for the console application.
/*Да се състави програма на C++, чрез която се извеждат всички главни букви от латинската азбука 
и техните ASCII кодове. ASCII (American Standard Code for Information Interchange). 
Извежданият резултат да бъде оформен в две колони.*/

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		cout << ch << " " << (int)ch << endl;
	}

	system("PAUSE");
	return 0;
}
