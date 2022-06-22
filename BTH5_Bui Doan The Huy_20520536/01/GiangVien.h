#pragma once
#include "NhanSu.h"
class GiangVien:public NhanSu
{
protected:
	string hocham;
	string hovi;
	int sngd;
	int smgd;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
};