#include<iostream.h>
#include<conio.h>

void main()
{ clrscr();
  void swap_ref(int &,int &);

  void swap_val(int ,int );
 
  void swap_add(int *,int *);

  int a,b,choice;
  cout<<"\n enter the choice by which you want to swap ";
  cout<<"\n 1. reference \n 2.call by value\n 3.adresss";
  cin>>choice;
  cout<<"\n enter the two numbers to be swapped";
  cin>>a>>b;
  if(choice==1)
  {
       swap_ref(a,b);
      cout<<"the numbers are swapped "<<a<<" "<<b;
      }
  else if(choice==2)
  {
      swap_val(a,b);
      }
  else
 {
   swap_add(&a,&b);
   cout<<"the numbers after swapped are"<<a<<" "<<b;

  }
   getch();
   }
void swap_ref(int &x,int &y)
  {  int c;
     c=x;
     x=y;
     y=c;
  }
  void swap_val(int x,int y)
  {
     int temp;
     temp=x;
     x=y;
     y=temp;
     cout<<"the numebr after swapping is "<<x<<" "<<y;
     }
  void swap_add(int *x,int *y)
  {  int c;
      c=*x;
      *x=*y;
      *y=c;
      }
