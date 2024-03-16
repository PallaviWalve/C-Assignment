/*Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.*/

#include <iostream>
using namespace std;
class Average{
    public:
    static float calculate(float a,float b,float c)
	{
        return (a+b+c)/3;
    }
};
 main()
 {
    cout<<"Enter three numbers: ";
    float a,b,c;
    cin>>a>>b>>c;
    cout<<"\nThe average is: "<<Average::calculate(a,b,c);
} 