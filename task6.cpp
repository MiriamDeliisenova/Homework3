// ConsoleApplication36.cpp : Defines the entry point for the console application.
//
//Напишете рекурсивна функция която изписва на конзолата представянето в двоична бройна система на цяло число.

#include "stdafx.h"
#include <iostream>
using namespace std;

int binary(int number)
{
	if (number == 1) return 1;
	return number % 2 + 10* binary(number / 2);

}
int main()
{
	int number;
	cin >> number;
	cout<<binary(number);

	system("PAUSE");
    return 0;
}

