#ifndef FOREIGNPASSPORT_H
#define FOREIGNPASSPORT_H

using namespace std;

#include "passport.h"

class ForeignPassport : public Passport 
{
public:
    string visaNumber;
    string visaCountry;
    string registration;
    string birthplace;
    string citizenship;

    ForeignPassport() 
    {
        visaNumber = "";
        visaCountry = "";
        registration = "";
        birthplace = "";
        citizenship = "";
    }

    void Input() 
    {
        Passport::Input();

        cout << "��� ���� ������������? (������ ����� �����): ";
        cin >> citizenship;

        cout << "���� ����������� �������? (������ + ��� -): ";
        char hasPassport;
        cin >> hasPassport;
        if (hasPassport == '+') 
        {
            cout << "������ ����� ���: ";
            cin >> visaNumber;
            cout << "������ ����� ���: ";
            cin >> visaCountry;
        }
    }

    void Print() 
    {
        Passport::Print();

        if (visaNumber != "") 
        {
            cout << "����� ���: " << visaNumber << endl;
            cout << "����� ���: " << visaCountry << endl;
        }
        cout << "������������: " << citizenship << endl;
    }
};

#endif
