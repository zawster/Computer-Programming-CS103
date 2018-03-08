#include<iostream>
using namespace std;
//int variables_test(int p)
//{
//	int x;

	//x=2147483647;
//	cout << "int:" << x << endl;
//	x=2147823648;                  //concept of Overflow
//	cout<<"int:"<< x << endl;
//	long long y;

//	y=2147483647 ; // well work
//	cout <<"long;::" << y << endl;
//	y=9223372036854775807;
//	cout << "upper limit of long:::" << y << endl;
//	y=9223372036854775808;		// can't work
//	cout <<"long:"<< y;

//	float f;
//
//	f=3.40282e+38;
//	cout << "float:::" << f << endl;
//	f=3.40282e+39 ;  // can't work well;;;
//	cout << "float;;;" << f << endl;
//	double g ;

//	g=3.40282e+39;
//	cout << "double;;" << g << endl;
//
//	return 0;
//}
int char_test ()
{
	char A = 'A'; //65 value  ..due to ASCII ...unicode
	cout <<"value of variable  ="<<A<<endl;
	cout <<"conversion to int =" << int(A)<<endl;
	cout <<"Addition of =" << char(A+1)<< endl;
	cout <<"Addition for multiple Characters....::"<<char (A+10)<<"=" << int (A+10)<<endl;
	cout <<"Addition for multiple Characters....::"<<char (A+15) <<"=" <<int (A+15)<<endl;
	cout <<"Addition for multiple Characters....::"<<char (A+20) << "="<<int (A+20)<<endl;

	return 0;
}






int main()
{
	int v; 
	v=2;
	//variables_test(v);
	char_test();
	return 0;
}
