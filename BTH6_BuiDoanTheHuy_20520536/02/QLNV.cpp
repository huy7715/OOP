#include "QLNV.h"

istream& operator>>(istream& is, QLNV& a)
{
	cout << "\nNhap vao so luong nhan vien: ";
	is >> a.n;
	for (int i = 0; i < a.n; i++)
	{
		int loai;
		cout << "\nNhap vao loai nhan vien(1.Nhan vien van phong,2.Nhan vien nghien cuu,3.Giang vien): ";
		is >> loai;
		switch(loai)
		{
		case 1:a.ds[i] = new NVVP;
			break;
		case 2:a.ds[i] = new NCV;
			break;
		case 3:a.ds[i] = new GV;
			break;
		}
		a.ds[i]->Nhap();
	}
	return is;
}
ostream& operator<<(ostream& os, QLNV a)
{
	cout << "\nDanh sach cac nhan vien du chuan lao dong tien tien: ";
	for (int i = 0; i < a.n; i++)
	{
		if (a.ds[i]->ktldtt() == true)
		{
			a.ds[i]->Xuat();
		}
	}
	return os;
}