#include "student.h"
#include "aspirant.h"
#include <Windows.h>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, surname, specialization;
	int age, course;
	cout << "������ ��'� ��������: ";
	cin >> name;
	cout << "������ ������� ��������: ";
	cin >> surname;
	cout << "������ �� ��������: ";
	cin >> age;
	cout << "������ ���� ��������: ";
	cin >> course;
	Student student(name, surname, age, course);
	cout << "������ ������������ ��������: ";
	cin >> specialization;
	Aspirant aspirant(name, surname, age, course, specialization);
	student.print();
	aspirant.print();
	return 0;
}