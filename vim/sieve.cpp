/*
 * =====================================================================================
 *
 *       Filename:  sieve.cpp
 *
 *    Description:  implement sieve of eritesthose
 *
 *        Version:  1.0
 *        Created:  Friday 21 October 2011 02:48:38  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *        Company:
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>
int main()
{

    long y;
    vector<int> a;
    for(int i=1;i<=y;i++)
        a.push_back(i);
    cout<<"Enter the number"<<y;
    for(int x=2;x<y/2;x++)
    {
    for(int i=x;i<y;i=x*i)
    {
    v[i]=0;

    }

    }
for(i=0;i<a.size();i++)
{
if(v[i]) cout<<v[i]<<" ";
}
return 0;
}
