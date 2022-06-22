#include "Phanso.h"
#include <iostream>
using namespace std;

int main()
{
    PhanSo ps1, ps2;
    ps1.nhapPS();
    ps2.nhapPS();
    cout << "Phan so 1: ";
    ps1.xuatPS();
    cout << "Phan so 2: ";
    ps2.xuatPS();

    PhanSo ps3, ps4, ps5, ps6;
    ps3 = ps1.cong(ps2);
    ps4 = ps1.tru(ps2);
    ps5 = ps1.nhan(ps2);
    ps6 = ps1.chia(ps2);
    cout << "PS1 + PS2 = "; ps3.xuatPS();
    cout << "PS1 - PS2 = "; ps4.xuatPS();
    cout << "PS1 * PS2 = "; ps5.xuatPS();
    cout << "PS1 / PS2 = "; ps6.xuatPS();
    return 0;
}