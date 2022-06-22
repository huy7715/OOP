#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanSu
{
protected:
	string hoten;
	string ngaysinh;
	int maso;
	double luong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong();
};