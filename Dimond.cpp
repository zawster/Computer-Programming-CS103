#include<iostream>
using namespace std;
void pattren(){
	int i,j,k;
	for(i=0;i<5;i++){
		for (j=i;j<5;j++){
			cout<< " ";
		}
		for (k=1;k<(i*2);k++){
			cout <<"*";
		}
		cout <<endl;
	}/////////////////////////////////////////////////////////////////////
	for (i=4;i>=1;i--){
		for (j=5;j>i;j--){
			cout<<" ";
		}
		for (k=1;k < (i*2);k++){
			cout << "*";
		}
		cout <<endl;
	}
}
int main(){
	pattren();
	return 0;
}
