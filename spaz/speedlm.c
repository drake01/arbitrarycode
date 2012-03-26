#include<stdio.h>
int main()
{	int t,a[10],b[10];
	int i=1,d;
	scanf("%d",&t);	
    while(t!=-1)
	{   
		scanf("%d %d\n",&a[0],&b[0]);
			d=a[0]*b[0];
			t=t-2;
		while(t--)
		{   
			scanf("%d %d\n",&a[i],&b[i]);
			d+=a[i]*(b[i]-b[i-1]);
			++i;
		}
		printf("%d miles\n",d);
		i=1;
		scanf("\n%d",&t);
	}
return 0;
}
