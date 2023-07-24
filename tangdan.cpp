#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c,xep;
	cout<<"nhap a="<<"\n";
	cin>>a;
	cout<<"nhap b="<<"\n";
	cin>>b;
	cout<<"nhap c="<<"\n";
	cin>>c;
	if(a>b)
	{
		xep=a;
		a=b;
		b=xep;
	}
	if(a>c)
	{
		xep=a;
		a=c;
		c=xep;
	}
	if(b>c)
	{
		xep=b;
		b=c;
		c=xep;
	}
	cout<<"so thu tu tang dan:  "<<a<<" "<<b<<" "<<c<<"\n";
}