#include "student.h"
#include "aspirant.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name;
	int age;
	int year;
	string scientific_advisor;
	string topic_of_thesis;
	cout << "¬вед≥ть ≥м'€ студента: ";
	cin >> name;
	cout << "¬вед≥ть в≥к студента: ";
	cin >> age;
	cout << "¬вед≥ть курс студента: ";
	cin >> year;
	cout << "¬вед≥ть ≥м'€ наукового кер≥вника: ";
	cin >> scientific_advisor;
	cout << "¬вед≥ть тему дисертац≥њ: ";
	cin >> topic_of_thesis;
	Aspirant aspirant(name, age, year, scientific_advisor, topic_of_thesis);
	aspirant.print();
	return 0;
}