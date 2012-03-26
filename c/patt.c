#include <stdio.h>
#include <math.h>
int main(){
    int ctr=1;
    int i,j,m=13,n=13;
    //scanf("%d %d",&m,&n);
    for (i = 0; i<m/2;i++){
        for (j = 0; j<n;j++){
            //if(/*i!=(m+1)/2 &&*/j!=(n+1)/2 ){
            if(abs(j-n)%(n/2)<i){
                printf("%d ",ctr);
                ctr = !ctr;
            }
            else printf("- ");


         }
        printf("\n");

    }
}
