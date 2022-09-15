// friend classes
#include<iostream>
using namespace std;
class test1
{
	int a,b;
	public:
	void get()
{
	cout<<"enter two numbers";
	cin>>a>>b;
}
friend class test2;
};
class test2
{
	public:
		void sum(test1 ob)
{
	cout<<ob.a+ob.b;
	
}
};
main()
{
	class test1 obj1;
	class test2 obj2;
	obj1.get();
	obj2.sum(obj1); 
}
