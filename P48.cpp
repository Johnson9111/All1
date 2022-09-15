#include<iostream>
#include <fstream>
using namespace std;
main()
{
	fstream f1("file1.txt", ios::in);
	fstream f2("file2.txt", ios::out);
	
	string ch;
	getline(f1,ch);
	
	f2<<ch;
	f1.close();
	f2.close();
	    
	
}
