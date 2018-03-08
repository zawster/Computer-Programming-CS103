#include<iostream>
#include<string.h>
using namespace std;
int table(int n,int i){
	if(i>10)
        return 0;
	else{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		i++;
		table(n,i);
	}
}/////////////////////////////////////////
int sum(int i){
	static int res=0;
	if(i>10)
	    return 0;
    else{
	    if(i%2==0){
    		res +=i;
		}
		i++;
		sum(i);
	}
	return res;
}//////////////////////////////////////////
int fact(int i){
	static int res=1;
	if(i==0)
	    return res;
    else {
    	res *=i;
	}
	i--;
	fact(i);
	return res;}
struct point{
	   double x,y;		
	};
struct square{
	point vertax[4];
};

int main(){
	square sq;
	int n=12,i=1;
//	table(n,i);
///	cout<<sum(1);
//	cout<<fact(5);
	for(int i=0;i<4;i++){
	
	sq.vertax[i]=i;
	cout<<sq.vertax[i]<<" ";
}
	return 0;
}

