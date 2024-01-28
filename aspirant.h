#ifndef ASPIRANT_H
#define ASPIRANT_H

#include "student.h"

class Aspirant : public Student 
{
public:
    string scientific_advisor;
    string topic_of_thesis;

    Aspirant() {}

    Aspirant(string name, int age, int year, string scientific_advisor, string topic_of_thesis)
        : Student(name, age, year) 
    {
        this->scientific_advisor = scientific_advisor;
        this->topic_of_thesis = topic_of_thesis;
    }

    void print() 
    {
        Student::print();
        cout << "�������� �������: " << scientific_advisor << endl;
        cout << "���� ����������: " << topic_of_thesis << endl;
    }
};

#endif
