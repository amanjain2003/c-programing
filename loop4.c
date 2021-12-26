#include<stdio.h>
int main()
{
	int n,i=1;
	printf("print all odd no. between 1 to : ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
		printf("%d\n",i);
		}
		i++;
	}
	return 0;
}