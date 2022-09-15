#include<iostream>
#include<fstream>
using namespace std;
class stock
{
	int price;
	int stockp;
   	char author[30];
   	char publisher[30];
   	char tittle[30];
	public:
	stock(int p, int sp, char pb[30], char a[30], char t[30])
		{
			price=p;
			stockp=sp;
			publisher=pb;
		    author=a;
			tittle=t;
		}
	void a()
	{
		cout<<"Discounted Price"<<price<<endl;
		cout<<"Stock Position"<<stockp<<endl;
		cout<<"Publisher"<<publisher<<endl;
		cout<<"Author"<<author<<endl;
		cout<<"Tittle"<<tittle<<endl;
	}
};
main()
{
	class stock obj(1200,13,Publication,Venkat,WhyMe);
	obj.a();
};
