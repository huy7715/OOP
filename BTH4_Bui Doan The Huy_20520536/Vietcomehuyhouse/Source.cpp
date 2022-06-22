#include "Header.h"

int main() {
	PhanSo A, B, C, D, E, F,G,H,I;
	cin >> A;
	cout << A << endl;
	cin >> B;
	cout << B << endl;
	C=A+B;
	cout <<"\nKet qua cua phep cong 2 phan so la: " << C << endl;
	D = A - B;
	cout << "\nKet qua cua phep tru 2 phan so la: " << D << endl;
	E = A * B;
	cout << "\nKet qua cua phep nhan 2 phan so la: " << E << endl;
	F = A / B;
	cout << "\nKet qua cua phep chia 2 phan so la: " << F << endl;
	H = A++;
	cout << "\nKet qua cua phep ++ la: " << H<<endl;
	I = A--;
	cout << "\nKet qua cua phep -- la: " << I << endl;
	if (A == B) {
		cout << "a==b" << endl;
	}
	if (A != B) {
		cout << "a!=b" << endl;
	}
	if (A > B) {
		cout << "a>b" << endl;
	}
	if (A >= B) {
		cout << "a>=b" << endl;
	}
	if (A < B) {
		cout << "a<b" << endl;
	}
	if (A <= B) {
		cout << "a<=b" << endl;
	}
	return 0;
}