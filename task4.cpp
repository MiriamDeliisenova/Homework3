﻿// ConsoleApplication43.cpp : Defines the entry point for the console application.
/*Да се състави програма на C++, чрез която от клавиатурата се въвеждат последователно две думи с дължина 10-20 знака. 
Програмата да размени първите им 5 знака и да изведе дължината на по-дългата, както и новото им съдържание.*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 100;
int main()
{
	char str[SIZE], str1[SIZE], str2[SIZE];
	cout << "The first string:";
	cin.getline(str, SIZE);
	cout << "The second string:";
	cin.getline(str1, SIZE);
	int sizeStr = strlen(str);
	int sizeStr1 = strlen(str1);
	for(int i=0;str[i] < str[SIZE];i++)
	{
		str2[i] = str[i];
		str[i] = str1[i];
		str1[i] = str2[i];
	}
	if (sizeStr>sizeStr1)
	{
		cout << sizeStr << endl;
	}
	else if (sizeStr1>sizeStr)
	{
		cout << sizeStr1 << endl;
	}
	else
	{
		cout << "The two strings have the same length:" << " " << sizeStr << endl;
	}

	system("PAUSE");
	return 0;
}
