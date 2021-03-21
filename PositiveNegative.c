#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,neg=0,pos=0;
clrscr();
printf("Enter the count of the numbers you want to check:\n");
scanf("%d",&n);
printf("Enter the elemnts:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
pos++;
else
neg++;
}
printf("Positive numbers present are:%d\n",pos);
printf("Negative numbers present are:%d",neg );
getch();
} 
