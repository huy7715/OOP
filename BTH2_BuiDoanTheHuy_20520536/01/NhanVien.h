#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
private:
	string hoten;
	int songay;
	string maso;
	string chucdanh;
	float luong;
public:
	NhanVien();
	NhanVien(string ten, int songay,string maso,string chucdanh,float luong);
	NhanVien(string ten, int songay);
	NhanVien(const NhanVien& a);
	void NhapTT();
	void XuatTT();
	string Layhoten()
	{
		return hoten;
	}
	string Laymaso()
	{
		return maso;
	}
	string Laychucdanh()
	{
		return chucdanh;
	}
	int Laysongay()
	{
		return songay;
	}
	float Layluong()
	{
		return luong;
	}
	void Ganhoten(string hoten)
	{
		this->hoten = hoten;
	}
	void Ganmaso(string maso)
	{
		this->maso = maso;
	}
	void Ganchucdanh(string chucdanh)
	{
		this->chucdanh = chucdanh;
	}
	void Gansongay(int songay)
	{
		this->songay = songay;
	}
	void Ganluong(float luong)
	{
		this->luong = luong;
	}
	~NhanVien();
};