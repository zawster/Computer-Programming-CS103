#include<iostream>
using namespace std;
int test(int n[7]){
	int temp;
	static int i=n[0];
	static int j=n[6];
	if (i>j){
		temp=i;
		i=j;
		j=temp;
	}
	else if(i==j){
		i=i+1;
	}
	else 
		 j=j-1;
 	cout<<i<<"	"<<j;
	return 0;
}
int main(){
	int a[7]={9,7,6,4,3,2,5};
	int x;
	x=test(a);
	
	return 0;
}
