#include<iostream>
using namespace std;
class area

{
	long double pi;
	int r;
	public:
	area()
		{
		    pi=3.14;
			r=40;		
		}
	void a()
	{
		cout<<pi*r*r<<endl;
	}
	~area()
	{
		cout<<"destructor called";
	}
};
main()
{
	class area obj;
	obj.a();
	
}
