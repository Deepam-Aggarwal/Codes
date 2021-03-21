#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct date
{
	    int year,month,date;
};
class patient
{
	    protected:
		char name[20];
			date adm;
			char disease[20];
			date dis;
	    public:
			void getdata();
			void show();
};
class newpatient:public patient
{
            int age;
            public:
                        void getage();
                        void showinfo();
};
void patient::getdata()
{
            cout<<"\nEnter patient name:";
            gets(name);
            cout<<"\nEnter the date of admission of patient:";
            cin>>adm.date;
            cout<<"\nEnter the month of admission of patient:";
            cin>>adm.month;
            cout<<"\nEnter the year of admission of patient:";
            cin>>adm.year;
            cout<<"\nEnter the disease of patient:";
            gets(disease);
            cout<<"\nEnter the date of discharge of patient:";
            cin>>dis.date;
            cout<<"\nEnter the month of discharge of patient:";
            cin>>dis.month;
            cout<<"\nEnter the year of discharge of patient:";
            cin>>dis.year;
}  
void patient::show()
{
	    cout<<"\nPatient Name:"<<name;
	    cout<<"\nPatient Admission Date:"<<adm.date<<"-"<<adm.month<<"-"<<adm.year;
	    cout<<"\nPatient Disease:"<<disease;
	    cout<<"\nPatient Discharge Date:"<<dis.date<<"-"<<dis.month<<"-"<<dis.year;
}
void newpatient::getage()
{
	    cout<<"\nEnter patient age:";
	    cin>>age;
}
void newpatient::showinfo()
{
	    if(age<12)
	    {
			cout<<"\nPatient Age:"<<age;
			show();
	    }
	    else
			cout<<"\nOnly for patients less than 12 in age";
}
void main()
{
	    clrscr();
	    newpatient n1;
	    n1.getdata();
	    n1.getage();
	    n1.showinfo();
	    getch();
}
