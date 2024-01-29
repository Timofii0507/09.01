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
	cout << "Ââåä³òü ³ì'ÿ ñòóäåíòà: ";
	cin >> name;
	cout << "Ââåä³òü â³ê ñòóäåíòà: ";
	cin >> age;
	cout << "Ââåä³òü êóðñ ñòóäåíòà: ";
	cin >> year;
	cout << "Ââåä³òü ³ì'ÿ íàóêîâîãî êåð³âíèêà: ";
	cin >> scientific_advisor;
	cout << "Ââåä³òü òåìó äèñåðòàö³¿: ";
	cin >> topic_of_thesis;
	Aspirant aspirant(name, age, year, scientific_advisor, topic_of_thesis);
	aspirant.print();
	return 0;
}
