#include<iostream>
using namespace std;
class student
{
	static int rollno;
	char name[30];
	static int count;
	public:
	void get()
	{
		count++;
		cout<<"enter roll no and name=";
		cin>>rollno>>name;
	}
	static void show()
	{
		cout<<"\n calling is=";
	
	}
};
int student::count=0;
main()
	{
		class student obj1;
		obj1.get();
		obj1.get();
		obj1.get();
		obj1.student::show();
	
		}	
