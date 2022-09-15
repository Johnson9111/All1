// Stirng

#include<iostream>
#include<string.h>
using namespace std;
main()
{
	
	string s1("Quick! send for count");
	string s2(" LORD ");
	string s3("dont ");        ///= sybmol does not work with char...
	//erase
	s1.erase(0,7);           //send for count 
	cout<<s1<<endl;
	//replace
	s1.replace(9, 5, s2)   ;  // send for lORD
	cout<<s1<<endl;
	s1.replace(0, 1, "s");     // dont send for LORD
	cout<<s1<<endl;
	s1.insert(0, s3);        //  dont send for lORD 000
	cout<<s1<<endl;
	//append 
	s1.append(3, '0');        //
	cout<<s1<<endl;
	
}
