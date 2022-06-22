#pragma once
#include"GiangVien.h"
#include"NCV.h"
#include"NhanVien.h"
#include"NVVP.h"
class QLNV
{
protected:
	int n;
	NhanVien* ds[100];
public:
	friend istream& operator>>(istream& is, QLNV& a);
	friend ostream& operator<<(ostream& os, QLNV a);
};