#include<iostream>
using namespace std;
int main()
{

int a[101];

for(int j=0;j<100;j++)
{
a[j]=0;
//cout<<a[j]<<" ";
}

for(int i=1;i<=100;i++)
{ //int m=i;
	for(int k=1;i*k<=100;k++)
	{  int m=i*k;
		if(a[m])
		a[m]=0;
		else 
		a[m]=1;
	} 
}

for(int l=0;l<=100;l++)
{
	if(a[l])
	cout<<l<<" "; 
}
cout<<"\n";
return 0;
}
