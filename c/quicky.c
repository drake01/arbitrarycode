#include <stdio.h>
#include <math.h>
static int y,z;
int partition(int *A, int p, int q);
void quicksort(int *A, int p, int q);
int a[100];
int main()
{   int n,i,j;
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    for (i = 0; i< n ; i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);

    printf("ypart =%d, zquick  = %d\n",y,z);
    for (i = 0; i< n ; i++)
    printf("%d ",a[i]);

}

int partition(int *A, int p, int q)
{   //printf("HEllopart");
    y++;
    int t,j;
    int x = A[p];
    int i = p;
    for(j = p+1; j<=q; j++)
    {
        if (A[j]<=x)
        {
            i++;
            t = a[j];
            a[j]=a[i];
            a[i]=t;
        }
}

t = a[p];
a[p]=a[i];
a[i]=t;

//printf("HEllopart");
return i;

}


void quicksort(int *A, int p, int q)
 {   z++;
    //printf("HElloquick");
    int r;
    if(p<q)
    {
    r = partition(A,p,q);
    quicksort(A, p, r-1);
    quicksort(A, r+1, q);
      }
}
