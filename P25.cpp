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

class student obj[5];
int rn;
char n[30];
int i;
for(i=1;i<=5;i++)
   {
    cout<<"enter the name and roll no = ";
    cin>>rn>>n;
    obj[i].getdata(rn,n);
   }
   cout<<endl<<endl;
   for(i=1;i<=10;i++)
   {
   
     obj[i].putdata();
   }
}
