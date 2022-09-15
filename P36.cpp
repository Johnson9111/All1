#include<iostream>
using namespace std;
class student
{
    char name[30];
    int rollno;
	int maths, science, english;
	public:
	student()
	{
		cin>>rollno>>name;

		
		
		    maths=78;
			science=59;
			english=88;		
		}
	void avg()
	{
		float avg;
		cout<<"Maths ="<< maths<<endl <<"science ="<<science <<endl <<"english ="<<english <<endl;
		cout<<"average is= "<<(maths+science+english)/3<<endl;
	}
};
main()
{
	class student obj;
	obj.avg();
}
