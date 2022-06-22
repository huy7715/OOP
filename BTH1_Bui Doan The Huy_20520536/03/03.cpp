#include "oxy.h"
#include <iostream>
using namespace std;
int main()
{
	Diem* p;
	int n;
	cout << endl << "Nhap vao so luong diem can nhap:";
	cin >> n;
	p = new Diem[n];
	for (int i = 0; i < n; i++)
	{
		cout << endl << endl << "Nhap vao diem thu " << i + 1 << ":";
		p[i].nhap();
	}
	cout << endl << "Cac diem vua nhap la:";
	for (int i = 0; i < n; i++)
	{
		cout << endl << "Diem thu " << i + 1 << ":";
		p[i].xuat();
	}
	for (int i = 0; i < n - 1; i++)
	{
		cout << endl << "Khoang cach tu diem " << i + 1 << " den diem " << i + 2 << " la:" << p[i].khoangcach(p[i + 1]);
	}
	cout << endl;


	return 0;
}