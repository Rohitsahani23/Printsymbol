#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
 clrscr();
 printf("Enter a number of line\n");
 scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++) 
{
 printf(" ");
}
for(j=1;j<=i;j++)
{
 printf("#");
}
printf("\n");
}


for(i=1;i<=n;i++)
{
for(j=n;j<i;j++) 
{
 printf(" ");
}
for(j=1;j<=i;j++)
{
 printf("#");
}
printf("\n");
}

 getch();
}