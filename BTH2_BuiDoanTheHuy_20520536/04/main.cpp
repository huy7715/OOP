#include "Array.h"
using namespace std;
int main()
{
	Array a;
	a.Nhap();
	a.Xuat();
	int x;
	cout << "\nNhap vao gia tri can tim: " << endl;
	cin >> x;
	cout << "Gia tri " << x << " xuat hien " << a.timX(x) << " trong mang" << endl;
	bool c;
	c = a.kiemtratangdan();
	if (c == true)
	{
		cout << "\Mang tang dan"<<endl;
	}
	else cout << "\Mang khong tang dan"<<endl;
	int min;
	min = a.solenn();
	cout << "So le nho nhat trong mang la: " << min << endl;
	cout << "So nguyen to lon nhat trong mang la: " << a.sntln() << endl;
	return 0;
}