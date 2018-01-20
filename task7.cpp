// ConsoleApplication37.cpp : Defines the entry point for the console application.
//Напишете рекурсивна функция която повдигна цяло число на цяло число степен.

#include "stdafx.h"
#include <iostream>
using namespace std;

int gradation(int number, int degree)
{
	if (degree == 0) return 1;
	if (degree > 0) return number * gradation(number, degree - 1);
	else if (degree < 0) return number * gradation(number, degree + 1);

}
int main()
{
	int number, degree;
	double x = 1;
	cout << "The number is:";
	cin >> number; 
	cout<< "The degree is:"
	cin>> degree;
	if (degree >= 0) cout << gradation(number, degree) << endl;
	else if (degree < 0)
	{
		x = x / gradation(number, degree);
		cout << x << endl;
	}


	system("PAUSE");
	return 0;
}

