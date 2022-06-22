#pragma once
#include "NhanVien.h"
class NCV :public NhanVien
{
protected:
	int sodt;
	int sobaibao;
public:
	void Nhap();
	void Xuat();
	bool ktldtt()const;
};