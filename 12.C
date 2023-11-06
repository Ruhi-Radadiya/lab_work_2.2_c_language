#include<stdio.h>
#include<conio.h>
void main()
{
int width,height,area;
clrscr();
printf("enter value of width:");
scanf("%d",&width);
printf("enter value of height:");
scanf("%d",&height);
area=width*height;
printf("area=%d",area);
getch();
}