#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class HocSinh
{
private:
	string hoten;
	string maso;
	string sdt;
	float DTB;
public:
	HocSinh();
	void Nhap();
	void Xuat();
};
