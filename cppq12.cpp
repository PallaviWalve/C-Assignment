/*Write a program to print the name, salary and date of joining of 10 employees in a company. Use
array of objects.*/
#include<iostream>
using namespace std;
class Employee
{
	private:
		string name;
		int salary,DOJ;
	public:
		void setdata(string n,int s,int d)	
		{
			name=n;
			salary=s;
			DOJ=d;
		}
		void showdata()
		{
			cout<<"\n"<<name<<"\t"<<salary<<"\t"<<DOJ;
		}
};
main()
{
	int size=10;
	int i;
	Employee employee[size];
	for(i=0;i<size;i++)
	{
	string name;
	int salary,DOJ;
	cout<<"\nEnter Employee Name , salary , Date of joining";
	cin>>name>>salary>>DOJ;
	employee[i].setdata(name,salary,DOJ);
	}
	cout<<"\nEmployee Details:";
	for(i=0;i<size;i++)
	{
		employee[i].showdata();
	}	
}