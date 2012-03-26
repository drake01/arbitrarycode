#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
unsigned int myfact(unsigned int a);
unsigned long gethelp(unsigned long p);
int main()
{
    vector<unsigned long> final;
    int t;
    string str;
    unsigned long num,r1,r2;
    cin>>t;
    for(int j =1; j<= t; j++)
    {
        cin>>num;
        for (int x = 1; x < num/2 + 1; x++)
        { if (num % x == 0 )
           {
            cout<<x<<" hello1\n";
            r1 = gethelp(x);
            r2 = gethelp(num/x);
            final.push_back(r1+r2);
            }

        }
        unsigned long sol = *(min_element(final.begin(), final.end()));
        cout<<"Case #"<<j<<": "<<sol<<" "<< num<<" "<<"\n";
    //" "<< num<<"cout<<"hello world\n"<<myfact(5)<<endl;
    }
}
unsigned long myfact(unsigned long a)
{
    unsigned long myfacto = 1;
    for(unsigned long i = 1; i<=a; i++)
    { myfacto = myfacto * i;
    }
    return myfacto;
}
unsigned long gethelp(unsigned long p)
{    for (unsigned long a = 1; a < 14; a++)
    { for (unsigned long b = 1; b < 14; b++)
        if(myfact(a+b)/(myfact(a)*myfact(a)) ==p)
        { cout<<p<<" "<<a<<" "<<b<<"\n";
            return a+b;
}
    }
}
