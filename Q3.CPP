#include<stdio.h>
#include<iostream.h>
struct student
{
  char name[20];
  int rollno;
  int marks[5];
  }x;
void  input_fn();
void  out_fn();
  void main()
  {
     input_fn();
     out_fn();
     }
void input_fn()
{
    cout<<"enter the name of the student";
    gets(x.name);
    cout<<"enter the roll ,no of the student";
    cin>>x.rollno;
    cout<<"\n enter the marks of five sub";
    for(int i=0;i<5;i++)
    cin>>x.marks[i];
    }
void out_fn()
{
    cout<<"the details of the student are";
    cout<<"the name of the student is";
    puts(x.name);
    cout<<"\n the roll no is "<<x.rollno;
    cout<<"\n the marks of 5 subjects are";
    for(int i=0;i<5;i++)
    cout<<x.marks[i];
    }
