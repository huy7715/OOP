#pragma once
#include <iostream>
#include <string>
using namespace std;
class thisinh
{
private:
	string ma;
	string ten;
	string ngaysinh;
	float toan;
	float van;
	float anh;
public:
	thisinh();
	void nhap();
	void xuat();
	float sum();
	void process();
};