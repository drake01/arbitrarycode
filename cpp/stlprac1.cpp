#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int data1[] = { 1,2,5,6,8,9,10 };
    int data2[] = { 0,2,3,4,7,8,10 };
    vector<int> v1(data1+sizeof(data1)/sizeof(data1[0]));
    vector<int> v2(data2+(int) (sizeof(data2)/sizeof(data2[0])));

    vector<int> tmp(max(v1.size(), v2.size()));

    vector<int> res= vector<int> (tmp.begin(), set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),tmp.begin()));

    for(vector<int>::iterator i=res.begin(); i<res.end(); i++)
        cout<<*i;
        return 0;
}

