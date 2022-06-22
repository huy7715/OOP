#pragma once
#include "CanBo.h"
#include "CBHD.h"
#include "CBNN.h"
class CongTy
{
protected:
	int n;
	CanBo* ds[100];
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	float TongLuong();
};