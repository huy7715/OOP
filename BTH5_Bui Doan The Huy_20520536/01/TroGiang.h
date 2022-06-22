#pragma once
#include "NhanSu.h"
class TroGiang:public NhanSu
{
protected:
	int smtg;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
};