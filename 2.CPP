#include<iostream.h>
#include<conio.h>
class employee
{
public:
int emp_id;
char emp_name[20];
char emp_dept[20];

void getdata()
{
cout<<"enter name of employee:";
cin>>emp_id;
cout<<"enter name of employee:";
cin>>emp_name;
cout<<"enter department of employee:";
cin>>emp_dept;
}
void displaydata()
{
cout<<"employee id is:"<<emp_id<<endl;
cout<<"employee name is:"<<emp_name<<endl;
cout<<"employee department:"<<emp_dept<<endl;
}
};
int main()
{
employee t[50];
int i,n;
clrscr();
cout<<"enter number of employee details:";
cin>>n;
for(i=0;i<n;i++)
{
t[i].getdata();
}
for(i=0;i<n;i++)
{

cout<<"displaydata"<<endl;
t[i].displaydata();
}
return 0;
}