#include<stdio.h>
#include<conio.h>
void add();
void sub();
void multiply();
void trans();
void main(){
int choice,i;
char ans='y';
clrscr();
printf("Enter 1 to add\n");
printf("Enter 2 to subtract\n");
printf("Enter 3 to multiply\n");
printf("Enter 4 to transpose\n");
do{
printf("Rember both matrix should be 2*2\n");
printf("Enter your choice:-");
scanf("%d",&choice);
switch(choice){
case 1:
       add();
       break;
case 2:
       sub();
       break;
case 3:
       multiply();
       break;
case 4:
       trans();
       break;
default:
       printf("Enter a valid choice ");
}
printf("Do you want to run again if yes than type y otherwise press enter twice to exit:-");
fflush(stdin);
scanf("%c",&ans);
}while(ans=='y');
getch();
}
void add(){
int a[2][2],b[2][2],c[2][2]={{0,0},{0,0}},j,i;
printf("You have choosen addition\n");
printf("Enter elements of first matrix :-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&a[i][j]);
}
}
printf("Enter elements of second matrix:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
c[i][j]=a[i][j]+b[i][j];
}
}
printf("The resultant matrix is:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
void sub(){
int a[2][2],b[2][2],c[2][2]={{0,0},{0,0}},j,i;
printf("You have choosen subtract \n");
printf("Enter elements of first matrix :-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&a[i][j]);
}
}
printf("Enter elements of second matrix:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&b[i][j]);
}
}
printf("The resultant matrix is:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
c[i][j]=a[i][j]-b[i][j];
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
void trans(){
int a[2][2],c[2][2]={{0,0},{0,0}},j,i;
printf("You have choosen transpose");
printf("Enter elements of matrix to be transposed:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
c[i][j]=a[j][i];
}
}
printf("The given matrix is :-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("The transpose is:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
void multiply(){
int a[2][2],b[2][2],c[2][2]={{0,0},{0,0}},j,i,k;
printf("You have choosen multiplication\n");
printf("Enter elements of first matrix :-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&a[i][j]);
}
}
printf("Enter elements of second matrix:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
for(k=0;k<2;k++){
c[i][j]+=a[i][k]*b[k][j];
}
}
}
printf("The multiplication of given matrices is:-\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
