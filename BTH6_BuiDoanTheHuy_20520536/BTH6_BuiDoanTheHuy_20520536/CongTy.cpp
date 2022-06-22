#include "CongTy.h"
void CongTy::Nhap()
{
	cout << "\nNhap so luong can bo: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "\Nhap vao loai can bo (1.Can bo hop dong, 2.Can bo Nha nuoc): ";
		cin >> loai;
		switch (loai)
		{
		case 1:ds[i] = new CBHD;
			break;
		case 2:ds[i] = new CBNN;
			break;
		}
		ds[i]->Nhap();
	}
}
void CongTy::TinhLuong()
{
	for (int i = 0; i < n; i++)
	{
		ds[i]->TinhLuong();
	}
}
float CongTy::TongLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + ds[i]->TinhLuong();
	}
	return s;
}
void CongTy::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}