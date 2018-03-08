#include<iostream>
using namespace std;


int main()
{
	int i,j,k;
	int a[2][2][5];
	for(i = 0; i< 2;i++)
	{
		for(j = 0 ; j< 2;j++)
		{
			cout<<"enter "<<endl;
			for(k = 0 ; k < 5 ; k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	for(i = 0 ; i< 2;i++)
	{
		for(j = 0 ;j < 2;j++)
		{
			for(k = 0 ; k < 5;k++)
			{
cout<<"the array index : " <<"a"<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<" : "<< a[i][j][k]<<endl;
			}
			cout<<endl;
		}
	}
	int temp;
	for(i = 0; i < 2; i++)
	{
		for(j = 0;j<2;j++)
		{
			for(k = 0;k < 5; k++){
	cout<<"after sorting two index with each other  : " << a[i][j][k]<<endl;
							if(a[i][j][k] > a[i][j][k+1])
				{
					temp = a[i][j][k];
					a[i][j][k] = a[i][j][k+1];
					a[i][j][k+1] = temp;
		}
}
	}
	}
	system ("pause");
return 0;}
