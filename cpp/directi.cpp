#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{   int i,r,c,y,z,j;
    cin>>r>>c;
    vector<string> s;
    string str;
    for(i=0;i<r;i++)
    { cin>>str;
      s.push_back(str);
    }
    int res[r][c];
    for(i=0;i<r;i++)
    { for(j=0;j<c;j++)
    {
      res[i][j]=0;
     // cout<<res[i][j]<<" ";
      }
   // cout<<"\n";
    }
    int q,flag=1;
    cin>>q;
    int sol=0, out=r*c;
    for(i=0;i<q;i++)
    {
        cin>>y>>z;
        while(y>=0&&y<r&&z>=0&&z<c)
        {
           // if(sol!=out)
            if(res[y][z]!=1)
            {
                if(s[y][z]=='U')
                {  y-=1; ++sol; res[y][z]=1; }
                else if(s[y][z]=='D')
                {  y+=1; ++sol; res[y][z]=1; }
                else if(s[y][z]=='L')
                {  z-=1; ++sol; res[y][z]=1; }
                else if(s[y][z]=='R')
                {  z+=1; ++sol; res[y][z]=1; }
            }
            else { cout<<"Bazinga\n"; flag=0; break;
            }
        }
       // cout<<sol;
       if (flag!=0)
           cout<<"Fallout "<<sol<<"\n";
       /* else if(sol==out+1)
           cout<<"Fallout "<<sol<<"\n";
        else
           cout<<"Bazinga\n";
           */
    }
return 0;
}
