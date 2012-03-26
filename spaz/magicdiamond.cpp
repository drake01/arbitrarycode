#include <vector>
#include <list>
#include <map>
#include <set>
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

class MagicDiamonds {
public:
	long long minimalTransfer(long long);
};

long long MagicDiamonds::minimalTransfer(long long x) {
long long n;
if ( x%2 == 0)
return 1;
n = 3;
while (n*n <=x)
{ if (x%n == 0)
return 1;
n += 2;
}
return 2;

}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
