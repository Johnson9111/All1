#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	char name[30];
	public:
	void getdata(int x,char y[])
	{
		rollno=x;
		strcpy(name,y);
	}
	void putdata()
	{
		cout<<"rollno= "<<rollno<<endl;
		cout<<"name is= "<<name<<endl;
		
	}
};
main()
{
	class student obj, *p;
	p=&obj;
	
	void (student::*ptr)(int,char[])= &student::getdata;
	
	(obj.*ptr)(10,"aa");
	obj.putdata();
	
	(p->*ptr)(20,"hh");
	p->putdata();
	
}
