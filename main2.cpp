#include "foreignpassport.h"
#include <Windows.h>


using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ForeignPassport foreignPassport;

    foreignPassport.Input();
    foreignPassport.Print();

    return 0;
}