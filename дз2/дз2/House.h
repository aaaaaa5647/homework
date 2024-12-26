#pragma once
#include "Flat.h"

class House
{
	vector <Flat> house;
public:
	House(vector <Flat> h) : house{ h } {}

	House() 
	{
		Flat f;
		vector <Flat> h1{ f }; 
		house = h1;
	}
	House(const House& house1) : House(house1.house) {}
	vector<Flat> getHouse()
	{
		return house;
	}
	void show()
	{
		for (int i = 0; i < house.size(); i++)
		{
			cout << "Дом: \n\n";
			cout << "Квартира №" << i + 1 << endl;
			house[i].show();
			cout << "\n\n\n";
		}
	}
};
