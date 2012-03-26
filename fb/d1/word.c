#include<iostream>
int main ()
{
  int t,  ctr, w, h;
  char *word;
    scanf("%d",&t);
  while(t--)
    { scanf("%d %d",&w, &h);
        getline(&word, 1000*sizeof(char));
        printf("%s",word);
}
}
