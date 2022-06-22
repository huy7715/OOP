#include "NhanVien.h"
void NhanVien::Nhap()
{
	cin.ignore();
	cout << "\nNhap vao ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap vao ma so: ";
	cin >> maso;
	cin.ignore();
	cout << "\nNhap vao ngay sinh: ";
	getline(cin, ngaysinh);
}
void NhanVien::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nMa so: " << maso;
	cout << "\nNgay sinh: " << ngaysinh;
}