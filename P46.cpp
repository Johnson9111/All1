#include<iostream>
#include<fstream>
using namespace std;
main()
{
	fstream obj("xy1.txt",ios::out);
	
	cout<<obj.tellp()<<endl;
	obj<<"hello";
	cout<<obj.tellp()<<endl;
	obj.seekp(2);
	obj<<"LPU";
	
}
