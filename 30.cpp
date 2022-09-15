#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"hexadecimal is="<<setbase(16)<<n<<endl;
	cout<<"octal is="<<setbase(8)<<n<<endl;
	cout<<"decimal is="<<setbase(10)<<n<<endl;
}
