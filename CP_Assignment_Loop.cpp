#include<iostream>
using namespace std;
int a[10],l,u,i,j;
void quick(int a[],int l,int u)
{
   int p,temp;
   if(l<u)
   {
   p=a[l];
   i=l;
   j=u;
    while(i<j)
   {
      while(a[i] <= p && i<j )
	 i++;
      while(a[j]>p && i<=j )
	   j--;
      if(i<=j)
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;}
  }
  temp=a[j];
  a[j]=a[l];
  a[l]=temp;
  for(i=0;i<10;i++);
  quick(a,l,j-1);
  quick(a,j+1,u); 
 }
}
int main()
{
	int a[]={89,23,34,56,12,29,67,45,60,17};
l=0;
u=9;
quick(a,l,u);
cout <<"sorted elements are :";
for(i=0;i<10;i++)
cout << a[i] << " ";
return 0;
}
 

/*struct employee_Struct{
	string f_name,l_name,father_name,factory_name,address,email,depart,blood_group;
	double emp_number , emp_age,phone_number;
	double p_salies[4];
	
};
int main(){
	return 0;
}
/* employee first name, last name, father name, emp_number, blood group, emp_age,
   factory name, department, phone number, email address, home address, 
   salaries of previous four years (array of type string/double with size=4) .*/
