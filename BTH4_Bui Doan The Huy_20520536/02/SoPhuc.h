#pragma once
#include<iostream>
using namespace std;
class SoPhuc
{
private:
	float thuc;
	float ao;
public:
	SoPhuc();
	SoPhuc(double thuc);
	SoPhuc(const SoPhuc& A);
	SoPhuc operator+(SoPhuc A);
	SoPhuc operator-(SoPhuc A);
	SoPhuc operator*(SoPhuc A);
	SoPhuc operator/(SoPhuc A);
	bool operator==(SoPhuc A);
	bool operator!=(SoPhuc A);
	friend istream& operator >>(istream& is, SoPhuc& A);
	friend ostream& operator << (ostream& os, SoPhuc A);
};