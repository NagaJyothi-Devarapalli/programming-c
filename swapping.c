#include<stdio.h>
#include<conio.h>
void main()
{
int a,b:
clrscr();
printf("enter a,b");
scanf("\n%d,\n%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n%d,\n%d",a,b);
getch();
}
