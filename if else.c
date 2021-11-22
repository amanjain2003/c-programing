#include<stdio.h>
int main()
{
	int x,y;
	printf("ente your first expression (x) = ");
	scanf("%d",&x);
	printf("enter your second expression (y) = ");
	scanf("%d",&y);
	if (x>y)
	{
		printf("x is greater");
	}
		else
	{
		printf("y is greater");
	}
	return 0;
}