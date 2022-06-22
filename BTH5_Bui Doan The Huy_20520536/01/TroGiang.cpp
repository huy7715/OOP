#include "TroGiang.h"
void TroGiang::Nhap()
{
	NhanSu::Nhap();
	cout << "\nNhap vao so mon tro day: ";
	cin >> smtg;
}
double TroGiang::TinhLuong()
{
	return (smtg * 0.3) * 18000;
}
void TroGiang::Xuat()
{
	NhanSu::Xuat();
	cout << "\nLuong: " << luong;
}