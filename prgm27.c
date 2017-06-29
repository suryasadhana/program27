#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,minmultiple;
clrscr();
printf("enter two positive int");
scanf("%d %d",&n1,&n2);
minmultiple=(n1>n2)?n1:n2;
while(1)
{
if(minmultiple%n1==0 && minmultiple%n2==0)
{
printf("%d %d",n1,n2,minmultiple);
break;
}
++minmultiple;
}
getch();
}
