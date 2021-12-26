#include<stdio.h>
int main()
{
	int i=1,n,mult;
	printf("enter a number : ");
	scanf("%d",&n);
	while(i<=10)
	{
		mult=n*i;
		printf("%d\n",mult);
		i++;
	}
	return 0;
}