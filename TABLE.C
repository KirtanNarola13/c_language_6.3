#include<stdio.h>
#include<conio.h>
void main ()
{
int n;
int a;
int i;

clrscr();
printf("Enter any number :  ");
scanf("%d",&n);
for(i=1;i<=10;i++){
a = n * i;
printf("%d*%d=%d\n",n,i,a);

}
getch();
}