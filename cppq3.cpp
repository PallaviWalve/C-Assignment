/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.*/

#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
	private:
		int a=3,b=4,c=5;
		float n;
		int area,perimeter;
		
	public:
		void getdata()
		{
			perimeter=a+b+c;
			n=((a+b+c)/2.0);
			area=sqrt(n*(n-a)*(n-b)*(n-c));
			
		}
		void showdata()
		{
			cout<<"\nPerimeter of Triangle= "<<perimeter<<"\nArea of Triangle= "<<area;	
		}	
};
main()
{
	Triangle t1;
	t1.getdata();
	t1.showdata();
}
