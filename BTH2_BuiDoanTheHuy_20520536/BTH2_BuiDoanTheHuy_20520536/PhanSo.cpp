#include "Phanso.h"
#include <iostream>
PhanSo::PhanSo()
{
    tu = 0;
    mau = 1;
}
PhanSo::PhanSo(const PhanSo& temp)
{
    tu = temp.tu;
    mau = temp.mau;
}
PhanSo::PhanSo(int tuso)
{
    tu = tuso;
}
PhanSo::PhanSo(int tuso, int mauso)
{
    tu = tuso;
    mau = mauso;
}
void PhanSo::ganPS(int t, int m)
{
    tu = t;
    mau = m;
}
void PhanSo::nhapPS()
{
    cout << "\Nhap tu so: ";
    cin >> tu;
    cout << "\nNhap mau so: ";
    cin >> mau;
}
void PhanSo::xuatPS()
{
    cout << tu << "/" << mau << endl;
}

PhanSo PhanSo::cong(PhanSo ps2) {
    PhanSo kq;
    kq.tu = tu * ps2.mau + mau * ps2.tu;
    kq.mau = mau * ps2.mau;
    return kq;
}
PhanSo PhanSo::tru(PhanSo ps2) {
    PhanSo kq;
    kq.tu = tu * ps2.mau - mau * ps2.tu;
    kq.mau = mau * ps2.mau;
    return kq;
}
PhanSo PhanSo::nhan(PhanSo ps2) {
    PhanSo kq;
    kq.tu = tu * ps2.tu;
    kq.mau = mau * ps2.mau;
    return kq;
}
PhanSo PhanSo::chia(PhanSo ps2) {
    PhanSo kq;
    kq.tu = tu * ps2.mau;
    kq.mau = mau * ps2.tu;
    return kq;
}
PhanSo::~PhanSo(){}