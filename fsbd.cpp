#include<iostream>
#include "intType.h"
using namespace std;
////////////////////////////////////     2
/*void setNum(int num){
	int number = num;
}
////////////////////      3
void Numlength(){
	int n = 12345;
	int len = 1;
	if (n > 0) {
    for (len = 0; n > 0; len++) {
        n = n / 10;
    	}
	}
 cout<< len;
}////////////////////     4
string int_to_string(){
	int num = 2016;
    ostringstream str1;
    str1 << num;
    string geek = str1.str();
    return geek;
}///////////////////     5
int reverse_number(){
	int x , remainder , reverse;
	int num=12345;
    while (num > 0)
    {
 	remainder = num % 10;
    num=(num/10);
    cout<<remainder ;
	}
	return 0;
}//////////////////   6
int sum_all_digits(){
	int sum,num=12345;
	while(num !=0){
		sum += num%10;
		num=num/10;
	}
	cout<< "Sum of all digits is:"<<sum<<endl;
	return 0;
}////////////////////   7
int avg_all_digits(){
	int num=1234;
	float avg,count,sum=0.0;
	while(num!=0){
		sum +=num%10;
		num = num/10;
		count +=1;
	}
	avg=sum/count;
	cout<<"Average is :"<<avg<<endl;
	return 0;
}////////////////////  8
int mid_digit(){
	int num=12562;
	int m,c=0,a=0,x=0;
	a=num;
	while(num!=0){
		c += 1;
		num =num/10;
	}
	if(c%2==0){
	    cout<<"mid digit is not exist"<<endl;}
    else{
    	m = (c+1)/2;
    	c=0;
	while(a !=0){
		c +=1;
		if(m==c){
			cout<<(a%10)<<endl;
		}
		a =a/10;
		}
	}
	return  0;
}//////////////////    9
int reminder(){
	return 0;
}//////////////////   palindrom  10
bool palindrom(){
	int num=2345432;
	int n, digit, rev = 0;
     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev){
         cout << " The number is a palindrome";
         return true;}
     else
         cout << " The number is not a palindrome";
         return false;
}//////////////////    count evens     11
int count_evens(){
	int num=12863643;
	int rem,rev,count=0;
	
	while(num!=0){
		rem=num%10;
		if(rem%2==0){
			count +=1;
		}
		num=num/10;
	}
	cout<<count<<endl;
	return 0;
}///////////////////    count odd   12
int count_odd(){
	int num=12863643;
	int rem,rev,count=0;
	
	while(num!=0){
		rem=num%10;
		if(rem%2 !=0){
			count +=1;
		}
		num=num/10;
	}
	cout<<count<<endl;
	return 0;
}
////////////////    MAX   Digit     13
int max_digit(){
 	int max = 0;
	int num=29457;	
	while ( num > 0 )
	{
	    int remainder = num % 10;
	    if ( remainder > max )
	        max = remainder;
	
	    num /= 10;
	}
	cout<<"max digit is:"<<max;
	return 0;
}
////////////////    MIN   Digit     13
int min_digit(){
 	int min=9 ;
	int num=29457;	
	while ( num > 0 )
	{
	    int remainder = num % 10;
	    if ( remainder < min )
	        min = remainder;
	
	    num /= 10;
	}
	cout<<"min digit is:"<<min;
	return 0;
}///////////////     sum of even digits   14
int sum_even_digits(){
	int num=12863643;
	int rem,sum=0;
	
	while(num!=0){
		rem=num%10;
		if(rem%2==0){
			sum +=rem;
		}
		num=num/10;
	}
	cout<<"Sum of even digits is:"<<sum<<endl;
	return 0;
}
//////////////////      sum of odd digits   15
int sum_odd_digits(){
	int num=12863643;
	int rem,sum=0;
	
	while(num!=0){
		rem=num%10;
		if(rem%2 !=0){
			sum +=rem;
		}
		num=num/10;
	}
	cout<<"Sum of odd digits is:"<<sum<<endl;
	return 0;
}///////////////////////		append   digit   16
int append_digit(int digit){
	 int int1=123;
    int copy = digit;
    do
    {
        int1 *= 10;
        copy /= 10;
    } while (copy);

    return int1 + digit;
}
/////////////////////   delete digit    17
int delete_digit(){
	int num=1245;
	num=num/10;
	cout<<num;
	return 0;
}////////////////////    To Binary  18
int to_Binary(int num){
	 if (num / 2 != 0) {
        to_Binary(num / 2);
    }
    cout<<num % 2;
    
}////////////////////   TO   HexaDecimal    19
int to_Hexadecimal(){
	 long int decimalNumber=900;
	 long int remainder,x;
    int i=1,j,temp;
    char hexadecimalNumber[100];
    x = decimalNumber;
 
    while(x!=0)
    {
         temp = x % 16;
 
      //To convert integer into character
      if( temp < 10)
           temp =temp + 48;
      else
         temp = temp + 55;
 
      hexadecimalNumber[i++]= temp;
      x = x / 16;
    }
    for(j = i -1 ;j> 0;j--)
      cout<<hexadecimalNumber[j];
    cout<<endl;
	
	return 0;
}////////////////////////  TO ASCII
int to_ascii(){
	int num=1;
	char a=num;
	cout<<a;
}///////////////////////	add
int add(int num1, int num2){
	int sum=num1+num2;
	cout<<sum;
}*/
int main(){
	class functions fn;			 //	OBJECT
	
	fn.set_num(143256787);
	fn.print_num();
//	fn.Numlength();
//	fn.int_to_string();
//	fn.reverse_number();
//	fn.sum_all_digits();
//	fn.avg_all_digits();
	fn.mid_digit();
//	fn.palindrom();
//	fn.count_evens();
//	fn.max_digit();
//	fn.min_digit();
//	fn.sum_even_digits();
//	fn.sum_odd_digits();
//	fn.append_digit(6);
//	fn.delete_digit();
//	fn.to_Binary(2);
//	fn.to_Hexadecimal();
//	fn.to_ascii();
	return 0;
}
