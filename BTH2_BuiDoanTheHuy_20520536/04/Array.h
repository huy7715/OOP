#pragma once
#include <iostream>
const long MIN = -1000000000;
using namespace std;
class Array
{
private:
	int n;
	int A[100];
public:
	Array();
	void Nhap();
	void Xuat();
	int timX(int x);
	bool kiemtratangdan();
	int solenn();
	int sntln(); 
	bool check(int n);
	~Array();
};

