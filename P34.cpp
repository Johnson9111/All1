//parametre constructor 

#include<iostream>
using namespace std;
class volume
{

	int l, b, h;
	public:
	volume(int l, int b, int h)
		{
			this->l=l;
			this->b=b;
			this->h=h;		
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
