#include<iostream>
#include <fstream>
using namespace std;
main()
{
	fstream obj("hello.txt",ios::out |ios::in);
	char x[100];
	
	if(!obj.is_open())
	{
		cout<<"error";
		
	}
	cout<<obj.tellg()<<endl;
	obj.seekg(6);
	
	cout<<obj.tellg()<<endl;
	obj.get(x,100);
	cout<<x;
	obj.close();
	
}
