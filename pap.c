#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("enter value");
scanf("%d",&a);
if(a<0)
{
printf("negative");
}
elseif(a>0)
{
printf("positive");
}
getch();
return 0;
}
