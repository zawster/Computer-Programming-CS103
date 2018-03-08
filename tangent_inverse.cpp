#include<iostream>
#include<cmath>
using namespace std;
void test1(){
		int x;
	double sum=0.0;
	cout<<"enter the values of X:";
	cin>>x;
	for(int n=0;n<13;n++){
		float s=(2*n)+1.0;
		sum +=pow(-1,n+1)*pow(x,s)/s;
	}
	cout<<sum;
}
void test2(){
	int x;
	double sum=0.0;
	cout<<"Enter the value for ln :";
	cin>>x;
	for(int n=0;n<13;n++){
		float s=n+1.0;
	//	sum +=pow(x.0,2);
	}
}
void t(){
	double v=9.0,s=9.0;
	cout<<pow(v,s);
}
int main(){
	test1();
	//test2();
//	t();
	return 0;
}
