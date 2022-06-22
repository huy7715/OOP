#include "MangSoNguyen.h"
MangSoNguyen::MangSoNguyen()
{
	dulieu = NULL;
	kichthuoc = 0;
}
istream& operator>>(istream& is, MangSoNguyen& a)
{
	cout << "\nNhap vao so luong phan tu: ";
	is >> a.kichthuoc;
	a.dulieu = new int[a.kichthuoc];
	for (int i = 0; i < a.kichthuoc; i++)
	{
		is >> a.dulieu[i];
	}
	return is;
}
ostream& operator<<(ostream& os, const MangSoNguyen& a) {
	for (int i = 0; i < a.kichthuoc; i++) {
		os << a.dulieu[i]<<" ";
	}
	return os;
}
MangSoNguyen::~MangSoNguyen()
{
	delete[] dulieu;
}