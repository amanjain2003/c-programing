#include<stdio.h>
int main()
{
	int x=3,y=2;
	int z=x/=y%2;
	printf("%d\n",z);
	return 0;
}