#pragma once
#include <iostream>
using namespace std;
class Date
{
public:
	int day;
	int month;
	int year;
	Date(int d, int m, int y) : day{ d }, month{ m }, year{ y } {}
	Date() : Date(1, 1, 2000) {}
	void show()
	{
		cout << day << "." << month << "." << year;
	}
};