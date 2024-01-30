#include "hm.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string meno;
    float vek;
    int vaha;

    cout << "������ ��'� ������: ";
    cin >> meno;
    cout << "������ �� ������: ";
    cin >> vek;
    cout << "������ ���� ������: ";
    cin >> vaha;

    Pes pes(meno, vek, vaha);
    pes.zvuk();

    cout << endl;

    cout << "������ ��'� ����: ";
    cin >> meno;
    cout << "������ �� ����: ";
    cin >> vek;
    cout << "������ ���� ����: ";
    cin >> vaha;

    Macka macka(meno, vek, vaha);
    macka.zvuk();

    cout << endl;

    cout << "������ ��'� ������: ";
    cin >> meno;
    cout << "������ �� ������: ";
    cin >> vek;
    cout << "������ ���� ������: ";
    cin >> vaha;

    Papagaj papagaj(meno, vek, vaha);
    papagaj.zvuk();

    return 0;
}