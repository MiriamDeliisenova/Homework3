// ConsoleApplication40.cpp : Defines the entry point for the console application.
//Напишете рекурсивна функция която изчислява дължината на символен низ.

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 100;
int i = 0;
int st(char str[])
{
	if (str[i] == '\0')
	return i;
	i++;
	st(str);
}
int main()
{
	char str[SIZE];
	cin.getline(str, SIZE);
	cout << st(str) << endl;

	system("PAUSE");
    return 0;
}

