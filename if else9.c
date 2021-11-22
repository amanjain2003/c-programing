#include<stdio.h>
int main()
{
	char c;
	printf("enter a character = ");
	scanf("%c",&c);
	if((c>='a' && c<='z') ||
	  (c>='A' && c<='Z'))
	  {
	  	printf("this is an alphabet");
	  }
	  if((c>=0)||(0>=c))
	  {
	  	printf("digit");
	  }
	  else
	  printf("special character");
	  return 0;
}