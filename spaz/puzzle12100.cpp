#include<iostream>
using namespace std;
int main()
{

int a[100];

for(int j=0;j<100;j++)
{
a[j]=0;
//cout<<a[j]<<" ";
}

for(int i=0;i<100;i++)
{ int m=i;
	for(int k=0;k*m<100;k++)
	{  
		if(a[k*m])
		a[k*m]=0;
		else 
		a[k*m]=1;
	} 
}

for(int l=0;l<100;l++)
{
	if(a[l])
	cout<<l<<" "; 
}
cout<<"\n";
return 0;
}
