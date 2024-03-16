/*Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard*/

#include<iostream>
using namespace std;
class Area
{
	private:
		int length,breadth;
	public:
		Area (int len,int bre)
		{
			cout<<"\nEnter length and breadth of Rectangle :";
			cin>>length>>breadth;
			length=len;
			breadth=bre;	
		}
		int returnArea()
		{
			return(length*breadth);	
		}	
};
main()
{
	Area a(4,5);
	int temp=0;
	a.returnArea();
	temp=a.returnArea();
	cout<<"\nArea="<<temp;

}
