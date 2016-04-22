// ArrayAndForLoopPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double values[10] = { 32, 54, 67.5, 29, 34.5, 80, 115, 44.5, 100, 65 };
	double highest = 0;
	double lowest = 1000;
	double sum = 0;
	double avg, input;
	bool isIn = 0;
	int pos;
	const int ARRSIZE = sizeof(values) / 8;

	cout << "What number would you like to find in the array? : ";
	cin >> input;

	for (int i = 0; i < ARRSIZE; i++)
	{
		// Part 1 - output each individual array element.
		cout << values[i] << " ";
		// Part 2 - find highest value
		if (values[i] > highest)
		{
			highest = values[i];
		}
		// Part 3 - find lowest value
		if (values[i] < lowest)
		{
			lowest = values[i];
		}
		// Part 4 - find sum
		sum = sum + values[i];
		// Part 6.1 - See if number that has been input is in the array
		if (input == values[i])
		{
			isIn = 1;
			pos = i + 1;
		}
	}
	cout << endl;

	// Part 5 - find average
	avg = sum / ARRSIZE;

	cout << "Highest value: " << highest << endl;
	cout << "Lowest value: " << lowest << endl;
	cout << "Sum value: " << sum << endl;
	cout << "Average value: " << avg << endl;
	// Part 6.2 - Handle result of input being in array.
	if (isIn == 0)
		cout << "Sorry, " << input << " is not in the array." << endl;
	else if (isIn == 1)
		cout << "Yay! The number you looked up IS in the array at position " << pos << endl;

	system("pause");
	return 0;
}