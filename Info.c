#include<stdio.h>
#include<string.h>
#include<conio.h>
struct ad
{int s;
 char b[15];
 char c[15];
};
struct de
{ int roll;
  char n[20];
  struct ad add;
}p[50];
void main()
{int n,i;
 clrscr();
 printf("How many enteries:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {printf("Enter roll no.:");
   scanf("%d",&p[i].roll);
   printf("Enter name:");
   scanf("%s",&p[i].n);
   printf("Enter street no.:");
   scanf("%d",&p[i].add.s);
   printf("Enter block:");
   scanf("%s",&p[i].add.b);
   printf("Enter city:");
   scanf("%s",&p[i].add.c);
   printf("\n");
  }
   printf("***************************************************************\n");
   printf("Details are as follows:-\n");
 for(i=0;i<n;i++)
  {printf("Enter roll no.:%d\n",p[i].roll);
   printf("Enter name:%s\n",p[i].n);
   printf("Enter street no.:%d\n",p[i].add.s);
   printf("Enter block:%s\n",p[i].add.b);
   printf("Enter city:%s\n",p[i].add.c);
   printf("\n");
  }
 getch();
}
