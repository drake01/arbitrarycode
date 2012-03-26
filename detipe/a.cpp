#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class MarbleDecoration {
public:
	int maxLength(int R, int G, int B) {
		int rg=blah(R,G);
		int gb=blah(G,B);
		int br=blah(B,R);
		int max=rg;
		if(gb>max) max=gb;
		else if (br>max) max=br;
		return max;
		
	}

	int blah(int a, int b)
	{
		if(a<b) return (2*a+1);
		else if (a==b) return (2*a);
		else return (2*b+1);
		
		}

};


