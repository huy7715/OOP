#include "NhanVien.h"
#include <iostream>
#include <string>
using namespace std;
NhanVien::NhanVien()
{

}
NhanVien::NhanVien(string hoten, int songay, string maso, string chucdanh, float luong)
{
	hoten = " ";
	maso = " ";
	chucdanh = " ";
	songay = 1;
	luong = 0.0;
}
NhanVien::NhanVien(string hoten, int songay)
{
	string maso = to_string(songay) + hoten;
	if (0 < songay < 365)
	{
		chucdanh = "Nhan Vien";
		luong = 1.0;
	}
	else if (365 < songay < 730)
	{
		chucdanh = "Quan Ly";
		luong = 1.5;
	}
	else if (730 < songay < 1460)
	{
		chucdanh = "Truong Phong";
		luong = 2.25;
	}
	else
	{
		chucdanh = "Truong ban quan ly";
		luong = 4.0;
	}
}
NhanVien::NhanVien(const NhanVien& a)
{
	chucdanh = a.chucdanh;
	songay = a.songay;
	luong = a.luong;
}
void NhanVien::NhapTT()
{
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap ma so: ";
	getline(cin, maso);
	cout << "\nNhap chuc danh: ";
	getline(cin, chucdanh);
	cout << "\nNhap so ngay vao lam: ";
	cin >> songay;
	cout << "\Nhap he so luong: ";
	cin >> luong;
}
void NhanVien::XuatTT()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nMa so: " << maso;
	cout << "\nChuc danh: " << chucdanh;
	cout << "\nSo ngay vao lam: " << songay;
	cout << "\nLuong: " << luong;
}
NhanVien::~NhanVien(){}