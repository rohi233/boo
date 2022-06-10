#include<iostream.h>
#include<conio.h>
class student{
private:
int r_no,fees;
char name[20], branch[20];
public:
student(){
cout<<"enter student name";
cin>>name;
cout<<"enter student roll number";
cin>>r_no;
cout<<"enter student branch";
cin>>branch;
cout<<"enter student fees";
cin>>fees;
}
void display(){
cout<<"your name is"<<name<<endl;
cout<<"your roll number is"<<r_no<<endl;
cout<<"your branch is"<<branch<<endl;
cout<<"your fees is"<<fees<<endl;
}
};
void main()
{
student s;
clrscr();
s. display();
}

