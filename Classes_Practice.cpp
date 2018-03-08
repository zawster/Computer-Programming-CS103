#include<iostream>
#include<string>
using namespace std;
class Time{
	private:
		int hr,min,sec;
	public:
		void get_time(){
			cout<<"Enter hours,minuts and seconds"<<endl;
			cin>>hr>>min>>sec;
		}
		void show_time(){
			cout<<hr<<":"<<min<<":"<<sec<<endl; }
		void set_time(int h,int m,int s){
			hr=h;	min=m;	sec=s;}
		void set_hr(int h){
			hr=h;}
		void set_min(int m){
			min=m;}
		void set_sec(int s){
			sec=s;}
		void show_hr_min_sec(){
			cout<<hr<<":"<<min<<":"<<sec<<endl;}
		int get_hr(){
			return hr;
		}
		int get_min(){
			return min;
		}
		int get_sec(){
			return sec;
		}
	Time addtime(Time t3,Time t)
		{
			t3.hr=hr + t.hr;
			t3.min=min+t.min;
			t3.sec=sec+t.sec;
			return t3;
		}
	void show_time1(){
			cout<<hr<<":"<<min<<":"<<sec<<endl; }	
};

int main(){
	Time t1,t2,t3;
//	t1.get_time();
//	t1.show_time();
	t1.set_time(11,25,34);
//	t1.show_time();
//	t1.set_hr(12);		t1.set_min(34);		t1.set_sec(55);
//	t1.show_hr_min_sec();
//	t2.set_time(11,25,34);
	//////////////////////////////////////////
//	t1.get_time();
	t2.set_time(11,30,30);
	t3=t1.addtime(t3,t2);
	t3.show_time1();
	return 0;
}
