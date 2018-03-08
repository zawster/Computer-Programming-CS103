#include<iostream>
#include<string.h>
using namespace std;
void fi(){
	int a[2][2],b[2][2],c[2][2];
	int x=2,y=2;
	int m=2,n=2;
	int i,j,k;
	for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			cin >> a[i][j];
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin >> b[i][j];
		}
	}
	if(y==m){
		for (i=0;i<x;i++){
			for(j=0;j<n;j++){
				c[i][j]=0;
				for(k=0;k<m;k++){
					c[i][j] +=a[i][k]*b[k][j];
				}
			}
		}
	}
	for (i = 0; i < x; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << "\t" << c[i][j];
            }
            cout << "\n\n";
        }
	//////////////////////////////////////////////
}


int main(void)
{
   fi();
   return 0;}
