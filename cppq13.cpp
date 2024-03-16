/*Write a program to print the roll number and average marks of 8 students in three subjects (each
out of 100). The marks are entered by the user and the roll numbers are automatically assigned.
*/

#include<iostream>
using namespace std;
main()
{
        int rollno,s1,s2,s3;
        float avg;
        for(int i=1; i<=8; i++)
		{
            cout<<"\nEnter Your Roll Number: ";
        	cin>>rollno;
			cout<<"Enter Your First Subject Mark: ";
            cin>>s1;
        	cout<<"Enter Your Second Subject Mark: ";
            cin>>s2;
            cout<<"Enter Your Third Subject Mark: ";
            cin>>s3;

    		avg=(s1+s2+s3)/3;
			if(s1<=100 && s2<=100 && s3<=100)
			{
            	cout<<"\nAverage Mark of Roll Number "<<rollno<<" is "<<avg;
            }
            else
			{
                cout<<"\nPlease Enter Your Marks Between 0 to 100";
            }
            }
    }


