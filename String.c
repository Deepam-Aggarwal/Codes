#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[40]="DEEPAM AGGARWAL";
 char a1[40]="LAKSHAY AGGARWAL";
 char *pos;
 int ans;
 int i;
 clrscr();
 printf("The first sting is:");
 puts(a);
 printf("The second string is:");
 puts(a1);
 printf("1:strlen\n2:stract\n3:strcpy\n4.strdup\n5.strlwr\n6.strupr\n  
 7.strs et\n8.strchr\n9.strcmp\n10.strrev\n");
 printf("Enter Your Choice:");
 scanf("%d",&i);
 switch(i)
 {
  case 1:strlen(a);
         puts(a);
         break;
  case 2:strcat(a,a1);
         puts(a);
         break;
  case 3:strcpy(a,a1);
         puts(a);
         break;
  case 4:strdup(a1);
         puts(a);
         break;
  case 5:puts(strlwr(a));
         break;
  case 6:puts(strlwr(a));
         puts(strupr(a));
         break;
  case 7:strset(a,'D');
         puts(a);
         break;
  case 8:pos=strchr(a,'i');
         printf("%d",pos-a+1);
         break;
  case 9:ans=strcmp(a,a1);
         printf("%d",ans);
         break;
  case 10:puts(strrev(a));
	    break;
 }
 getch();
}
