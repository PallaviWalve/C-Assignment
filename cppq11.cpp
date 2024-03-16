/*Write a program that would print the information (name, year of joining, salary, address) of three
employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat*/

#include<iostream>
using namespace std;
class Employee
{
	private:
		char name[50];
		int YOJ,salary;
		char address[50];
	public:
		void get_info()
		{
			cout<<"\nEnter Employee Name Year of joining salary and address:";
			cin>>name>>YOJ>>salary>>address;
		}
		void show_info()
		{
			
			cout<<"\n"<<name<<"\t"<<YOJ<<"\t"<<salary<<"\t"<<address;
		}
};
main()
{
	Employee e1,e2,e3;
	e1.get_info();
	e2.get_info();
	e3.get_info();
	cout<<"\nEmployee Details ";
	e1.show_info();
	e2.show_info();
	e3.show_info();
}
