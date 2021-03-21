#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,i,sum=0;
char ans;
do{
clrscr();
printf("Enter the number till which you want odd or even numbers:");
scanf("%d",&n);
printf("1.EVEN\n2.ODD\n");
printf("Enter your choice:");
scanf("%d",&a);
switch(a)
{case 1:for(i=1;i<=n;i=i+2)
    {printf ("%d\n",i);
     sum=sum+i;
    }
    printf("Sum of the numbers is=%d\n",sum);
    break;
 case 2:for(i=2;i<=n;i=i+2)
    {printf("%d\n",i);
     sum=sum+i;
    }
    printf("Sum of the numbers is=%d\n",sum);
    break;
}
fflush(stdin);
printf("Do you want to run program again?\nPress y or Y for yes and to exit press enter two times\nYour Choice:");
scanf("%c",&ans);
}while(ans=='y'||ans=='Y');
getch();
}
