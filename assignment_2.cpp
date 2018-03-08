#include<iostream>
using namespace std;
int sort(){
	int a[2][2][5];
	int i,j,k,temp;
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<5;k++){
			cin>>a[i][j][k];}
		}}
	for(int i=0 ; i<20; i++){
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<5;k++){
			    if(a[i][j][k]>a[i][j][k+1]){
			    	temp=a[i][j][k];
			    	a[i][j][k]=a[i][j][k+1];
			    	a[i][j][k+1]=temp;
				}
				
			
				}
	
}
		}	}
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<5;k++){
			cout<<a[i][j][k]<<"	";}	}}
	}///////////////////////////

int main(){
	sort();
	return 0;
}
