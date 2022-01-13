#include<stdio.h>
int main()
{
	long long x;
	int count=0;
	printf("enter a number : ");
	scanf("%lld",&x);
	while(x!=0)
	{
		x/=10;
		++count;
	}
	printf("%lld",count);
	return 0;
}