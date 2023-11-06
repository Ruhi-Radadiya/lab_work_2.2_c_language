#include<stdio.h>
#include<conio.h>
void main()
{
int maths,ss,sci,com,pt,hindi,guj,eng,sum,average,percentage;
clrscr();
printf("enter marks of Maths:");
scanf("%d",&maths);
printf("enter marks of SS:");
scanf("%d",&ss);
printf("enter marks of Sci:");
scanf("%d",&sci);
printf("enter marks of Com:");
scanf("%d",&com);
printf("enter marks of PT:");
scanf("%d",&pt);
printf("enter marks of Hindi:");
scanf("%d",&hindi);
printf("enter marks of Guj:");
scanf("%d",&guj);
printf("enter marks of Eng:");
scanf("%d",&eng);
sum=maths+ss+sci+com+pt+hindi+guj+eng;
printf("sum=%d\n",sum);
average=sum/8;
printf("average=%d\n",average);
percentage=(sum/8)*100;
printf("percentage=%d",percentage);
getch();
}