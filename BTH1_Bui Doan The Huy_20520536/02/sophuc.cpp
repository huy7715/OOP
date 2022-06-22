#include "sophuc.h"
#include<iostream>
using namespace std;

void sophuc::nhap()
{
	cout << "\nNhap lan luot phan va phan ao cua so phuc: ";
	cin >> thuc;
	cin >> ao;
}
void sophuc::xuat()
{
	cout << "(" << thuc << " ";
	if (ao >= 0)
	{
		cout << "+ " << ao << "i)";
	}
	else cout << ao << "i)";
}
void sophuc::cong(sophuc a)
{
	thuc += a.thuc;
	ao += a.ao;
}
void sophuc::tru(sophuc a)
{
	thuc -= a.thuc;
	ao -= a.ao;
}
void sophuc::nhan(sophuc a)
{
	sophuc z;
	z.thuc = thuc * a.thuc - ao * a.ao;
	z.ao = thuc * a.ao + ao * a.thuc;
	*this = z;
}
void sophuc::chia(sophuc a)
{
	sophuc z;
	z.thuc = (thuc * a.thuc + ao * a.ao) / (a.thuc * a.thuc + a.ao * a.ao);
	z.ao = (ao * a.thuc - thuc * a.ao) / (a.thuc * a.thuc + a.ao * a.ao);
	*this = z;
}