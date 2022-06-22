#include "NCV.h"
void NCV::Nhap()
{
	NhanSu::Nhap();
	cout << "\nNhap vao so nam kinh nghiem: ";
	cin >> snkn;
	cout << "\nNhap vao so de an: ";
	cin >> sda;
}
double NCV::TinhLuong()
{
	return (snkn * 2 + sda) * 20000;
}
void NCV::Xuat()
{
	NhanSu::Xuat();
	cout << "\nLuong: " << luong;
}