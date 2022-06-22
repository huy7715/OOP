#pragma once
#include "NhanSu.h"
class NCV :public NhanSu
{
protected:
	int snkn;
	int sda;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
};