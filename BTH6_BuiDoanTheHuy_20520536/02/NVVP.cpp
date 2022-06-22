#include "NVVP.h"
void NVVP::Nhap()
{
	NhanVien::Nhap();
	cout << "\nNhap vao so luong lop tham gia: ";
	cin >> sllop;
	cout << "\nNhap vao so gio lao dong cong ich: ";
	cin >> sogiold;
}
bool NVVP::ktldtt()const
{
	if (sllop >= 1 && sogiold >= 20)
		return true;
	return false;
}
void NVVP::Xuat()
{
	NhanVien::Xuat();
}
