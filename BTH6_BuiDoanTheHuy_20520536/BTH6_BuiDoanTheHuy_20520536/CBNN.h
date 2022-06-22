#pragma once
#include"CanBo.h"
class CBNN :public CanBo
{
protected:
	float luongcb;
	float hsluong;
	float hsphucap;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};