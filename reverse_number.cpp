 #include<iostream>
 using namespace std;
void reverse_number(int num){
	int x , remainder , reverse;
    while (num > 0)
    {
 	remainder = num % 10;
      //  reverse = reverse * 10 + remainder;
    num=(num/10);
    cout<<remainder ;}
}
int main (){
	int e;
//	cin>>e;
	e=987654321;
reverse_number(e);
	return 0;
}


