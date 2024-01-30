#ifndef HM_H
#define HM_H

#include <iostream>

using namespace std;

class DomaceTvarina {
protected:
    string meno;
    float vek;
    int vaha;
public:
    DomaceTvarina(string meno, float vek, int vaha) {
        this->meno = meno;
        this->vek = vek;
        this->vaha = vaha;
    }

    void vypis() {
        cout << "��'�: " << meno << endl;
        cout << "³�: " << vek << endl;
        cout << "����: " << vaha << endl;
    }
};

class Pes : public DomaceTvarina {
public:
    Pes(string meno, float vek, int vaha) : DomaceTvarina(meno, vek, vaha) {}

    void zvuk() {
        cout << "���-���" << endl;
    }
};

class Macka : public DomaceTvarina {
public:
    Macka(string meno, float vek, int vaha) : DomaceTvarina(meno, vek, vaha) {}

    void zvuk() {
        cout << "���-���" << endl;
    }
};

class Papagaj : public DomaceTvarina {
public:
    Papagaj(string meno, float vek, int vaha) : DomaceTvarina(meno, vek, vaha) {}

    void zvuk() {
        cout << "���-���" << endl;
    }
};

#endif