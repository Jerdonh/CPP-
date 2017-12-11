// tester.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

struct point { int x; int y; };

void printPoint(point p)
{
	cout << "(" << p.x << "," << p.y << ")" << "\n";
}

point findPoint()
{
	point g;
	g.x = 0;
	g.y = 0;
	return g;
}


int main()
{
	

	point origin;
	origin.x = 0;
	origin.y = 0;

	printPoint(origin);

	int test;
	cout << "\n" << &test << "\n";
	int * ip;
	int arr[3] = { 3,2,1 };
	ip = arr;
	cout << "arr address: " << arr << "\n";
	cout << "ip value: " << ip << "\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "value of arr from ip: " << *ip << "\n";
		ip++;
	}
    return 0;
}

