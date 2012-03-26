#include<iostream>
#include<vector>
using namespace std;
int main()
{	int a,b;
    while(1)
	{
		cin>>a>>b;
		if((a==1)||(b==1))
		cout<<a<<"+"<<b<<"="<<a+b<<"\n";
		else if(a==-1&&b==-1)
		break;
		else
		cout<<a<<"+"<<b<<"!="<<a+b<<"\n";
	} 
return 0;
}
