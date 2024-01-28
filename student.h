#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student 
{
public:
    string name;
    int age;
    int year;

    Student() {}

    Student(string name, int age, int year) 
    {
        this->name = name;
        this->age = age;
        this->year = year;
    }

    void print() 
    {
        cout << "��'�: " << name << endl;
        cout << "³�: " << age << endl;
        cout << "����: " << year << endl;
    }
};

#endif
