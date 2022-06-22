#include "PhanSo.h"
using namespace std;
int main()
{
	Phanso* a;
	int n, i;
	Phanso tong;
	int m1, m2;
	cout << "Nhap so luong phan so: ";
	cin >> n;
	a = new Phanso[n];
	for (i = 0; i < n; ++i)
	{
		cout << "Nhap phan so thu " << i << endl;
		cin >> a[i];
	}
	cout << "Mang cac phan so vua nhap vao : \n";
	for (i = 0; i < n; ++i)
		cout << a[i] << endl;
	m1 = m2 = 0;
	for (i = 0; i < n; ++i)
	{
		tong = tong + a[i];
		if (a[i] > a[m1])
			m1 = i;
		if (a[i] < a[m2])
			m2 = i;
	}
	cout << "Phan so tong : " << tong << endl;
	cout << "Phan so Lon nhat : " << a[m1] << endl;
	cout << "Phan so Nho nhat : " << a[m2] << endl;
	sapxeptd(a, n);
	cout << "Mang sau khi sap xep tang dan : " << endl;
	for (i = 0; i < n; ++i)
		cout << a[i] << endl;
	sapxepgd(a, n);
	cout << "Mang sau khi sap xep giam dan: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	delete[] a;
	system("pause");
	return 0;
}