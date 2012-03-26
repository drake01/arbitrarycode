#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <cctype>
 
using namespace std;
 
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) FOR(i,0,n)
#define pb push_back
#define sz size()
#define INF (int)1e9
 
typedef long long LL;
typedef vector<int> VI;
typedef vector<string> VS;
 
const int mn=55, mw=7;
int m,n;
VS inp;
int budget, d[mn], val[256];
 
class MysteriousRestaurant {
public:
  int maxDays(vector <string>, int);
};
 
bool fn(int v){
  int s=0;
  REP(pos,7){
    int days=v/7;
    if(pos<v%7)  days++;
    if(days<=0)  break;
    int mi=INF;
    REP(i,m){
      int curs=0;
      REP(j,days)  curs+=val[ inp[pos+7*j][i] ];
      mi<?=curs;
    }
    s+=mi;
  }
  return s<=budget;
}
 
int MysteriousRestaurant::maxDays(vector <string> prices, int budget1) {
  budget=budget1;
  inp=prices;
  for(char i='0';i<='9';i++)  val[i]=int(i-'0');
  for(char i='A';i<='Z';i++)  val[i]=int(i-'A'+10);
  for(char i='a';i<='z';i++)  val[i]=int(i-'a'+36);
  
  n=inp.sz, m=inp[0].sz;
  int lo=0, hi=n, mid=(lo+hi+1)>>1;
  while(lo<hi){
    if(!fn(mid))  hi=mid-1;
    else  lo=mid;
    mid=(lo+hi+1)>>1;
  }
 
  return mid;
}
 
 
//Powered by [KawigiEdit] 2.0!
