#include<iostream>
#include<string>

using namespace std;
int main()
{
int t;
string a,b,c;
cin>>t;
while(t--)
{
cin>>a>>b;
//string a= a;// string B=b;
string *pt;
pt=&a;
//int sz=strlen(a);
for(int i=0;i<(a.size()+2)/2;i++)
{
	char temp=a[i];
	a[i]=a[a.size()-i];
	a[a.size()-i]=temp;
	}
/*
string ar=strrev(a); string br=strrev(b);
cout<<ar<<br;
*/
cout<<a<<" "<<pt;
}
return 0;
}
