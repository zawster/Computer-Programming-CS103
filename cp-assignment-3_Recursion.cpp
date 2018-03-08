#include<iostream>
using namespace std;
int swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
//	cout<<"//";
	return 0;
}

int quick_sort(int test[],int l,int r){
	int j,i=l+1;
	int tem=test[l];
	if(l+1 <r){
		for(j=l+1;j<r;j++){
			if(test[j]<tem){
				swap(&test[j],&test[i]);
				i++;
			}
		}
		//	cout<<"..";
		swap(&test[i-1],&test[l]);
		quick_sort(test,l,i);
		quick_sort(test,i,r);
	}
	
	return 0;
}
int print_data(int test[],int x){
	for (int i=0;i<x;i++){
		cout<<test[i]<<" ";
	}
}
int main(){
	int test[]={9,3,4,7,5,6,8,2,1,10};
	int x=sizeof(test)/sizeof(*test);
	int a=0;
	int b=x-1;
//	cout<<a<<" "<<b<<" "<<endl;
	quick_sort(test,a,b);
	print_data(test,x);

	return 0;
}
