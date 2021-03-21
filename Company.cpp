#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class product
{
int id;
char name[20];
public:
void input()
{
cout<<"enter the product id:";
cin>>id;
cout<<"enter the product name:";
gets(name);
}
};
class company
{
intcid;
char cname[20];
public:
void in()
{
cout<<"enter the company id:";
cin>>cid;
cout<<endl;
cout<<"enter the company name:";
gets(cname);
cout<<endl;
}
};
class total_product:publicproduct,public company
{
int quantity;
float price,cost;
public:
void costs()
{
cout<<"enter the price of product: ";
cin>>price;
cout<<endl;
cout<<"enter the quantity of product: ";
cin>>quantity;
cout<<endl;
cost=price*quantity;
cout<<"cost of the product is: ";
cout<<cost<<endl;
}
};
void main()
{
clrscr();
total_productt[2];
for(inti=0;i<2;i++)
{
t[i].input();
t[i].in();
t[i].costs();
}
getch();
}
