// Friend funcion
// Sum of two numbers
#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
		friend void add(A ob);
};
void add(A ob)
{
	ob.a=10;
	ob.b=20;
	cout<<"Sum is="<<ob.a+ob.b;
};
main()
{
	class A obj;
	add(obj);

}
