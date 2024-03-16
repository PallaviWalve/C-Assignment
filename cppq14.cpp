/*Write a program to calculate the average height of all the students of a class. The number of students
and their heights are entered by the user.*/
#include<iostream>
using namespace std;
main()
{
	int n,i;
	float height,avg=0;
	cout<<"\nEnter Number of students :";
	cin>>n;
	cout<<"\nEnter Height of "<<n<<" students :";
	for(i=0;i<n;i++)
	{
	cin>>height;
	avg=avg+height/n;
	}
	cout<<"\nAverage Height = "<<avg;
}