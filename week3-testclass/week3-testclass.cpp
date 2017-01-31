// week3-testclass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myclass.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int x = 3;
	int y = 4;
	myClass test;

	test.printNumbers(x, y);
	test.addNumbers(x, y);
    return 0;
}

void myClass::printNumbers(int x, int y)
{
	cout << "Integer 1: " << x << endl;
	cout << "Integer 2: " << y << endl;
};

void myClass::addNumbers(int x, int y)
{
	#include<iostream>
	using namespace std;

	int localSum = x + y;
	cout << "The sum of the two numbers is: " << localSum << endl;
};