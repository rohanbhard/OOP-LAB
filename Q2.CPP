#include<iostream.h>
#include<stdio.h>
struct student
{
  char name[20];
  int rollno;
  int marks[5];
  };
  void main()
  {
     int i=0;
     student x;
     cout<<"Input the name of the student";
     gets(x.name);
     cout<<"the rool number of the student";
     cin>>x.rollno;
     cout<<"Enter the marks for 5 subjects";
     for(i=0;i<5;i++)
     cin>>x.marks[i];
     cout<<"the student is "<<puts(x.name)<<"with roll number"<<x.rollno;
     cout<<"the marks of 5 sub is";
     for( i=0;i<5;i++)
     cout<<"\n "<<x.marks[i];
     }C