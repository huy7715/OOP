#pragma once
#include <iostream>
using namespace std;
int ucln(int a, int b)
{
	int tam = a;
	while (!(a % tam == 0 && b % tam == 0 && tam > 0))
		tam--;
	return tam;

}
class Phanso
{
	int ts, ms;
public:
	Phanso();
	Phanso(int ts1, int ms1);
	friend istream& operator >> (istream&, Phanso&);
	friend ostream& operator << (ostream&, Phanso&);
	Phanso operator + (Phanso&);
	void rutgon();
	bool operator > (Phanso&);
	bool operator < (Phanso&);
};
Phanso::Phanso()
{
	ts = 0;
	ms = 1;
}
Phanso::Phanso(int ts1, int ms1)
{
	ts = ts1;
	ms = ms1;
}
ostream& operator << (ostream& os, Phanso& r)
{
	os << r.ts << "/" << r.ms;
	return os;
}
istream& operator >> (istream& is, Phanso& r)
{
	cout << "Nhap tu so : ";
	is >> r.ts;
	cout << "Nhap mau so : ";
	is >> r.ms;
	return is;
}
Phanso Phanso::operator+(Phanso& r)
{
	int ts1, ms1;
	ts1 = ts * r.ms + ms * r.ts;
	ms1 = ms * r.ms;
	int uc = ucln(ts1, ms1);
	ts1 = ts1 / uc;
	ms1 = ms1 / uc;
	return Phanso(ts1, ms1);
}

bool Phanso::operator > (Phanso& r)
{
	int ts1, ms1;
	ts1 = ts * r.ms - ms * r.ts;
	ms1 = ms * r.ms;
	return (ts1 * ms1 > 0);
}
bool Phanso::operator < (Phanso& r)
{
	if (r > *this)
		return true;
	return false;
}
void Phanso::rutgon()
{
	int uc = ucln(ts, ms);
	ts = ts / uc;
	ms = ms / uc;
}
void sapxeptd(Phanso a[], int n)
{
	Phanso tam;
	int i, j;
	for (i = 0; i < n; ++i)
		for (j = i + 1; j < n; ++j)
			if (a[j] < a[i])
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
}
void sapxepgd(Phanso a[], int n)
{
	Phanso temp;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}
