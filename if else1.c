#include<stdio.h>
int main()
{
	int x,y,z;
	printf("ente your first expression (x) = ");
	scanf("%d",&x);
	printf("enter your second expression (y) = ");
	scanf("%d",&y);
	printf("enter your third expression (z) = ");
	scanf("%d",&z);
	if (x>y && x>z)
	{
	printf("x is greater");
	}
	if (y>x && y>z)
	{
	printf("y is greater");
	}
	else
	printf("z is greater");
		
		
			
		
	return 0;
}