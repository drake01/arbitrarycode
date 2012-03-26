#include<iostream>
using namespace std;
#include<cstring>
#include<string>
int main()
{
int r,c;
cin>>r>>c;
char ch[r][c];
for(int i=0;i<r;i++)
cin>>ch[i];
int q;
cin>>q;
int a,b;
int result=0,f=0;
while(q--)
{
result=0;
f=0;
cin>>a>>b;
while(a>=0&&a<r&&b>=0&&b<c)
{
if(result<=(r*c))
{
if(ch[a][b]=='L')
{
b--;
result++;
}
else if(ch[a][b]=='R')
{
b++;
result++;
}
else if(ch[a][b]=='U')
{
a--;
result++;
}
else if(ch[a][b]=='D')
{
a++;
result++;
}
}
else
{
break;
}
}
if(result>(r*c))
cout<<"Loop\n";
else
cout<<"Out of Grid "<<result<<endl;
}
cin>>r;
return 0;
}
