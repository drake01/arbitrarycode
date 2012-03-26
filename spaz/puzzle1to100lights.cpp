#include <iostream>
using namespace std;
int main()
{ 
int a[101];
for(int k=0;k<101;k++)
a[k]=0;

int t = 100;
for(int i=1;i<=t;i++)
{ int m;
	for(int j=1;j<t/i;j=j*i)
	{ 	
		a[j*i]=1?0:1;
					 
		}
}
for(int k=1;k<101;k++)
{
	//if(a[k])
	 cout<<a[k]<<"\t";
	}
return 0;
}
