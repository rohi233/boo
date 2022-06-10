#include<iostream.h>
#include<conio.h>
class student{
public:
int rno,fees;
char name[20],branch[20];
student();
void disp();
};
void student::disp(){
cout<<"your name is"<<name<<endl;
cout<<"your roll number is"<<rno<<endl;
cout<<"you branch is"<<branch<<endl;
cout<<"your fees is"<<fees<<endl;
};

student::student(){
cout<<"enter your name";
cin>>name;
cout<<"enter your roll number";
cin>>rno;
cout<<"enter your branch";
cin>>branch;
cout<<"enter your fees";
cin>>fees;
}
void main(){
student s;
clrscr();
s.disp();
}