#include "GiangVien.h"
void GV::Nhap()
{
	NhanVien::Nhap();
	cout << "\nNhap so de tai: ";
	cin >> sodetai;
	cout << "\nNhap so tiet: ";
	cin >> sotiet;
}
bool GV::ktldtt()const
{
	if (sotiet >= 300 && sodetai >= 5)
		return true;
	return false;
}
void GV::Xuat()
{
	NhanVien::Xuat();
}