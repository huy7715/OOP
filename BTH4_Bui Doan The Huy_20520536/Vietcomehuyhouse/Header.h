#pragma once
#include<iostream>
#include <math.h>
using namespace std;
int UCLN(int a, int b)
{
	while (a != b)
		if (a > b) a = a - b;
		else b = b - a;
	return a;
}
class PhanSo {
private:
	int* tuso;
	int* mauso;
	void rutgon()
	{
		if (*tuso * *mauso != 0)
		{
			int t = UCLN(abs(*tuso), abs(*mauso));
			*tuso = *tuso / t;
			*mauso = *mauso / t;
		}
	}

public:
	PhanSo() {
		tuso = new int[1];
		mauso = new int[1];
	}
	friend istream& operator>> (istream& is, PhanSo& ps) 
	{
		cout << "nhap vao tu so: " << endl;
		ps.tuso = new int[1];
		is >> *ps.tuso;
		cout << "nhap vao mau so " << endl;
		ps.mauso = new int[1];
		is >> *ps.mauso;
		return is;
	}
	friend ostream& operator<< (ostream& os, PhanSo ps) 
	{
		if (*ps.mauso == 1)
		{
			os << *ps.tuso;
		}
		else os << *ps.tuso << "/" << *ps.mauso;
		return os;
	}
	PhanSo& operator=(const PhanSo& ps) 
	{
		*tuso = *ps.tuso;
		*mauso = *ps.mauso;
		return *this;
	}
	PhanSo operator+(PhanSo A) 
	{
		PhanSo Cong;
		*Cong.tuso = *tuso * *A.mauso + *mauso * *A.tuso;
		*Cong.mauso = *mauso * *A.mauso;
		Cong.rutgon();
		return Cong;
	}
	PhanSo operator-(PhanSo A) 
	{
		PhanSo Hieu;
		*Hieu.tuso = *tuso * *A.mauso - *mauso * *A.tuso;
		*Hieu.mauso = *mauso * *A.mauso;
		Hieu.rutgon();
		return Hieu;
	}
	PhanSo operator*(PhanSo A)
	{
		PhanSo Tich;
		*Tich.tuso = *tuso * *A.tuso;
		*Tich.mauso = *tuso * *A.mauso;
		Tich.rutgon();
		return Tich;
	}
	PhanSo operator/(PhanSo A)
	{
		PhanSo Thuong;
		*Thuong.tuso = *tuso * *A.mauso;
		*Thuong.mauso = *mauso * *A.mauso;
		Thuong.rutgon();
		return Thuong;
	}
	PhanSo operator+=(const PhanSo& A)
	{
		*tuso = *tuso * *A.mauso + *mauso * *A.tuso;
		*mauso = *mauso * *A.mauso;
		return *this;
	}
	PhanSo operator-=(const PhanSo& A)
	{
		*tuso = *tuso * *A.mauso - *mauso * *A.tuso;
		*mauso = *mauso * *A.mauso;
		return *this;
	}
	PhanSo operator*=(const PhanSo& A)
	{
		*tuso = *tuso * *A.tuso;
		*mauso = *tuso * *A.mauso;
		return *this;
	}
	PhanSo operator/=(const PhanSo& A)
	{
		*tuso = *tuso * *A.mauso;
		*mauso = *mauso * *A.mauso;
		return *this;
	}
	bool operator==(PhanSo A) {
		if (*tuso == *A.tuso)
			return true;
		return false;
	}
	bool operator<(PhanSo A) {
		if (*tuso < *A.tuso)
			return true;
		return false;
	}
	bool operator>(PhanSo A) {
		if (*tuso > *A.tuso)
			return true;
		return false;
	}
	bool operator<=(PhanSo A) {
		if (*tuso > *A.tuso)
			return false;
		return true;
	}
	bool operator>=(PhanSo A) {
		if (*tuso < *A.tuso)
			return false;
		return true;
	}
	bool operator!=(PhanSo A) {
		if (*tuso != *A.tuso)
			return true;
		return false;
	}
	PhanSo operator++(int x)
	{
		PhanSo result(*this);
		*tuso = *tuso + *mauso;
		return result;
	}
	PhanSo& operator++()
	{
		*tuso = *tuso + *mauso;
		return *this;
	}
	PhanSo operator--(int x)
	{
		PhanSo result(*this);
		*tuso = *tuso - *mauso;
		return result;
	}
	PhanSo& operator--()
	{
		*tuso = *tuso - *mauso;
		return *this;
	}
	~PhanSo()
	{
		if (tuso == NULL && mauso == NULL)
		{
			delete[]tuso;
			delete[]mauso;
		}
	}
};