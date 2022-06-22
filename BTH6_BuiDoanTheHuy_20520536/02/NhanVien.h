#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
protected:
	string hoten;
	int maso;
	string ngaysinh;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual bool ktldtt()const = 0;
};