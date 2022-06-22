#include "DaiHoc.h"
void DaiHoc::Nhap()
{
	cout << "\nNhap vao so luong nhan su: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "\Nhap vao loai nhan su (1.GiangVien, 2.TroGiang, 3.NghienCuuVien, 4.ChuyenVien): ";
		cin >> loai;
		switch (loai)
		{
		case 1:ds[i] = new GiangVien;
			break;
		case 2:ds[i] = new TroGiang;
			break;
		case 3:ds[i] = new NCV;
			break;
		case 4:ds[i] = new CV;
			break;
		}
		ds[i]->Nhap();
	}
}
void DaiHoc::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		ds[i]->Xuat();
	}
}
void DaiHoc::TinhLuong()
{
	for (int i = 0; i < n; i++)
	{
		ds[i]->TinhLuong();
	}
}
double DaiHoc::TongLuong()
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + ds[i]->TinhLuong();
	}
	return s;
}