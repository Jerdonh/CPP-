//Given an array of ints return the ints that occur an odd number of times
#include "stdafx.h"
#include <iostream>
#include <tuple>
#include <vector>
#include <array>
using namespace std;

int main()
{
	vector < tuple<int, int> > points;
	int nums[] = {0,1,2,3,1,2,3,1,2,0,0,3,3,1,1,5};
	
	int length = sizeof(nums);
	int i = 0;
	int newNums[10] = { 0 };
	while (i < 16)
	{
		newNums[nums[i]] = newNums[nums[i]] + 1;
		i++;
	}
	i = 0;
	/*while (i < 10)
	{
		cout << newNums[i];
		i++;
	}*/
	


	i = 0;
	int y = 0;
	int finalNums[10] = { 0 };// = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	while (i < 10)
	{
		if (newNums[i] % 2 == 1)
		{
			//cout << i << "\n";
			finalNums[y] = i;
			//cout << y << "  " <<finalNums[y] << "\n";
			y++;
		}
		i++;
	}
	while (y < 10)
	{
		finalNums[y] = -1;
		y++;
	}
	i = 0;
	
	for (int t : finalNums)
	{
		if (t != -1)
		{
			cout << t << "\n";
		}
	}
	
    return 0;
}