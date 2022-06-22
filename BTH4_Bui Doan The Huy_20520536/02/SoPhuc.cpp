#include "SoPhuc.h"
SoPhuc::SoPhuc()
{
	thuc = ao = 0;
}
SoPhuc::SoPhuc(double thuc)
{
	this->thuc = thuc;
}
SoPhuc::SoPhuc(const SoPhuc& A)
{
	thuc = A.thuc;
	ao = A.ao;
}
SoPhuc SoPhuc::operator+(SoPhuc A)
{
	SoPhuc cong;
	cong.thuc = thuc + A.thuc;
	cong.ao = A.ao + ao;
	return cong;
}
SoPhuc SoPhuc::operator-(SoPhuc A)
{
	SoPhuc tru;
	tru.thuc = thuc - A.thuc;
	tru.ao = A.ao - ao;
	return tru;
}
SoPhuc SoPhuc::operator*(SoPhuc A)
{
	SoPhuc nhan;
	nhan.thuc = thuc * A.thuc;
	return nhan;
}
SoPhuc SoPhuc::operator/(SoPhuc A)
{
	SoPhuc chia;
	chia.thuc = thuc + A.thuc;
	return chia;
}
bool SoPhuc::operator==(SoPhuc A)
{
	if (thuc == A.thuc)
		return 1;
	return 0;
}
bool SoPhuc::operator!=(SoPhuc A) {
	if (thuc != A.thuc)
		return 1;
	return 0;
}
istream& operator>> (istream& is, SoPhuc& A) {
	cout << "\nnhap vao phan thuc: " << endl;
	is >> A.thuc;
	cout << "\nnhap vao phan ao: " << endl;
	is >> A.ao;
	return is;
}
ostream& operator<< (ostream& os, SoPhuc A) {
	os << A.thuc << ((A.ao >= 0) ? "+" : "-") << abs(A.ao) << "i";
	return os;
}
