#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream obj("xy1.txt",ios::out);
	if(!obj.is_open())
	{
		cout<<"error";
	
	}
	
	cout<<obj.tellp()<<endl;
	obj<<"hello";
	cout<<obj.tellp()<<endl;
	obj.seekp(2);
	obj<<"LPU";
	
}
