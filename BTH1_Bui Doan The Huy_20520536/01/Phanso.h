#pragma once
#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;
   
public:
    void ganPS(int, int);
    void nhapPS();
    void xuatPS();
    PhanSo cong(PhanSo);
    PhanSo tru(PhanSo);
    PhanSo nhan(PhanSo);
    PhanSo chia(PhanSo);
};