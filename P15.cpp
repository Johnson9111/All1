#include<iostream>
using namespace std;
main()
{
	int a=10;
	cout<<a<<endl;
	
	int &y=a;
	cout<<y<<endl;
	
	y=20;
	cout<<a<<endl;
 } 
