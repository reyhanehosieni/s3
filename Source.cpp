
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,h,m,s;
	cout << "Enter n:";
    cin>>n;
    h = n / 3600;
    n = n % 3600;
    m = n / 60;
    s = n % 60;
    cout<<h<<":"<<m<<":"<<s;
	system("pause");
    return 0;
}