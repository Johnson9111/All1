// Types of pointers
// Dangling Pointers

#include<iostream>
using namespace std;
main()
{
	int a=10;
	int*p;
	{
		p=&a;
	}
	cout<<p;
}
