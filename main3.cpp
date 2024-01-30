#include "lab3.h"
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int type;
    cout << "������� ��� ������������� ������:\n"
        "1. ���������\n"
        "2. ���������\n"
        "3. ³�\n";
    cin >> type;

    Vehicle* vehicle;
    switch (type) {
    case 1:
        vehicle = new Car();
        break;
    case 2:
        vehicle = new Bicycle();
        break;
    case 3:
        vehicle = new Cart();
        break;
    default:
        cout << "������� ��� ������������� ������" << endl;
        return 1;
    }

    double distance;
    cout << "������ ������� �� ������ ����������� (� ���������): ";
    cin >> distance;

    double time = vehicle->CalculateTime(distance);
    double cost = vehicle->CalculateCost(distance);
    cout << "��� �����������: " << time << " �����" << endl;
    cout << "������� �����������: " << cost << " �����" << endl;

    return 0;
}