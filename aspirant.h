#ifndef ASPIRANT_H
#define ASPIRANT_H

#include "student.h"

class Aspirant : public Student 
{
public:
    Aspirant() {}
    Aspirant(string name, string surname, int age, int course, string specialization)
        : Student(name, surname, age, course) 
    {
        this->specialization = specialization;
    }
    string getSpecialization() const { return specialization; }
    void setSpecialization(string specialization) { this->specialization = specialization; }
    virtual void print() const override 
    {
        Student::print();
        cout << "Спеціалізація: " << specialization << endl;
    }
private:
    string specialization;
};

#endif
