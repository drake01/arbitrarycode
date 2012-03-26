#include<iostream>
#include<vector>

using namespace std;

int main()
{	int t;
	long m,n;
	int z=1;
	
	long N=1000000000;

	vector<int> a(N);
    cin>>t;
    while(t--)
	{
		cin>>m>>n;
		long i =m;
		while(i<=n)
	{
		for(long j=2;j<=n/i;j++)
		{
		a[i*j]=1;
		}
		while(a[++i]);
	}
		for(i=m;i<=n;i++)
		{ if(i==1) continue;
        if(!a[i])  cout<<i<<endl;
		}
		cout<<endl;
	}
return 0;
}
