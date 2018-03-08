#include<iostream>
using namespace std;
int sum(int a,int b){
	int s;
	s=a+b;
	return s;
}////////////////////////////
int sub(int a,int b){
	int s;
	s=a-b;
	return s;
}////////////////////////////
int mul(int a,int b){
	int s;
	s=a*b;
	return s;
}////////////////////////////
float div(int a,int b){
	float s;
	s=(a*1.0)/b;
	return s;
}////////////////////////////
float avg(int a,int b){
	float avg;
	avg =(a+b)/2.0;
	return avg;
}////////////////////////////
int main(){
	int x,y,s;
	cin >> x;
	cin >> y;
	cout <<sum(x,y);
//	cout <<sub(x,y);
//	cout <<mul(x,y);
//	cout <<div(x,y);
//	cout<<avg(x,y);
	return 0;
}
