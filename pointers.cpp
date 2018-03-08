#include<iostream>
using namespace std ;
void printer_test(){
	int x=25;
	cout <<"value of x itself:"<<x<<endl;
	cout<<"value of adress of x &x:"<<  &x <<endl;
	int *p;
	p=&x;
	cout <<"value at address pointed to by *p:"<<*p<<endl;
	cout <<"value of p:"<<p<<endl;
	return ;
}
////////////////////////////////////////////////////////////////////////////////////       2nd
void printer_test_array(){
	int nums[10];
	for (int i=0; i<10;i++)
		nums[i]=i;
	int *p;
	p=nums;            //     or   p=&nums[0]
	cout << "values of nums :"<< nums<<endl;
	cout <<"value of &nums[0]:"<<*nums<<endl;
	cout <<"value of nums[0]:"<<nums[0]<<endl;
		cout <<"value of nums[0]:"<<&nums[0]<<endl;

	cout << "value of p:"<<p<<endl;
	cout << "value of *p:"<<*p<<endl;
	//return ;
	cout<<"inc p "<<endl;
	p++;
	cout <<"value of p:"<<p<<endl;
	cout <<"value of *p:"<<*p<<endl;
	
	
	cout <<"entring loop after resetting p____:"<<endl;
	
	p=&nums[0];
	for (int i=0;i<10;i++){
		cout <<"value of p:"<< p <<"  ";
		cout <<"value of *p:"<< *p <<"  ";
		cout <<"inc p"<<endl;
		p++;
	}
	return;	
}
////////////////////////////////////////////////////////////////////////////////////////////  3rd
void null_pointer_test(){
	int x=25;
	
	int *p,*q;
	p=&x;
	q=NULL;
	cout << "value of p="<<p<<endl;
	cout << "value of *p="<<*p<<endl;
	cout << "value of q="<<q<<endl;
	cout << "value of *q="<<*q<<endl;
	
	cout<<"UFF";
	return ;
}
int main(){
//	printer_test();
	printer_test_array();
//	null_pointer_test();
	return 0;
	
}
