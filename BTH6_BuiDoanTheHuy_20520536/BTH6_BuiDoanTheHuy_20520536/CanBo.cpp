#include "CanBo.h"
CanBo::CanBo()
{
	this->maso = 2051234;
	this->hoten = "Nguyen Van A";
	this->ngaysinh = "16-06-2002";
	this->luong = 50000;
}
void CanBo::Nhap()
{
	cout << "\nNhap vao ma so can bo: ";
	cin >> maso;
	cin.ignore();
	cout << "\nNhap vao ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap vao ngay sinh: ";
	getline(cin, ngaysinh);
	cout << "\nNhap vao luong: ";
	cin >> luong;
}
void CanBo::Xuat()
{
	cout << "\nMa so can bo: " << maso;
	cout << "\nHo ten: " << hoten;
	cout << "\nNgay sinh: " << ngaysinh;
}
CanBo::~CanBo(){}