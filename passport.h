#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include <string>

using namespace std;

class Passport 
{
public:
    string name;
    string surname;
    string patronymic;
    string birthdate;
    int series;
    int number;

    Passport() 
    {
        name = "";
        surname = "";
        patronymic = "";
        birthdate = "";
        series = 0;
        number = 0;
    }

    void Input() 
    {
        cout << "Введіть ім'я: ";
        cin >> name;
        cout << "Введіть прізвище: ";
        cin >> surname;
        cout << "Введіть по батькові: ";
        cin >> patronymic;
        cout << "Введіть дату народження (дд.мм.ррр): ";
        cin >> birthdate;
        cout << "Серія: ";
        cin >> series;
        cout << "Номер: ";
        cin >> number;
    }

    void Print() 
    {
        cout << "" << endl;
        cout << "Ім'я: " << name << endl;
        cout << "Прізвище: " << surname << endl;
        cout << "По батькові: " << patronymic << endl;
        cout << "Дата народження: " << birthdate << endl;
        cout << "Серія: " << series << endl;
        cout << "Номер: " << number << endl;
    }
};

#endif