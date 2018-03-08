#include<iostream>
#include<string>
using namespace std;
void hd(){
	int row;
	int col;
	for (row=0;row<7;row++){
		for (col=0;col<5;col++){
			if ((row==0 || row==3 || row==6 )&& (col>0 && col <4) || col==0 && (row >0 && row <6) || col==4 && (row >3 && row <6))
			   cout << "*";
            else
   			   cout <<" ";
		}
		cout <<endl;
	}
}
int main(){
	hd();
	return 0;
}
