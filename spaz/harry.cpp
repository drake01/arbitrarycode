#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
using namespace std;
int main()
{
int t,a,b,c;
scanf("%d", &t);
string x;
while(t--)
{	
	getline(x,cin);
	int sz=x.size();
	int iseven=sz%2==0?1:0;
	if(iseven)
	{
		for(int i=0;i<sz/2;i++)
		*(x.rbegin()+i)=*(x.begin+i)
	}
	else
	{
		for(int j=0;j<sz/2 +1;j++)
		if(x[j]=='9') 
		x[j]=x[sz-1]=++x[j];
		
		}
}
 
return 0;
}
