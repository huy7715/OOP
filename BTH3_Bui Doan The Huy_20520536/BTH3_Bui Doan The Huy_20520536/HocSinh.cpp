#include "HocSinh.h"
HocSinh::HocSinh()
{
	hoten = "";
	sdt = "";
	maso = "";
	DTB = 0.0;
}
void HocSinh::Nhap()
{
	bool check = 0;
	do
	{
		cout << "Nhap ho ten: ";
		getline(cin, hoten);
		for (int i = 0; i < hoten.length(); i++) {
			if ((hoten[i] < 'A' && hoten[i] != ' ') || hoten[i] > 'Z' && hoten[i] < 'a' || hoten[i]>'z') {
				check = 1;
			}
			else {
				check = 0;
			}
		}
	} while (check);

	int i;
	do 
	{
		cout << "\nNhap ma so: ";
		getline(cin, maso);
		i = maso.length();
	} while (i != 8);

	do
	{
		cout << "\nNhap so dien thoai: ";
		getline(cin, sdt);
		if (sdt.length() < 9 || sdt.length() > 11)
		{
			cout << "\nNhap lai so dien thoai!!";
		}
	} while (sdt.length() < 9 || sdt.length() > 11);
	
	do
	{
		cout << "\nNhap vao DTB: ";
		cin >> DTB;
		if (DTB < 0.0 || DTB>10.0)
		{
			cout << "\nNhap lai DTB !!! ";
		}
	} while (DTB < 0.0 || DTB>10.0);
}

void HocSinh::Xuat()
{
	cout << "\nHo ten la: " << hoten;
	cout << "\nMa so la: " << maso;
	cout << "\nSo dien thoai la: " << sdt;
	cout << "\nDiem TB la: " << DTB;
}