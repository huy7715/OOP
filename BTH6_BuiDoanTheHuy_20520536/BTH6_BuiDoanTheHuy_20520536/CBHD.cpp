#include "CBHD.h"
void CBHD::Nhap()
{
	CanBo::Nhap();
	cout << "\nNhap tien cong: ";
	cin >> tiencong;
	cout << "\nNhap he so vuot gio: ";
	cin >> hsvuotgio;
	cout << "\nNhap ngay cong: ";
	cin >> ngaycong;
}
float CBHD::TinhLuong()
{
	return luong = tiencong * ngaycong * hsvuotgio;
}
void CBHD::Xuat()
{
	CanBo::Xuat();
	cout << "\nLuong: " << luong;
}