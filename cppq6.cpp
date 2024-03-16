/*Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.*/
#include<iostream>
using namespace std;
class Area
{
	private:
		int length,breadth;
	public:
		void setDim()
		{
			cout<<"\nEnter length and breadth of Rectangle :";
			cin>>length>>breadth;	
		}
		int getArea()
		{
			return(length*breadth);	
		}	
};
main()
{
	Area a1;
	int temp=0;
	a1.setDim();
	a1.getArea();
	temp=a1.getArea();
	cout<<"\nArea="<<temp;

}
