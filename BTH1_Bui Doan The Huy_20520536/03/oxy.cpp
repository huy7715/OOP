#include "oxy.h"
#include <iostream>

void Diem::nhap() {
	cout << "\nNhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}
void Diem::xuat() {
	cout << "(" << x << "," << y << ")";
}
double Diem::khoangcach(Diem b)
{
	return sqrt(abs((pow(this->x, 2) - pow(b.x, 2)) + (pow(this->y, 2) - pow(b.y, 2))));
}