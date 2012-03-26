#include<stdio.h>
int main()
{ 	int i;
	while(1)
	{ 
		int t;
		scanf("%d",&t);
		if(t==-1)
		break;
		long d=0;
		int b1,b,a;
		scanf("%d %d\n",&a,&b);
		b1=b;
		d=a*b;
		for(i=1;i<t;i++)
		{
			scanf("%d %d\n",&a,&b);
			d+=a*(b-b1);
			b1=b;
		}
		printf("%ld miles\n",d);
	}
return 0;
}
