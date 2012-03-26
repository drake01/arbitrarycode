#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{   int i,r,c,y,z,j;
    cin>>r>>c;
//    vector<string> s;
    char s[1000][1000];
    for(i=0;i<r;i++)
        cin>>s[i];
    int res[r][c];
    int q,flag=1;
    cin>>q;
    int sol=0, out=r*c;
    while(q--)
    {
        sol =0,flag=1;
        for(i=0;i<r;i++)
        { for(j=0;j<c;j++)
          res[i][j]=0;
        }
        cin>>y>>z;
        while(y>=0&&y<r&&z>=0&&z<c)
        {
            //if(sol!=r*c)
            if(res[y][z]!=1)
            {
            switch(s[y][z])
            {
                case 'D': res[y][z]=1; y++; sol++; break;
                case 'U': res[y][z]=1; y--; sol++; break;
                case 'L': res[y][z]=1; z--; sol++; break;
                case 'R': res[y][z]=1; z++; sol++; break;
            }
            }
            else {  flag=0; break;
            }
        }
 //      if (sol==r*c)
       if (flag==0)
           // cout<<"Bazinga\n" //"<<sol<<endl;
            cout<<"Bazinga"<<sol<<endl;
            //cout<<"Bazinga\n";
       else
            cout<<"Fallout "<<sol<<"\n";
    }
return 0;
}
