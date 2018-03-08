#include<iostream>
#include<string.h>
using namespace std;
int min1(){
	int x = 25, y = 50, z = 75;
	int *ptr;
	cout << "Here are the values of x, y, and z:\n";
	cout << x << "  " << y << "  " << z << endl;
	ptr = &x;  // Store the address of x in ptr
	*ptr *= 2; // Multiply value in x by 2
	ptr = &y;  // Store the address of y in ptr
	*ptr *= 2;  // Multiply value in y by 2
	ptr = &z;   // Store the address of z in ptr
	*ptr *= 2;  // Multiply value in z by 2
	cout << "Once again, here are the values of x, y, and z:\n";
	cout << x << "  " << y << "  " << z << endl;

}
int min2()
{
	int x = 25;
	int *ptr;

	ptr = &x;   // Store the address of x in ptr
	cout << "Here is the value in x, printed twice:\n";
	cout << x << "  " << *ptr << endl;
	*ptr = 100;
	cout << "Once again, here is the value in x:\n";
	cout << x << "  " << *ptr << endl;
	return 0;
}	
int main(){
	min1();
	//min2();
	return 0;
}
