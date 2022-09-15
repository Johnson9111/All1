#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
main()
{
	
	char s[80];
	ofstream obj("Johnson", ios::app);
	cout<<" Enter the names =";
	get s(s);
	obj<<s;
	cout<<endl;
	obj.close();
	
	
}
