#include<iostream.h>
#include<conio.h>

void main()
{ clrscr();
  void swap(int &,int &);


  void swap(int *,int *);

  int a,b,choice;
  cout<<"\n enter the choice by which you want to swap ";
  cout<<"\n 1. reference \n 2.call by value\n 3.adresss";
  cin>>choice;
  cout<<"\n enter the two numbers to be swapped";
  cin>>a>>b;
  if(choice==1)
  {
       swap(a,b);
      cout<<"the numbers are swapped "<<a<<" "<<b;
      }

  else
 {
   swap(&a,&b);
   cout<<"the numbers after swapped are"<<a<<" "<<b;

  }
   getch();
   }
void swap(int &x,int &y)
  {  int c;
     c=x;
     x=y;
     y=c;
  }
  void swap(int *x,int *y)
  {  int c;
      c=*x;
      *x=*y;
      *y=c;
      }

