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

        cout << "Яке Ваше громадянство? (введіть назву країни): ";
        cin >> citizenship;

        cout << "Маєте закордонний паспорт? (введіть + або -): ";
        char hasPassport;
        cin >> hasPassport;
        if (hasPassport == '+') 
        {
            cout << "Введіть номер візи: ";
            cin >> visaNumber;
            cout << "Введіть країну візи: ";
            cin >> visaCountry;
        }
    }

    void Print() 
    {
        Passport::Print();

        if (visaNumber != "") 
        {
            cout << "Номер візи: " << visaNumber << endl;
            cout << "Країна візи: " << visaCountry << endl;
        }
        cout << "Громадянство: " << citizenship << endl;
    }
};

#endif
