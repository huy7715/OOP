#pragma once
#include "CanBo.h"
class CBHD :public CanBo
{
protected:
	float tiencong;
	float ngaycong;
	float hsvuotgio;
public:
	void Nhap();
	float TinhLuong();
	void Xuat();
};
