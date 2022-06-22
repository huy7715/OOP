#pragma once
#include"NhanSu.h"
#include"CV.h"
#include"NCV.h"
#include"TroGiang.h"
#include"GiangVien.h"
class DaiHoc
{
protected:
	int n;
	NhanSu* ds[1000];
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	double TongLuong();

};