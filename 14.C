#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,ans;
clrscr();
printf("enter principal amount:");
scanf("%d",&p);
printf("enter rate per A num:");
scanf("%d",&r);
printf("enter time(years):");
scanf("%d",&t);
ans=(p*r*t)/100;
printf("ans=%d",ans);
getch();
}