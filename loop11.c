#include<stdio.h>
int main ()
{
	int n,a,b,sum;
	printf("enter a value : ");
	scanf("%d",&n);
	b=n%10;
	while(n>=10)
	{
	n=n/10;
	}
	a=n;
	sum=a+b;
	printf("first digit : %d last digit : %d\nsum = %d",a,b,sum);
	return 0;
	
}