#include "thisinh.h"
using namespace std;

thisinh::thisinh() {};
void thisinh::nhap()
{
	cin.ignore();
	cout << "\nNhap ma so: ";
	getline(cin, ma);
	cout << "\nNhap ho ten: ";
	getline(cin, ten);
	cout << "\nNhap ngay thang nam sinh: ";
	getline(cin, ngaysinh);
	cout << "\nNhap diem toan: ";
	cin >> toan;
	cout << "\nNhap diem van: ";
	cin >> van;
	cout << "\nNhap diem anh: ";
	cin >> anh;
}
void thisinh::xuat()
{
	cout << ma << " - " << ten << " - " << ngaysinh << " | " << van << " | " << toan << " | " << anh << endl;
}
float thisinh::sum()
{
	return toan + van + anh;
}
void thisinh::process()
{
	if (thisinh::sum() > 15)
	{
		thisinh::xuat();
	}
}