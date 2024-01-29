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
        cout << "������ ��'�: ";
        cin >> name;
        cout << "������ �������: ";
        cin >> surname;
        cout << "������ �� �������: ";
        cin >> patronymic;
        cout << "������ ���� ���������� (��.��.���): ";
        cin >> birthdate;
        cout << "����: ";
        cin >> series;
        cout << "�����: ";
        cin >> number;
    }

    void Print() 
    {
        cout << "" << endl;
        cout << "��'�: " << name << endl;
        cout << "�������: " << surname << endl;
        cout << "�� �������: " << patronymic << endl;
        cout << "���� ����������: " << birthdate << endl;
        cout << "����: " << series << endl;
        cout << "�����: " << number << endl;
    }
};

#endif