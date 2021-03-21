#include<iostream.h>
#include<conio.h>
class house
{
public:
intlen,bre,door,window;
house()
{
len=20;
bre=100;
}
void inputdimension()
{
cout<<"enter the length:";
cin>>len;
cout<<"enter the breadth:";
cin>>bre;
}
void get_door()
{
cout<<"enter the number of doors:";
cin>>door;
}
void get_wind()
{
cout<<"enter the number of windows:";
cin>>window;
}
void display()
{
cout<<"length of the house is: "<<len<<endl;
cout<<"breadth of the house is: "<<bre<<endl;
cout<<"no. of doors in the house are: "<<door<<endl;
cout<<"no. of windows in the house are: "<<window<<endl;
}
};
class doors:public house
{
public:
void doorcost()
{
int c;
c=500*door;
cout<<"cost of doors is: "<<c<<endl;
}   };
class windows: public house
{
public:
void windowcost()
{
int w;
w=1000*window;
cout<<"cost of windows is: "<<w<<endl;
}
};

void main()
{
clrscr();
doors d;
windows w1;
d.inputdimension();
d.get_door();
d.get_wind();
d.display();
d.doorcost();
w1.windowcost();
getch();
}
