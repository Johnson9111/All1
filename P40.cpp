#include<iostream>
class BOOK
{
int y, p; //y=year p=price
public:
void get(int y1, int p1)
{
y=y1; p=p1; 
}
void show()
{
 cout<<"year is="<<y<<endl;
 cout<<" price is ="<<p;
 }
 };
main()
{
int y1, p1,i; BOOK obj[5];
for(i=0;i<=4;i++)
{
cout<<"enter year and price=";
cin>>y1>>p1;
obj[i].get(y1,p1);
}
for(i=0;i<=4;i++)
{
obj[i].show();
}
}
