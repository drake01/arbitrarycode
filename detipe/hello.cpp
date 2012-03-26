#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
//TemplateZone
#define SIZE(X) ((int)(X.size())) //SIZE( 
#define LENGTH(X) ((int)(X.length())) //LENGTH( 
#define MP(X,Y) make_pair(X,Y) //MP( 
typedef long long int64; //int64 
typedef unsigned long long uint64; //uint64 
const double pi=acos(-1.0); //pi 
const double eps=1e-5; //eps 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} //checkmin( 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} //checkmax( 
template<class T> inline T sqr(T x){return x*x;} //sqr 
typedef pair<int,int> ipair; //ipair 
template<class T> inline T lowbit(T n){return (n^(n-1))&n;} //lowbit( 
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));} //countbit( 
//Numeric Functions 
template<class T> inline T gcd(T a,T b) //gcd( 
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);} 
template<class T> inline T lcm(T a,T b) //lcm( 
  {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));} 
template<class T> inline vector<pair<T,int> > factorize(T n) //factorize( 
  {vector<pair<T,int> > R;for (T i=2;n>1;){if (n%i==0){int C=0;for (;n%i==0;C++,n/=i);R.push_back(make_pair(i,C));} 
     i++;if (i>n/i) i=n;}if (n>1) R.push_back(make_pair(n,1));return R;} 
template<class T> inline bool isPrimeNumber(T n) //isPrimeNumber( 
  {if(n<=1)return false;for (T i=2;i*i<=n;i++) if (n%i==0) return false;return true;} 
//Matrix Operations 
const int MaxMatrixSize=40; //MaxMatrixSize 
template<class T> inline void showMatrix(int n,T A[MaxMatrixSize][MaxMatrixSize]) //showMatrix( 
  {for (int i=0;i<n;i++){for (int j=0;j<n;j++)cout<<A[i][j];cout<<endl;}} 
template<class T> inline T checkMod(T n,T m) {return (n%m+m)%m;} //checkMod( 
template<class T> inline void identityMatrix(int n,T A[MaxMatrixSize][MaxMatrixSize]) //identityMatrix( 
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) A[i][j]=(i==j)?1:0;} 
template<class T> inline void addMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) //addMatrix( 
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=A[i][j]+B[i][j];} 
template<class T> inline void subMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) //subMatrix( 
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=A[i][j]-B[i][j];} 
template<class T> inline void mulMatrix(int n,T C[MaxMatrixSize][MaxMatrixSize],T _A[MaxMatrixSize][MaxMatrixSize],T _B[MaxMatrixSize][MaxMatrixSize]) //mulMatrix( 
  { T A[MaxMatrixSize][MaxMatrixSize],B[MaxMatrixSize][MaxMatrixSize]; 
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) A[i][j]=_A[i][j],B[i][j]=_B[i][j],C[i][j]=0; 
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) for (int k=0;k<n;k++) C[i][j]+=A[i][k]*B[k][j];} 
template<class T> inline void addModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) //addModMatrix( 
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=checkMod(A[i][j]+B[i][j],m);} 
template<class T> inline void subModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T A[MaxMatrixSize][MaxMatrixSize],T B[MaxMatrixSize][MaxMatrixSize]) //subModMatrix( 
  {for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=checkMod(A[i][j]-B[i][j],m);} 
template<class T> inline T multiplyMod(T a,T b,T m) {return (T)((((int64)(a)*(int64)(b)%(int64)(m))+(int64)(m))%(int64)(m));} //multiplyMod( 
template<class T> inline void mulModMatrix(int n,T m,T C[MaxMatrixSize][MaxMatrixSize],T _A[MaxMatrixSize][MaxMatrixSize],T _B[MaxMatrixSize][MaxMatrixSize]) //mulModMatrix( 
  { T A[MaxMatrixSize][MaxMatrixSize],B[MaxMatrixSize][MaxMatrixSize]; 
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) A[i][j]=_A[i][j],B[i][j]=_B[i][j],C[i][j]=0; 
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) for (int k=0;k<n;k++) C[i][j]=(C[i][j]+multiplyMod(A[i][k],B[k][j],m))%m;} 
template<class T> inline T powerMod(T p,int e,T m) //powerMod( 
  {if(e==0)return 1%m;else if(e%2==0){T t=powerMod(p,e/2,m);return multiplyMod(t,t,m);}else return multiplyMod(powerMod(p,e-1,m),p,m);} 
//Point&Line 
double dist(double x1,double y1,double x2,double y2){return sqrt(sqr(x1-x2)+sqr(y1-y2));} //dist( 
double distR(double x1,double y1,double x2,double y2){return sqr(x1-x2)+sqr(y1-y2);} //distR( 
template<class T> T cross(T x0,T y0,T x1,T y1,T x2,T y2){return (x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);} //cross( 
int crossOper(double x0,double y0,double x1,double y1,double x2,double y2) //crossOper( 
  {double t=(x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);if (fabs(t)<=eps) return 0;return (t<0)?-1:1;} 
bool isIntersect(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4) //isIntersect( 
  {return crossOper(x1,y1,x2,y2,x3,y3)*crossOper(x1,y1,x2,y2,x4,y4)<0 && crossOper(x3,y3,x4,y4,x1,y1)*crossOper(x3,y3,x4,y4,x2,y2)<0;} 
bool isMiddle(double s,double m,double t){return fabs(s-m)<=eps || fabs(t-m)<=eps || (s<m)!=(t<m);} //isMiddle( 
 //Translator 
bool isUpperCase(char c){return c>='A' && c<='Z';} //isUpperCase( 
bool isLowerCase(char c){return c>='a' && c<='z';} //isLowerCase( 
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';} //isLetter( 
bool isDigit(char c){return c>='0' && c<='9';} //isDigit( 
char toLowerCase(char c){return (isUpperCase(c))?(c+32):c;} //toLowerCase( 
char toUpperCase(char c){return (isLowerCase(c))?(c-32):c;} //toUpperCase( 
template<class T> string toString(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();} //toString( 
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;} //toInt( 
int64 toInt64(string s){int64 r=0;istringstream sin(s);sin>>r;return r;} //toInt64( 
double toDouble(string s){double r=0;istringstream sin(s);sin>>r;return r;} //toDouble( 
template<class T> void stoa(string s,int &n,T A[]){n=0;istringstream sin(s);for(T v;sin>>v;A[n++]=v);} //stoa( 
template<class T> void atos(int n,T A[],string &s){ostringstream sout;for(int i=0;i<n;i++){if(i>0)sout<<' ';sout<<A[i];}s=sout.str();} //atos( 
template<class T> void atov(int n,T A[],vector<T> &vi){vi.clear();for (int i=0;i<n;i++) vi.push_back(A[i]);} //atov( 
template<class T> void vtoa(vector<T> vi,int &n,T A[]){n=vi.size();for (int i=0;i<n;i++)A[i]=vi[i];} //vtoa( 
template<class T> void stov(string s,vector<T> &vi){vi.clear();istringstream sin(s);for(T v;sin>>v;vi.push_bakc(v));} //stov( 
template<class T> void vtos(vector<T> vi,string &s){ostringstream sout;for (int i=0;i<vi.size();i++){if(i>0)sout<<' ';sout<<vi[i];}s=sout.str();} //vtos( 

 //EndTemplate

class CutTheNumbers {
public:
	int maximumSum(vector <string>);
};

int CutTheNumbers::maximumSum(vector <string> board) {
		int maxsum;
	int temp=board.size();
int stringsize=board[0].size();
int board2[temp][stringsize];
for(int i=0;i<temp;i++)
{
for (int a=0;a<=stringsize;a++)
        {  const char p=board[i][a];
            board2[i][a]=(atoi(p)));
        }
}		


		return maxsum;
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!



