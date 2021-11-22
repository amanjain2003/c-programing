#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter first angle = ");
	scanf("%d",&x);
	printf("enter second angle = ");
	scanf("%d",&y);
	printf("enter third angle = ");
	scanf("%d",&z);
	if((x+y+z)==180)
	  {
	  	printf("triangle");
	  }
	  else
	  printf("not a triangle");
	  return 0;
}