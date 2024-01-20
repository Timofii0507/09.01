#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student 
{
public:
    Student() {}
    Student(string name, string surname, int age, int course) 
    {
        this->name = name;
        this->surname = surname;
        this->age = age;
        this->course = course;
    }
    string getName() const { return name; }
    void setName(string name) { this->name = name; }
    string getSurname() const { return surname; }
    void setSurname(string surname) { this->surname = surname; }
    int getAge() const { return age; }
    void setAge(int age) { this->age = age; }
    int getCourse() const { return course; }
    void setCourse(int course) { this->course = course; }
    virtual void print() const {
        cout << "Ім'я: " << name << endl;
        cout << "Прізвище: " << surname << endl;
        cout << "Вік: " << age << endl;
        cout << "Курс: " << course << endl;
    }
private:
    string name;
    string surname;
    int age;
    int course;
};

#endif
