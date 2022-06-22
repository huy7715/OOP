#include "Array.h"
#include <iostream>
using namespace std;
Array::Array()
{
	n = 1;
	A[0] = 0;
}
void Array::Nhap()
{
	cout << "Nhap vao n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
}
void Array::Xuat()
{
	for (int i = 0; i < n; i++) 
	{
		cout << A[i] << " ";
	}
}
bool Array::kiemtratangdan() 
{
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (A[i + 1] >= A[i]) dem++;
	}
	if (dem == n - 1) return true;
	else return false;
}
int Array::solenn()
{
	int min;
	int i = 0;
	while (A[i] % 2 == 0) i++;
	min = A[i];
	for (int j = i + 1; j < n; j++)
		if (A[j] % 2 != 0)
			if (min > A[j]) min = A[j];
	return min;
}
bool Array::check(int n) 
{
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
int Array::sntln()
{
	long max = MIN;
	for (int i = 0; i < n; i++) 
	{
		if (A[i] > max && check(A[i]))
			max = A[i];
	}
	if (max == MIN)
		return 0;
	else
		return max;
}
int Array::timX(int x)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == x)
			count++;
	}
	return count;
}
Array::~Array(){}