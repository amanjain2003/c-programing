#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter a numper : ");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("%d\n",n);
		n--;
	}
	return 0;
}