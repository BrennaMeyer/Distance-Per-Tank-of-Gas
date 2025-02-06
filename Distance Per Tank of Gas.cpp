// Distance Per Tank of Gas.cpp : This file contains the 'main' function. Program execution begins and ends there.
////Programmer Brenna Meyer
//Date February 6th, 2025
//Reqirements:Miles per Gallon A car holds 15 gallons of gasoline and can travel 375 miles before refueling. 
//Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen;

#include <iostream>
using namespace std;

int main()
{
	double milesDriven = 375,
		gallonsOfGasUsed = 15,
		MPG = milesDriven / gallonsOfGasUsed;

	cout << endl
		<< "milesDriven =" << milesDriven << endl
		<< "Gallons used =" << gallonsOfGasUsed << endl
		<< "Miles per gallon" << MPG << endl
		<< endl;

	return 0;
}
