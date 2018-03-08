#include<iostream>
using namespace std;
void sum(int *ptr1,int *ptr2){
	int s;
	s=*ptr1+*ptr2;
	cout <<s;
}///////////////////////////
void sub(int *ptr1,int *ptr2){
	int s;
	s=*ptr1 - *ptr2;
	cout << s;
}////////////////////////////
void mul(int *ptr1,int *ptr2){
	int s;
	s=*ptr1 * *ptr2;
	cout << s;
}////////////////////////////
void div(int *ptr1,int *ptr2){
	float s;
	s=*ptr1 *1.0 / *ptr2;
	cout <<s;}
void avg(int *ptr1,int *ptr2){////////////////////////////
	float s;
	s=(*ptr1+*ptr2)/2.0;
	cout<<s;
}/////////////////////////////
void swap(char *ptr1,char *ptr2){
	char *temp;
	temp=ptr1;
	ptr1=ptr2;
	ptr2=temp;
	cout<<*ptr1<<endl;
	cout<<*ptr2;
}
int main(){
	int x,y;
//	cin >> x >>y;
//	sum(&x,&y);
//	sub(&x,&y);
//	mul(&x,&y);
//	div(&x,&y);
//	avg(&x,&y);
char a,b;
	cin>>a>>b;
	swap(&a,&b);
	return 0;
}
