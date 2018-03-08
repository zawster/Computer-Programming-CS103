#include<iostream>
using namespace std;

//////////////////////////////////
void second_function(int &v){
	v=v+10;
	cout<<"-second function changed v to :"<<v<<endl;
	cout<<"address of v:"<<&v<<endl;
}
////////////////////////////////////
void first_function(int v){
	v=v+10;
	cout<<"_first function changed v to :"<<v<<endl;
	cout<<"_address of v:"<< &v << endl;
}
////////////////////////////////////
void runner(){
	int x;
	x=0;
	cout<<"Address of x="<<&x<<endl<<endl;
	cout<<"Step 1:x="<<x<<endl;
//	return ;
	first_function(x);
	cout<<"step 2 :x="<<x<<endl;
//	return ;
	second_function(x);
	cout<<"step 3: x="<<x<<endl;
	return ; 
}
////////////////////////////////////
void test_array(int b[],int size){
	cout<<"inner function..."<<endl;
	cout<<"address of b :"<<b<<endl;
	//for (int j=0;j<10;j++){
	//	b[j]=j;
	//}
	for (int i=0;i<size;i++){
		cout<< b[i] << "|";}
	cout<<endl;
	b[0]=24;
}
/////////////////////////////////
void array_as_args(){
	int a[]={1,2,3,4,5};
	test_array(a,5);
	cout << "address of a :"<<a<<endl;
	cout<< "outer function....."<<endl;
	for (int i=0;i<5;i++){
		cout<<a[i]<<"|";}
	cout << endl;
}
/////////////////////////////////////
int main(){
	int x=10,y=20;
	int b[5];   // does't matter
	int size=10;
	
//	second_function(x);
//	first_function(y);
//	runner();
//	test_array(b,size);
	array_as_args();
	return 0;
}
