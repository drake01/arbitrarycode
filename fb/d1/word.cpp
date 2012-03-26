/*
5
20 6 hacker cup
100 20 hacker cup 2013
10 20 MUST BE ABLE TO HACK
55 25 Can you hack
100 20 Hack your way to the cup
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
//int final(int H,int W, int h, const vector<int> num, int size2);
int final(int H,int W, int h, int tot);
        vector<int> num;
int main ()
{
  int t,  ctr, W, H;
  char word[500];
  string str;
  cin>>t;
  while(t--)
    {   int nw = 0;
        cin>>W>>H;
        getline(cin, str);
        int tot = str.length()-1;
        vector<string> a;
        string::iterator it;
        int index=0,i=0;
        for(it=str.begin(); it<= str.end(); it++)
        {   ++index;
            if(*it == ' ' || it == str.end())
            {
                num.push_back(--index);
                index = 0;

            }
          //  ++i;
        }
        cout<<"W"<<W<<" H"<<H<<" ";
        for(int it1=1;it1< num.size(); it1++)
           cout<<num[it1]<<" ";
        cout<<tot<<endl;

        //calculations

        double p = sqrt(H*H + 4* tot * W * H);
       unsigned h = (( H + p)/( 2* tot));
   //     cout<<"\n"<<h<<"\n";
        int size2=num.size()-1;
//        cout<<"p = "<<p;
        cout<<"h = "<<h<<endl;
        cout<<"###"<<unsigned(final(H,W,h,tot))<<"### \n";
        cout<<"**********************";
       num.clear();
    }
}

//function
        int final(int H,int W, int h, int tot)
{
       // if(H*W/h/h> )



    if (h)
    { int m,k, sum ;
        m=1;
        for(k=1;k<=H/h ; k++)
       {    sum=0;
           while(sum-h< W && m< num.size())
           {  // cout<<"num["<<m<<"]"<<num[m]-1;
              //cout<<W<<" "<<H<<endl;
              cout<<"h"<<h<<"k"<<k<<"m"<<m;
               sum += h*num[m];
               m++;  }
//               cout<<"h"<<h<<"k"<<k<<"m"<<m;
        cout<<"sum "<<sum-h<<"  ";
           // if(it2 == num.end())
         //  cout<<num[it2] -1<<" ";
        }
            if(m >=num.size())
                return h;
            else
//                final(H,W,h-1);

        cout<<endl<<endl;
    } else return 0;
}
//function over
      //  for(int it2=1;it2< num.size(); it2++)
