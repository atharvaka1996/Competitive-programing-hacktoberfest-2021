//Link To The Problem
//https://www.codechef.com/DEC18B/problems/MAXEP/

#include <stdio.h>
#include <math.h>
int main()
{
	int n, c, low, high = 0, i, x, p, count = 0, ans;
	scanf("%d", &n);
	scanf("%d", &c);
  low = 1;
  p = n;
  ans = n;
  while(p > 0)
  {
    p = p / 10;
    count++;
  }
  if(count != 1)
  {
	while(n > 0)
  {
    n = n / 10;
    count--;
    while(1)
    {
      high = high + pow(10, count - 1);
      if(high > ans)
        high = ans;
      printf("1 %d\n", high);
      fflush(stdout);
      scanf("%d", &x);
      if(x == 1)
      {
        printf("2\n");
        fflush(stdout);
        break;
      }
      if(x == 0)
        low = high;
    }
  if(high - low > 1)
    high = low;
  else
    break;
  }
  printf("1 %d\n", low);
  fflush(stdout);
  scanf("%d", &x);
  if(x == 1)
  {
  high = low;
  printf("2\n");
  fflush(stdout);
  }
  printf("3 %d\n", high);
  fflush(stdout);
  }
  else
  {
    for(i = 1; i <= n; i++)
    {
      printf("1 %d\n", i);
      fflush(stdout);
      scanf("%d", &x);
      if(x == 1)
      {
        printf("2\n");
        fflush(stdout);
        ans = i;
        break;
      }
    }
    printf("3 %d\n", ans);
    fflush(stdout);
  }
	return 0;
}

