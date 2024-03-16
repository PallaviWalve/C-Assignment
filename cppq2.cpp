/*Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.*/

#include<iostream>
using namespace std;
class Student
{
	private:
		int rollno,phno;
		char s[50];
	public:
		void get()
		{
			cout<<"\nEnter Student Roll Number, Phone Number and address";
			cin>>rollno>>phno>>s;	
		}
		void show()
		{	
			cout<<"\nRoll Number= "<<rollno<<"\nPhone Number= "<<phno<<"\nAddress= "<<s;

		}
};
main()
{
	Student sam,john;
	sam.get();
	john.get();
	sam.show();
	john.show();
}
