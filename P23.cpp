
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	char name[30];
	public:
    void getdata(int x, char y[])
    {
       rollno=x;
       strcpy(name,y);
	}
	void putdata()
	{
		cout<<"roll no. is= "<<rollno<<endl;
		cout<<"name is= "<<name<<endl;
	}
};
main()
{

class student obj;
obj.getdata(5,"Ram");
obj.putdata();
	
}
