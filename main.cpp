#include "student.h"
#include "aspirant.h"
#include <Windows.h>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, surname, specialization;
	int age, course;
	cout << "¬вед≥ть ≥м'€ студента: ";
	cin >> name;
	cout << "¬вед≥ть пр≥звище студента: ";
	cin >> surname;
	cout << "¬вед≥ть в≥к студента: ";
	cin >> age;
	cout << "¬вед≥ть курс студента: ";
	cin >> course;
	Student student(name, surname, age, course);
	cout << "¬вед≥ть спец≥ал≥зац≥ю асп≥ранта: ";
	cin >> specialization;
	Aspirant aspirant(name, surname, age, course, specialization);
	student.print();
	aspirant.print();
	return 0;
}