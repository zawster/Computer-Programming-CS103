#include<iostream>
using namespace std;
void calculator(){int x,y;
	char var;
	cin>>var;
	switch(var){
		case '*':
			cin >> x>>y;
			cout <<x*y;
			break;
		case '+':
			cin >>x >> y;
			cout<<x+y;
			break;
		case '-':
			cin>>x >>y;
			cout<<x-y;
			break;
		case '/':
			cin >> x >> y;
			cout << x / y;
			break;
		case '%':
			cin >> x >> y;
			cout << x%y;
			break;
		case '^':
			cin >> x >> y;
			//cout <<pow ;
			break;
		default:
			cout << "Nothing";
			break;
	}
}
void test(){
	int a;
	cout<<"Enter month number:";
	cin>>a;
	switch(a){
		case 1:
			cout <<"Janwary";
			break;
		case 2:
			cout <<"Februry";
			break;
		case 3:
			cout <<"March";
			break;
		case 4:
			cout <<"April";
			break;
		case 5:
			cout <<"May";
			break;
		case 6:
			cout <<"June";
			break;
		case 7:
			cout <<"July";
			break;
		case 8:
			cout <<"Agust";
			break;
		case 9:
			cout <<"September";
			break;
		case 10:
			cout <<"October";
			break;
		case 11:
			cout <<"November";
			break;
		case 12:
			cout <<"December";
			break;
		default:
			cout << "Invalid entry:";
	}
}
void array(){
	int a[20];
	int y=0;
	int x=a[0];
	for (int i=0;i<20;i++){
		a[i]=i;
		cout<< a[i]<<"/";
		if (a[i]<x){
			y=a[i];
		}}
		cout << y;
}
int main (){
	//calculator ();
	//test();
	array ();
	return 0;
}
