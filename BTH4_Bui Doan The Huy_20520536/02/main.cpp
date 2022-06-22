#include"SoPhuc.h"
int main()
{
	SoPhuc a, b,cong,tru,nhan,chia;
	cout << "\nnhap vao so phuc a: " << endl;
	cin >> a;
	cout << "so phuc vua nhap: ";
	cout << a;
	cout << "nhap vao so phuc b: " << endl;
	cin >> b;
	cout << "so phuc vua nhap: " << endl;
	cout << b;
	cout << "\ntong cua a va b la: " << endl;
	cong = a + b;
	cout << cong;
	cout << "\nhieu cua hai so phuc a va b la: " << endl;
	tru = a - b;
	cout << tru;
	cout << "\ntich cua hai so phuc la: " << endl;
	nhan = a * b;
	cout << nhan;
	cout << "\nthuong cua hai so phuc la: " << endl;
	chia = a / b;
	cout << a / b;
	if (a == b)
		cout << "\na=b";
	if (a != b)
		cout << "\na!b";
	return 0;
}