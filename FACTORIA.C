#include<stdio.h>
#include<conio.h>
void main ()
{
int i;
int a=1;
int n;
clrscr();
printf("Enter any number : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
a*=i;
}
printf("%d",a);

getch();
}