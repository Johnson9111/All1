// create a class with name : employe, take input of employe no, name and employe salary  
//outside class defination of class and print those values


#include<iostream>
using namespace std;
class employee
{
	int emp_no;
	char name[30];
	int salary;
	public:
		void getdata();
		void putdata();	
};
void emloyee::getdata()
{
	cout<<"Enter the emloyee name, no, and salary";
	cin>>name>>emp_no>>salary;

}
void employee::putdata()
{
	cout<<"\n employee name is"<<name;
	cout<<"\n employee number is"<<emp_no;
	cout<<"\n employee salary is"<<salary;
}
main()
{
	class employee obj;
	obj.getdata;
	obj.putdata;
}
