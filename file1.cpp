#include<iostream>
#include<string>
using namespace std;
void sum(){
	int a,b,s;
	cin>>a>>b;
	s=a+b;
	cout <<s;
}////////////////////////////
void sub(){
	int a,b,s;
	cin>>a;
	cin>>b;
	s=a-b;
	cout <<s;
}////////////////////////////
void mul(){
	int a,b,s;
	cin>>a;
	cin>>b;
	s=a*b;
	cout <<s;
}////////////////////////////
void div(){
	int a,b;
	float s;
	cin>>a>>b;
	s=(a*1.0)/b;
	cout <<s;
}////////////////////////////
void avg(){
	int a,b;
	float avg;
	cin>>a;
	cin>>b;
	avg=(a+b)/2.0;
}////////////////////////////
int main(){
//	sum();
//	sub();
//	mul();
	div();
//	avg();
return 0;
}
