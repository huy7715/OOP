#pragma once
#include <iostream>
#include <string>
using namespace std;
class CanBo
{
protected:
	int maso;
	string hoten;
	string ngaysinh;
	float luong;
public:
	CanBo();
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhLuong() = 0;
	~CanBo();
};