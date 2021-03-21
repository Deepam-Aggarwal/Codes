#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class wife;
class husband
{
double a;
char h_name[10];
public:
husband(long int,char[]);
friend void salary(husband,class wife);
};
class wife
{
double b;
char w_name[10];
public:
wife(long int,char[]);
friend void salary(husband, wife);
};
husband::husband(long int x,char y[])
{
a=x;
strcpy(h_name,y);
}
wife::wife(long int c,char d[])
{
b=c;
strcpy(w_name,d);
}
void salary(husband h,wife w)
{
double salary;
salary=h.a+w.b;
cout<<"The name of the husband is : "<<h.h_name<<endl;
cout<<"The salary of the husband is : "<<h.a<<endl;
cout<<"The name of the wife is : "<<w.w_name<<endl;
cout<<"The salary of the wife is : "<<w.b<<endl;
cout<<"The total salary : "<<salary<<endl;
}
void main()
{
clrscr();
double a,b;
char x[10],y[10];
cout<<endl<<"Enter the name of husband : "<<endl;
cin>>x;
cout<<"Enter the salary of husband : "<<endl;
cin>>a;
cout<<"Enter the name of wife : "<<endl;
cin>>y;
cout<<"Enter the salary of wife : "<<endl;
cin>>b;
husband h(a,x);
wife w(b,y);
salary(h,w);
getch();
}
