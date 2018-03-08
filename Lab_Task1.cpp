#include<iostream>
#include<cmath>
using namespace std;
class employee{
		private:
			int emp_num;
			string emp_name;
			int ph_num[4];
			int emp_age;
			float dollars;
		public:
			employee(){
				emp_num=0;
				emp_name="";
				ph_num[4];
				emp_age=0.0;
				dollars=0;
				cout<<"Hello default constructor"<<endl;
			}
			employee(int num,string name,int ph[4],int age,float dol)
			{
				emp_num=num;
				emp_name=name;
				for (int i=0;i<4;i++){
					ph_num[i]=ph[i];
				}
				emp_age=age;
				dollars=dol;
				cout<<"Hello parameter constructor"<<endl;
			}
			~employee(){
			
				cout<<"Hello destructor"<<endl;
			}/////////////////////////////////////
			void set_num(int n){
				emp_num=n;
			}
			void set_name(string nam){
				emp_name=nam;
			}
			void set_ph(int ph[4]){
				for(int i=0;i<4;i++){
				
				ph_num[i]=ph[i];}
			}
			void set_age(int ag){
				emp_age=ag;
			}
			void set_dol(float d){
				dollars=d;
			}////////////////////////////////////////////////
			int get_num(){
				return emp_num;
			}
			string set_name(){
				return emp_name;
			}
			int get_ph(){
				return ph_num[4];
			}
			int get_age(){
				return emp_age;
			}
			float get_dol(){
				return dollars;
			}/////////////////////////////////////////////////////
			void _num(){
				cout<<emp_num<<endl;
			}
			void out_name(){
				cout<<emp_name<<endl;
			}
			void out_ph(){
				for(int i=0;i<4;i++){
				cout<<ph_num[i];}
				cout<<endl;
			}
			void out_age(){
				cout<<emp_age<<endl;
			}
			void out_dol(){
				cout<<dollars<<endl;
			}
		};/////////////////////////////////////////////////////////////////////////////////////////
class string_type{
	private:
		string str1;
		string str2;
	public:
		string_type(){
			str1="";
			str2="";
			cout<<"Hello default constructor"<<endl;
		}
		string_type(string s1,string s2){
			str1=s1;
			str2=s2;
			cout<<"Hello with parameter constructor"<<endl;
		}
		void set_values(string s1,string s2){
			str1=s1;
			str2=s2;
		}//////////////////////////
		void print_values(){
			cout<<str1<<endl;
			cout<<str2<<endl;
		}/////////////////////////
		void max_length(){
			int count1=0;
			int count2=0;
		for(int i=0;i<str1.length();i++){
			count1 +=1;
		}
		for(int j=0;j<str2.length();j++){
				count2 +=1;
		}
		if (count1>count2){
			cout<<"str1 has max lenghth"<<endl;
		}
		else
			cout <<"str2 has max length";}
			};
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class TwoDArray{
	private:
		int matrix[5][5];
	public:
		TwoDArray(){
			cout<<"Hello default constructor"<<endl;
		}
//		TwoDArray(int x){
//			cout<<"Hello with argument constructor"<<endl;
//		}
//		~TwoDArray(){
//			 cout<<"Hello  Destructor"<<endl;
		////////////////////////////
		void initialize(){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cin>>matrix[i][j];
				}
			}
		}////////////////////////////
		void print(){
			 for(int i=0;i<5;i++){
 		        for(int j=0;j<5;j++){
					 cout<<matrix[i][j];
			       }cout<<endl;
			}
		}/////////////////////////////
		void transpose(){
			int temp[5][5];
			for(int i=0;i<5;i++){
				for(int j=0;j<5;j++){
					temp[i][j]=matrix[j][i];
				}
			}
			cout<<"The transpose of the matrix is:"<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<temp[i][j];
				}
				cout<<endl;
			}
		}
};/////////////////////////////////////////////////////////			CALCULUS-2 Home Work
void test(){
	int x,n,fact;
//	long long x=2;
	int sum=0;
	int count=1;
	fact=1;
	cout<<"Enter the value of  x:";
	cin>>x;
	cout<<"Enter the value for n:";
	cin>>n;
	for(int i=1;i<=n;i+2){
		
		fact=fact*n;
		sum +=pow(x,n)/(fact*count);
		count =count *(-1);
	}
//		
	cout<<"The value of sin"<<x<<"is:"<<sum;
}////////////////////////////////////////////////////////////
int main(){
//	class employee emp1;
//	employee(12,"hello",[1,2,3,4],4,10.3)
///////////////////////////////////////////////////////////
    //class TwoDArray array;
    //TwoDArray();
    //array.initialize();
    //array.print();
    //array.transpose();	
	test();
	return 0;
    }

