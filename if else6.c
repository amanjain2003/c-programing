#include<stdio.h>
int main()
{
	char c;
	printf("enter a character = ");
	scanf("%c",&c);
	if((c>='a' && c<='z') ||
	  (c>='A' && c<='Z'))
	  {
	  	printf("this word is an alphabet");
	  }
	  else
	  printf("not an alphabet");
	  return 0;
}