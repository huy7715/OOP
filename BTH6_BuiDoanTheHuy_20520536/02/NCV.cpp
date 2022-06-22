#include "NCV.h"
void NCV::Nhap()
{
	NhanVien::Nhap();
	cout << "\nNhap so de tai: ";
	cin >> sodt;
	cout << "\nNhap so bai bao: ";
	cin >> sobaibao;
}
bool NCV::ktldtt()const
{
	if (sodt >= 1 && sobaibao >= 2)
		return true;
	return false;
}
void NCV::Xuat()
{
	NhanVien::Xuat();
}