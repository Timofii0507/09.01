#include "lab3.h"
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int type;
    cout << "Виберіть тип транспортного засобу:\n"
        "1. Автомобіль\n"
        "2. Велосипед\n"
        "3. Віз\n";
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
        cout << "Невірний тип транспортного засобу" << endl;
        return 1;
    }

    double distance;
    cout << "Введіть відстань до пункту призначення (в кілометрах): ";
    cin >> distance;

    double time = vehicle->CalculateTime(distance);
    double cost = vehicle->CalculateCost(distance);
    cout << "Час перевезення: " << time << " годин" << endl;
    cout << "Вартість перевезення: " << cost << " гривні" << endl;

    return 0;
}