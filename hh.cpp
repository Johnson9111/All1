#include<iostream>
using namespace std;
class volume
{
//	long double pi;
	int l, b, h;
	public:
	volume(int a, int d, int c)
		{
		    l=a;
			b=d;
			h=c;		
		}
	void a()
	{
		cout<<l*b*h;
	}
};
main()
{
	class volume obj(12,13,15);
	obj.a();
}
