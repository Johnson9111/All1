#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
	void get()
{
	cout<<"enter two numbers";
	cin>>a>>b;
}
void sum()
{
	cout<<"sum is="<<a+b<<"\n";
}
friend class B;
};
class B
{
	public:
	void mul(A ob)
{
	cout<<"multiplication is="<<ob.a*ob.b;
	
}
};
main()
{
	class A obj1;
	class B obj2;
	obj1.get();
	obj1.sum();
	obj2.mul(obj1); 
}
