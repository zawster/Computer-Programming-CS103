#include<iostream>
#include<string.h>
using namespace std;
void string_test(){
	char a[]="Hello";
	cout<< a <<endl;
	
	cout<<"a[0]="<<a[0]<<endl;
	
	cout<<"a[5]="<<a[5]<<endl;
	
	if (a[5]=='\0'){
		cout<<"a[5] is null terminator!"<<endl;
	}
	int counter=0;
	for (int i=0;i<5;i++){
		if (a[i]=='l')
			counter +=1;
	}
	cout<< counter << endl;
	
	string name="Mudasser";								//   strings
	cout << name <<endl;
	cout << name[0]<<endl;
	return;
}


void string_array(){	
	int a[]={1,5};
	cout <<a[0]<<endl;
	
	
	string people[] = {"Lecture" , "student"};
	for (int i=0; i<2;i++){
		cout<< people[i] <<endl;
	}
//	return;
	 cout << "using 2nd array" << endl;
	 char people_chars[2][20]={"Lecture","Student"};
	 for (int i=0; i<2;i++){
	 	cout<<people_chars[i]<<endl;
	 }
	 return ;
}


void string_ops(){
	char s1[10] = "Hello";
	char s2[10] = "World";
	
	strcpy(s2,s1);
	cout << "After strcpy ,s2 is :"<<s2<<endl;
	
	char s3[10]="Universal";
//	return ;
	strcat(s1,s3);
	cout<< "after concat of s3,s1="<< s1<< endl;
	cout<<"after cancat of s3,s3="<<s3<<endl;
	
	return ;
	
	
}
int main (){
//	string_test();
//	string_array();
	string_ops();
	return 0;
}
