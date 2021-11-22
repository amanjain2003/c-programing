#include<stdio.h>
int main()
{
	char c;
	printf("enter a character = ");
	scanf("%c",&c);
	if(c>='a' && c<='z')
	  {
	  	printf("lowercase");
	  }
	  else
	  printf("uppercase");
	  return 0;
}