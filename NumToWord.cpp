// NumToWord.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string intSwitch(int num, int place)
{
	string str;
	if (num == 0) { str = "zero"; }
	else if (num == 1) {str =  "one"; }
	else if (num == 2) {str = "two"; }
	else if (num == 3) {str = "three"; }
	else if (num == 4) {str = "four"; }
	else if (num == 5) {str = "five"; }
	else if (num == 6) {str = "six"; }
	else if (num == 7) {str = "seven"; }
	else if (num == 8) {str = "eight"; }
	else if (num == 9) {str = "nine"; }
	
	if (place == 0){return str;}
	if (place == 1){return str + "ty ";}
	if (place == 2){return str + " hundred ";}
	if (place == 3) { return str + " thousand "; }
}

string intToStr(int i)
{
	cout << "origional int :"<< i << "\n";
	string str = "";
	int place = 0;
	int x = i, y = 0;
	while (x > 0)
	{
		
		y = x % 10;
		x = x - y;
		str = intSwitch(y, place) + str;
		x = x / 10;
		place = place + 1;
	}
	return str;
}

int main()
{
	string str = intToStr(7777);
	cout << "final string: "<< str << "\n";
    return 0;
}

