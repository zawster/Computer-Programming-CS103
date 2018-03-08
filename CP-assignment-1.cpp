#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;
int test(){
	char encryp[5][5];
 	char legal[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
 	int len = sizeof(legal);
	string y[50];
	string text;
	string key="college";
	getline(cin,text);
	for(int i=0;i<len;i++){
		text[i]=toupper(text[i]);
		key[i]=toupper(key[i]);
		for (int j=0;j<len;j++){
			if (text[i]==legal[j]){
				y[i]=text[i];
			}
 	 	
	
	 }cout << y[i];
	 }
	 cout << endl<<key;
	 	 for (int i=0; i<25;i++){
	 	 	char x=legal[i];
	 	 	 for (int j=0;j<=i;j++){
	 		 	 encryp[i][j]=x;
	 		 	 cout<<encryp[i][j];
 		 	 }
 		 	 }
	 		 
	return 0;
}

 int main(){
 	test();
	return 0;
 }
