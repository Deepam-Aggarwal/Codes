#include<stdio.h>
#include<string.h>
struct stud
{int roll;
 char name[15];
};
void main()
{struct stud p[50];
 int n,i;
 clrscr();
 printf("How many entries:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {printf("Employee id:");
  scanf("%d",&p[i].roll);
  printf("Name of employee:");
  scanf("%s",&p[i].name);
 }	
 printf("\n");
 for(i=0;i<n;i++)
 {printf("Employee id:%d\n",p[i].roll);
  printf("Name of employee:%s\n",p[i].name);
 }
 getch();
 }
