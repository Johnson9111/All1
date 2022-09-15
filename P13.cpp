// sum of two numbers
#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int mul(int a,int b)
{
	int d;
	d=a*b;
	return d;
}
main()
{
	int a,b,s,m;
	cin>>a>>b;
	s=add(a,b);
	m=mul(a,b);
	cout<<"sum is="<<s<<endl;
	cout<<"Product is="<<m;
	
	
}
