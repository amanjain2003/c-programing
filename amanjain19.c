#include<stdio.h>
int main()
{
int nd,years,weeks,days;
scanf("%d",&nd);
years=nd/365;
weeks=(nd%365)/7;
days=(nd%365)%7;
printf("years=%d\nweeks=%d\ndays%d",years,weeks,days);
return 0;	
}