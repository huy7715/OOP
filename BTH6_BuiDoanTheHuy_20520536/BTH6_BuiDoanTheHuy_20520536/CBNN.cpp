#include"CBNN.h"
void CBNN::Nhap()
{
	CanBo::Nhap();
	cout << "\nNhap luong co ban: ";
	cin >> luongcb;
	cout << "\nNhap he so luong: ";
	cin >> hsluong;
	cout << "\nNhap he so phu cap: ";
	cin >> hsphucap;
}
float CBNN::TinhLuong()
{
	return luong = luongcb * hsluong * hsphucap;
}
void CBNN::Xuat()
{
	CanBo::Xuat();
	cout << "Luong: " << luong;
}