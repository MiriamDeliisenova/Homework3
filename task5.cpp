// ConsoleApplication35.cpp : Defines the entry point for the console application.
//
/*Да се състави програма на C++, чрез която от клавиатурата се въвежда последователност от букви. 
Програмата да проверява дали във въведения текст се съдържа знака 'Т' и на коя позиция е.
Пример: asdTeg Изход: позиция 4*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int const SIZE = 10;
int main()
{
	char str[SIZE];
	cin.getline (str,SIZE);
	int length;
	length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		if (str[i] == 'T')
		cout << i+1 << endl;
	}
	
	system("PAUSE");
    return 0;
}

