//default contructor

#include<iostream>
using namespace std;
class volume
{

	int l, b, h;
	public:
	volume()
		{
		    l=12;
			b=13;
			h=11;		
		}
	void a()
	{
		cout<<l*b*h;
	}
};
main()
{
	class volume obj;
	obj.a();
}
