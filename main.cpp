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
	cout << "������ ��'� ��������: ";
	cin >> name;
	cout << "������ �� ��������: ";
	cin >> age;
	cout << "������ ���� ��������: ";
	cin >> year;
	cout << "������ ��'� ��������� ��������: ";
	cin >> scientific_advisor;
	cout << "������ ���� ����������: ";
	cin >> topic_of_thesis;
	Aspirant aspirant(name, age, year, scientific_advisor, topic_of_thesis);
	aspirant.print();
	return 0;
}