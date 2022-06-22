#include "CongTy.h"
int main()
{
	CongTy a;
	a.Nhap();
	a.TinhLuong();
	cout << "\nTong luong ma cong ty phai tra: ";
	cout << a.TongLuong();
	a.Xuat();
	return 0;
}