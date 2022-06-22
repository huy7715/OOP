#pragma once
#include "NhanVien.h"
class NVVP :public NhanVien
{
protected:
	int sllop;
	int sogiold;
public:
	void Nhap();
	void Xuat();
	bool ktldtt()const;
};