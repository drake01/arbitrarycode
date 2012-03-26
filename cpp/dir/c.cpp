#include<iostream>
#include<conio.h>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int r,c,i,j,q,x,y;
    char a[1000][1000],b[1000][1000];
    cin>>r>>c;
    for (i =0; i<r; i++)
    cin>>a[i];
    for (i =0; i<r; i++)
       { for (j =0; j<c; j++)
     b[i][j]=0;
       } 
       cin>>q;
       
       while(q--)
      {          int sol=0,flag=0;
                 cin>>x>>y;
       while(x>=0&&x<r&&y>=0&&y<c)//3
      {         if(b[x][y]==1)
                { //cout<<"printy\n";
                flag=1; break; 
                }//ifover
                else
                 { //cout<<x<<y<<"hell";
                  switch(a[x][y])
                  { 
                   case 'D': b[x][y]=1;x++; sol++;  break; 
                   case 'U': b[x][y]=1;x--; sol++;  break; 
                   case 'L':  b[x][y]=1;y--; sol++; break; 
                   case 'R': b[x][y]=1;y++; sol++;  break; 
                   }//switchover 
                  }//elseover
      }//whileover3
                
                            if(flag==1) cout<<"Bazinga\n"<<sol<<endl;
                            else
                            cout<<"Fallout "<<sol<<endl;
          }
                 
           
       
getch();
 return  0;
        }
