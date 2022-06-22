#include "DaiHoc.h"
int main()
{
	DaiHoc a;
	a.Nhap();
	a.TinhLuong();
	cout << "\nTong luong ma truong dai hoc phai tra la: ";
	cout<<a.TongLuong();
	a.Xuat();
	return 0;
}