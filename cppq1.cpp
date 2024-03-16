/*create a class with a string variable name and an integer variable roll_no
assign the value of roll_no as 2 and that of name as John by creating an ojbect of the class*/

#include<iostream>
using namespace std;
class Student
{
	private:
		int roll_no;
		string name;
	public:
		void get_info()
		{
			roll_no=2;
			name="John";	
		} 	
		void show_info()
		{
			cout<<"\nRoll Number= "<<roll_no<<"\nName= "<<name;
		}
};
main()
{
	Student obj;
	obj.get_info();
	obj.show_info();
}