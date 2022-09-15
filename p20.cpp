//types of pointers
//void pointer
#include<iostream>
using namespace std;
main()
{
	int a=10;
	float b=5.5;
	char c= 'a';
	
	void *p;
	p=&a;
	cout<<"value of a= "<<*(int *)p<<endl;
	p=&b;
	cout<<"value of b= "<<*(float *)p<<endl;
	p=&c;
	cout<<"value of c= "<<*(char *)p<<endl;
	
}
