#include<iostream>
using namespace std;
class BOOK
{

	int Year, Price;
	public:
	BOOK(int Y, int P)
		{
			Year=Y;
			Price =P;	
		}
	void show()
	{
		cout<<"Year of Publish ="<<Year<<endl;
		cout<<"Price of the Book ="<<Price<<endl;
		
	}
};
main()
{
	 BOOK obj[5];
   int Y, P,i;
  
for(i=0;i<=4;i++)
{
cout<<"enter year and price=";
cin>>Y>>P;
obj[i].get(Y, P);
}
for(i=0;i<=4;i++)
{
obj[i].show();
}
	
}
