#include "GiangVien.h"
void GiangVien::Nhap()
{
	NhanSu::Nhap();
	cout << "\nNhap vao hoc ham: ";
	getline(cin, hocham);
	cout << "\nNhap vao hoc vi: ";
	getline(cin, hovi);
	cout << "\nNhap vao so nam giang day: ";
	cin >> sngd;
	cout << "\nNhap so mon giang day: ";
	cin >> smgd;
}
double GiangVien::TinhLuong()
{
	return (smgd * sngd * 0.12) * 20000;
}
void GiangVien::Xuat()
{
	NhanSu::Xuat();
	cout << "\nLuong: " << luong;
}