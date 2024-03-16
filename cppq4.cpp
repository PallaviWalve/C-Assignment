/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters.*/

#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
	private:
		int a,b,c;
		float n;
		int area,perimeter;
		
	public:
		Triangle are(int a,int b,int c)
		{
			n=((a+b+c)/2.0);
			area=sqrt(n*(n-a)*(n-b)*(n-c));
		}
		Triangle peri(int a,int b,int c)
		{
			perimeter=a+b+c;
		}
		void showdata()
		{
			cout<<"\nPerimeter of Triangle= "<<perimeter<<"\nArea of Triangle= "<<area;	
		}	
};
main()
{	
	Triangle T;
	int side1=3,side2=4,side3=5;
	T.are(side1,side2,side3);
	T.peri(side1,side2,side3);
	T.showdata();
}
