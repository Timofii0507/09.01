#include "hm.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string meno;
    float vek;
    int vaha;

    cout << "¬вед≥ть ≥м'€ собаки: ";
    cin >> meno;
    cout << "¬вед≥ть в≥к собаки: ";
    cin >> vek;
    cout << "¬вед≥ть вагу собаки: ";
    cin >> vaha;

    Pes pes(meno, vek, vaha);
    pes.zvuk();

    cout << endl;

    cout << "¬вед≥ть ≥м'€ к≥шки: ";
    cin >> meno;
    cout << "¬вед≥ть в≥к к≥шки: ";
    cin >> vek;
    cout << "¬вед≥ть вагу к≥шки: ";
    cin >> vaha;

    Macka macka(meno, vek, vaha);
    macka.zvuk();

    cout << endl;

    cout << "¬вед≥ть ≥м'€ папуги: ";
    cin >> meno;
    cout << "¬вед≥ть в≥к папуги: ";
    cin >> vek;
    cout << "¬вед≥ть вагу папуги: ";
    cin >> vaha;

    Papagaj papagaj(meno, vek, vaha);
    papagaj.zvuk();

    return 0;
}