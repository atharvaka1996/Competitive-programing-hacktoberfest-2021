//Link To The Problem
//https://www.codechef.com/COOK117B/problems/MATBREAK/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void func();
long long int mod = pow(10, 9) + 7;

long long int powercalculator(long long int x,  unsigned long long int y)  
{  
    long long int res = 1;     
    x = x % mod; 
    if (x == 0) return 0;
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % mod;  
  
        y = y >> 1; 
        x = (x * x) % mod;  
    }  
    return res;  
}  
int main()
{
	int t;
	scanf("%d", &t);
	while(t > 0)
	{
		func();
		t--;
	}
	// your code goes here
	return 0;
}
void func()
{
	long long int n, a, i = 1, sum = 0 ,k ;
	scanf("%lld %lld", &n, &a);
	while(i <= 2 * n - 1)
	{
		k = powercalculator(a, i);
		sum += k % mod;
		a =a * k % mod;
		i += 2;
	}
	sum = sum % mod;
	printf("%lld\n", sum);
}
