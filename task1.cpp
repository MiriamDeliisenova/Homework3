// ConsoleApplication26.cpp : Defines the entry point for the console application.
/*Да се състави програма на C++,която по въведена малка латинска буква отпечатва същата,
но главна буква от латинската азбука*/

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int d = 'A' - 'a';
	char ch = 'a';
	cout << ch << endl;
	ch += d;
	cout << ch << endl;

	system("PAUSE");
	return 0;
}



