#include<stdio.h>
int main()
{
	int x=2,y=0;
	int z=x&&(y|=10);
	printf("%d",z);
	return 0;
}