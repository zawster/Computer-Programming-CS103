#include<iostream>
#include<string>
using namespace std;
struct Date{
	int x,y,z;
};
struct read_data{
	string empoly;
	int  id;
	double salery;
 	Date date_of_joining;
}; 
int main(){
	read_data red[3];
	Date dt;
	for(int i=0 ; i<3;i++){
		cout<<"Enter employ number:"<<i<<":";
		cin >> red[i].empoly;
		cout<<"Enter employ id:";
		cin >> red[i].id;
		cout<<"Enter employ salery:";
		cin >> red[i].salery;
		cin >> red[i].date_of_joining.x >> red[i].date_of_joining.y>>red[i].date_of_joining.z;
	}
		for(int i=0 ; i<3;i++){
		cout << red[i].empoly<<"  "<< red[i].id <<"  "<< red[i].salery<<"	";
		 cout<<red[i].date_of_joining.x<<"/"<<red[i].date_of_joining.y<<"/"<<red[i].date_of_joining.z<<endl;
		// red.Date.date_of_joining;
	}
	return 0;
}
