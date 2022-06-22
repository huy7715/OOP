#pragma once
#pragma once
#include<iostream>

class sophuc
{
private:
	float thuc;
	float ao;
public:
	sophuc() {};
	sophuc(float t, float a)
	{
		thuc = t;
		ao = a;
	}
	void nhap();
	void xuat();
	void cong(sophuc a);
	void tru(sophuc a);
	void nhan(sophuc a);
	void chia(sophuc a);
	~sophuc() {};
};