#include<stdio.h>
int main()
{
float r,area,diameter,circumfrence;
scanf("%f",&r);
area=3.14*r*r;
diameter=2*r;
circumfrence=2*3.14*r;
printf("area=%f\ndiameter=%f\ncircumfrence=%f",area,diameter,circumfrence);
return 0;	
}