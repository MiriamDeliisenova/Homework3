// ConsoleApplication27.cpp : Defines the entry point for the console application.
/*Да се състави програма на C++, чрез която се въвеждат 10 букви и цифри.
Програмата да извежда по колко цифри, големи и малки букви са въведени.*/

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int lowercaseLetters = 0;
	int largeLetters = 0;
	int figures = 0;
	char arr[11];
	cin.getline(arr,11);
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z') lowercaseLetters++;
		else if (arr[i] >= 'A' && arr[i] <= 'Z') largeLetters++;
		else if (arr[i] >= '0' && arr[i] <= '9') figures++;
	}
	cout << "Number of lowercase letters:" << lowercaseLetters << endl; 
	cout << " Number of large letters:" << largeLetters << endl;
	cout <<"Number of figures:" << figures << endl;

	system("PAUSE");
    return 0;
}

