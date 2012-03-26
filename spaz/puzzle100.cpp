#include <iostream>
using namespace std;
int main()
{
int t=100;
int a[100];
for(int z=0;z<100;z++)
a[z]=0;

for(int i=1;i<=100;i++)
{ 
	for(int j=i, m=0;j<100;m++,j=j*m)
	{
		if(a[j]) a[j]=0;
		else a[j]=1;
		//a[j]=0?1:0;
		
for(int z=0;z<100;z++)
{if(a[z])
 cout<<z<<" ";
}	
cout<<endl<<endl;
		}
	}

for(int z=0;z<100;z++)
{if(a[z])
 cout<<z<<" ";
}	
return 0;
}
