#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
  int t,  ctr, w, h;
 // vector<string> a;
  string w1;
  while(t--)
  {
     cin>>w;
     cin>>h;
    // cin>>w1;
    // int max_length = strlen(w1);
    // a.push_back(w1);
//     for(vector<string>::iterator i=a.begin(); i != a.end(); ++i)
 //        cout<<i->substr(0,max_length);
//cout<<w1;
    while(ch != ' ' || ch != '\n')
    {

    }


  }
}
/*  char ch;
  int j;
  for (j = 0; j < 8; j++)
    a[j] = 0;
  scanf ("%d", &t);		//hackerup make h2 half
  while (t--)
    {				// fgetc(ch) ;
      for (j = 0; j < 8; j++)
	a[j] = 0;
      scanf ("%d", &t);		//hackerup make h2 half
      ch = 'A';
      ctr++;
      while (ch != '\n')
	{
	  scanf ("%c", &ch);
	  switch (ch)
	    {
	    case 'H':
	      ++a[0];
	      break;
	    case 'A':
	      ++a[1];
	      break;
	    case 'C':
	      ++a[2];
	      break;
	    case 'K':
	      ++a[3];
	      break;
	    case 'E':
	      ++a[4];
	      break;
	    case 'R':
	      ++a[5];
	      break;
	    case 'U':
	      ++a[6];
	      break;
	    case 'P':
	      ++a[7];
	      break;
	    }

	}
      a[2] /= 2;
      int i;
      int result = a[0];
      for (i = 1; i < 8; i++)
	{
	  if (!a[i])
	    {
	      result = 0;
	      break;
	    }
	  else if (a[i] < result)
	    result = a[i];
	}
//printf("%d %d %d %d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
      printf ("Case #%d: %d\n", ctr, result);
    }
  return 0;
}*/
