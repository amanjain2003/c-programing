#include<stdio.h>
int main()
{
int x,y,sum,sub,mul,div,rem;
scanf("%d%d",&x,&y);
sum=x+y;
sub=x-y;
mul=x*y;
div=x/y;
rem=x%y;
printf("sum=%d\nsub=%d\nmult=%d\ndiv=%d\nrem=%d",sum,sub,mul,div,rem);
return 0;	
}