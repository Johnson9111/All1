//pointers
#include<iostream>
using namespace std;
main()
{
	int a=10;
	cout<<a;
	
	int *p;
	p=&a;
	cout<<p<<endl;                 //address of a
	cout<<*p<<endl;               //value of that address
	
	int **p1;
	p1=&p;
	cout<<p1;                    //address of p
}

