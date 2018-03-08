#include<iostream>
using namespace std;
/*int if_test()
{
	int x=2;
	if (x<25){
	cout << "x is less than 25" <<endl;
	}
	else{ cout<<"not"<< endl;
	}
	int v= -1;
	
	
	
	if (v)
		cout << "v is True!" << endl;
	else
		cout <<" v is False!" << endl;
		
		
	cout << " checking and:" << (true && true) <<endl;
	cout << "Checking or:"<<(true ||false) <<endl;
	cout <<"checking not:"<< (!true) << endl;
	
	
	
	return 0;
}*/
void while_test(){
	int i=0;
	while (i<5){
		cout <<i<<endl;
	i++;
	}
}
void for_test(){
	int j=4;
	int i;
	for (int i=1 ; i<=10 ; i++){
		cout << j << "x"<< i <<"=" <<i*j << endl;
	}
}
int main ()
{
	int x=2;
//	if_test();
	while_test();
	for_test();
	return 0;
}

