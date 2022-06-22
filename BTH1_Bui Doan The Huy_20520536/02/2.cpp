#include "sophuc.h"

using namespace std;

int main()
{
	sophuc a, b, z;
	a.nhap();
	b.nhap();


	z = a;
	z.cong(b);
	a.xuat(); cout << " + ";
	b.xuat(); cout << " = ";
	z.xuat(); cout << endl;

	z = a;
	z.tru(b);
	a.xuat(); cout << " - ";
	b.xuat(); cout << " = ";
	z.xuat(); cout << endl;

	z = a;
	z.nhan(b);
	a.xuat(); cout << " * ";
	b.xuat(); cout << " = ";
	z.xuat(); cout << endl;

	z = a;
	z.chia(b);
	a.xuat(); cout << " / ";
	b.xuat(); cout << " = ";
	z.xuat(); cout << endl;
	system("pause");
	return 0;
}