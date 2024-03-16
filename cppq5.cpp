/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.*/
#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length, breadth;
    public:
        Rectangle input(int len, int bre){
            length = len;
            breadth = bre;
        }
        int area(){
            return length * breadth;
        }
};
int main(){
    Rectangle r1, r2;
    r1.input(4,5);
    r2.input(5,8);
    cout << "\nArea of r1: " << r1.area();
    cout << "\nArea of r2: " << r2.area();
}