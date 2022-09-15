#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"a After Swapping="<<x<<endl;
	cout<<"b After Swapping="<<y<<endl;
}
main()
{
	int a,b;
	cout<<"enter the two numbers=";
	cin>>a>>b;
	cout<<"a before Swapping="<<a<<endl;
	cout<<"b before Swapping="<<b<<endl;
	swap(a,b);
	cout<<"a After Swapping in main="<<a<<endl;
	cout<<"b After Swapping in main="<<b<<endl;
}
