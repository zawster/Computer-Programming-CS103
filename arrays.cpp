#include<iostream>
#include<math.h>
using namespace std;
/////////////////////////////////////////////////////////          //   Array_Test_1
void array_test()
{                                              
	int a[5];
	a[0]=24;
	cout << "before assignment...<< "<<endl;
	for (int i=0 ; i < 5 ; i++){				//print karwanay k liye
		cout << a[i] << "  ";
		}
	cout <<endl;
//	return ;
   for (int i=0;i<5 ;i++){
		a[i]=i*0;
}
	cout <<"after assignment>>>>"<< endl;
	for (int i=0; i<5;i++){						//print karwanay k liye
		cout << a[i] <<"|";}
	cout << endl;
//	return ;
}
	///////////////////////////////////////////////////////////////			//   Array_test_2
void array_test_2nd(){									
	int a[2][3];
	cout << "before assignment"<< endl ;
	for (int i=0; i<2;i++)
		for (int j=0;j<3; j++){
			cout <<a[i][j]<<"  ";
	 }
	cout << endl;
//	return ;
	int val =0;
	for (int i=0 ; i<2 ;i++)
		for (int j=0 ; j<3;j++){
			a[i][j]=val;
			val +=2;
		}
		
	cout << "after assignment"<<endl;
	for (int i=0; i<2;i++)
		for (int j=0;j<3;j++){
			cout<< a[i][j]<<"  ";
		}
	cout << endl;
	return ;
	}
/////////////////////////////////////////////////////////////			//  struct_test()
void struct_test(){											
	struct student {
		int rollno;
		float marks;
		string name;
	};
	student s1;
	student s2;
	s1.rollno=1;
	s1.name="Ahsan";
	s1.marks=199.89;
	s2.rollno=2;
	s2.name="Ali Hamza";
	s2.marks=250.34;
	cout << "student s1 has rollno is: "<< s1.rollno << " and name is "<< s1.name <<"has "<< s1.marks <<" marks" <<endl;
	cout << "student s1 has name "<< s1.name<<endl;
	cout << "student s2 has name "<< s2.name<<endl;
	cout 	<< "student s1 has "<<s1.marks<<" marks" <<endl;
	cout << "student s2 has "<<s2.marks<<" marks" <<endl;
return ;
}
int main (){
//	array_test();
	array_test_2nd();
//	struct_test();
//	cout << pow(4.0,3);
	return 0;
	
}
