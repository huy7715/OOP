#include "CV.h"
void CV::Nhap()
{
	NhanSu::Nhap();
	cout << "\nNhap vao so nam kinh nghiem: ";
	cin >> snkn;
	cout << "\nNhap vao so de an: ";
	cin >> sda;
}
double CV::TinhLuong()
{
	return (snkn * 4 + sda) * 18000;
}
void CV::Xuat()
{
	NhanSu::Xuat();
	cout << "\nLuong: " << luong;
}