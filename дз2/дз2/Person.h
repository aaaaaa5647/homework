#pragma once
#include "Date.h"
#include <string>
class Person
{
	int num;
	char* surname = new char;
	char* name = new char;
    char* patronymic = new char;
	Date birthday;
public:
    static int count;
	Person(int n, char* s, char* nm, char* p, int day, int month, int year) : num{ n }, surname{ s }, name{ nm }, patronymic{ p }, birthday{ Date(day, month, year) } { count++; }
	Person(char* s1 = (char*)"Иванов", char* nm1 = (char*)"Иван", char* p1 = (char*)"Иванович") : Person(11111111, s1, nm1, p1, 1, 1, 2000) { count++; }
	Person(const Person& person) : Person(person.num, person.surname, person.name, person.patronymic, person.birthday.day, person.birthday.month, person.birthday.year) {}
    void setNumber()
    {
        cin >> num;
    }

    void setSurname()
    {
        cin >> surname;
    }

    void setName()
    {
        cin >> name;
    }

    void setPatronymic()
    {
        cin >> patronymic;
    }

    void setBirthDay()
    {
        cin >> birthday.day;
    }

    void setBirthMonth()
    {
        cin >> birthday.month;
    }

    void setBirthYear()
    {
        cin >> birthday.year;
    }

    int getNumber()
    {
        return num;
    }

    char* getSurame()
    {
        return surname;
    }

    char* getName()
    {
        return name;
    }

    char* getPatronimyc()
    {
        return patronymic;
    }

    int getBirthDay()
    {
        return birthday.day;
    }

    int getBirthMonth()
    {
        return birthday.month;
    }

    int getBirthYear()
    {
        return birthday.year;
    }

    void show()
    {
        cout << "Идентификационный номер: " << num << endl;
        cout << "ФИО: " << surname << " " << name << " " << patronymic << endl;
        cout << "Дата рожденния: ";
        birthday.show();
    }

    //~Person()
    //{
    //    delete[] patronymic;
    //    delete[] name;
    //    delete[] surname;
    //} у меня деструктор не работает и я не знаю почему :(
};