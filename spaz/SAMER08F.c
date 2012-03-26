#include<stdio.h>
int main()
{	int a;
	scanf("%d",&a);	
    while(a)
	{
		printf("%d\n",a*(a+1)*(2*a+1)/6);
		scanf("%d",&a);	
	} 
return 0;
}
