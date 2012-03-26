#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
int t,num,k,w;
scanf("%d", &t);

while(t--) 
{   scanf("%d",&num); 
	
		
	for(int i=num;i<2*num;i++)
    { 
	
	bool prime = true;
    for(int n = 2; n <= i - 1; n++){
      if(i % n == 0){
        prime = false; break;
      }
    }
    if(prime){
      cout << i <<endl;
	  break;
	 }
 }	
	
		
 }
return 0;
}
