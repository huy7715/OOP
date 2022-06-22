#pragma once
#include"NhanVien.h"
class GV :public NhanVien
{
protected:
	int sotiet;
	int sodetai;
public:
	void Nhap();
	void Xuat();
	bool ktldtt()const;
};