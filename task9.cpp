// ConsoleApplication44.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int const SIZE = 100;
int main()
{
	char str1[SIZE];
	int str2[SIZE] = { 0 };
	cin.getline(str1, SIZE);
	int x = strlen(str1);
	for (int i = 0; i < x; i++)
	{
		if (str1[i] >= ' ' && str1[i] <= 'z')
		{
			int j = str1[i] - ' ';
			str2[j] = str2[j] + 1;
		}
	}
	for (int i = 0; i < 91; i++)
	{
		if (str2[i] != 0) cout << "'" << (char)(i + ' ') << "':" << " " << str2[i] << endl;
	}

	system("PAUSE");
	return 0;
}
