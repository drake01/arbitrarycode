#include<iostream>
#include<vector>

using namespace std;

int main()
{	int t;
	long m,n;
	int z=1;
	long i=2;
	long N=1000000000;
	vector<int> a (N);
	
	while(i<N)
	{
	for(long j=2;j<=N/i;j++)
	{
		a[i*j]=1;
	}
	while(a[++i]);
	}
//    for(int k=2;k<N;k++)
 //      if(!a[k]) cout<<k<<" ";
	//	     cin>>t;
    //while(t--)
	{
		
		for(i=2;i<N;i++)
		{ //if(i==1) continue;
        if(!a[i])  cout<<i<<" ";
		}
		cout<<endl;
	}

return 0;
}
