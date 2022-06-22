#pragma once
#include <iostream>
using namespace std;
class MangSoNguyen
{
private:
	int* dulieu;
	int kichthuoc;
public:
	MangSoNguyen();
	friend istream& operator>>(istream& is, MangSoNguyen& a);
	friend ostream& operator<<(ostream& os, const MangSoNguyen& a);
	MangSoNguyen& operator=(const MangSoNguyen& b) 
	{
		for (int i = 0; i < kichthuoc; i++) 
		{
			dulieu[i] = b.dulieu[i];
		}
		return *this;
	}
	~MangSoNguyen();
};