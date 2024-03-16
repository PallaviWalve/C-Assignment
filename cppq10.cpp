/*Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. (just to make you familiar with
initialization lists)*/
#include <iostream>
 
using namespace std;
class Volume
{	
	private:
		int length, breadth, height,ans;
	public:
		Volume(int length,int breadth,int height)
		{
 			ans=(length*breadth*height);
		}
		void printVolume()
		{
			cout<<"\nVolume of a Box :"<<ans;	
		}
};
 
int main()
{
	Volume vm(4,5,2);
	vm.printVolume();
}