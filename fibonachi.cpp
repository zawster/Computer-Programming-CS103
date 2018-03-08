#include <iostream>
#include<cstring>
#include<cmath>
#include <stdlib.h> 
using namespace std;
//////// START OF MARKER FOR fib
long long fib(int n)
{
long long second, next;
long long  first=1,x=0;
second=1;
//cout<<"Enter nubmer of terms for Series: ";
//cin>>n;
for(int i=0; i<n; i++)
   {
	x=first;
	next = first + second;
	first = second;
	second = next;

    }
return x;
}//////////////////////////////////////////
int prime(int n){
	int m=0,i,f=0;
	m=n/2;
	for(i=2;i<=m;i++){
		if(n%i==0){
			cout<<"Not prime";
			f=1;
			break;}
	}
	if(f==0){
		cout<<"This is prime";
	}
	return 0;
}/////////////////////////
int main()
{
int c=19;
//cout<<f;
//cout<<fib(c);
//prime(c);
return 0;
}

