// ConsoleApplication43.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int const SIZE = 10;
int main()
{
	char str[SIZE];
	cin.getline(str, SIZE);
	int length;
	length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		if (str[i] == 'T')
			cout << i + 1 << endl;
	}

	system("PAUSE");
	return 0;
}

