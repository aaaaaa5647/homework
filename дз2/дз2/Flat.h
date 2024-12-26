#pragma once
#include "Person.h"
#include <vector>
class Flat
{
	vector <Person> flat;
public:
	Flat(vector <Person> f) : flat{ f } {}
	
	Flat()
	{
		Person p;
		vector <Person> f1{ p };
		flat = f1;
	}
	Flat(const Flat& flat1) : Flat(flat1.flat) {}
	vector<Person> getFlat()
	{
		return flat;
	}
	void show()
	{
		for (int i = 0; i < flat.size(); i++)
		{
			cout << "\nÆèòåëü ¹" << i + 1 << endl;
			flat[i].show();
		}
	}
};