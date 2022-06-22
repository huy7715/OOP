#include "thisinh.h"
#include <iostream>
using namespace std;

int main()
{
    int n;
    thisinh a[100];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i].nhap();
    }
    cout << "Diem tren 15: \n";
    for (int i = 1; i <= n; i++)
    {
        a[i].process();
    }
    return 0;
}


