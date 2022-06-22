#include "NhanSu.h"
void NhanSu::Nhap()
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap ngay sinh: ";
	getline(cin, hoten);
	cout << "\nNhap ma so: ";
	cin >> maso;
	cin.ignore();
}
void NhanSu::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nNgay sinh: " << ngaysinh;
	cout << "\nMa so: " << maso;
}
double NhanSu::TinhLuong()
{
	return 0;
}
