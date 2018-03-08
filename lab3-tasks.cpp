#include<iostream>
using namespace std;
int task1(int a,char c);
int task2(int x);
int reverse(int n);
int task4(int x,int y,int z);
int task6(int x);
int main(){
	//task1(4,'a');
	//cout<<task2(10);
	//reverse(987654321);
//	task4(12,58,29);
task6(8);
	return 0;
}

int task1(int n, char c)
{
	for(int i=0;i<n;i++){
		cout<<c<<" ";
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cout<< " ";
		}
		for(int k=0;k<2*i-1;k++){
			cout<<c;
		}
		cout<<endl;
	}
}
int task2(int x){
	int y;
	for(int i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
		
		return 1;
		}
	
	
	
	return 0;
}

int reverse(int n){
	int rem,rev;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	cout<<rev;
	
}
int task4(int x,int y,int z){
	if (x>y){
		if(x>z){
			cout << x <<"is maximum";
		}
	}
	else if(y>z)
		 cout<<y<<"is greater";
 else 
 cout<<z<<"is greater";
 return 0;
}
int task6(int n){
	int a=1;int b=1; int x;
	for (int i=0;i<n;i++){
		x=a+b;
		a=b;
		b=x;
		cout<<x<<"	";	
	}
	
}
