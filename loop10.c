#include<stdio.h>
int main ()
{
	int n,a,b;
	printf("enter a value : ");
	scanf("%d",&n);
	b=n%10;
	while(n>=10)
	{
	n=n/10;
	}
	a=n;
	printf("first digit : %d last digit : %d",a,b);
	return 0;
	
}