#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int max(int &,int &);
  int a,b,c,d;
  cout<<"enter the 4 numbers"<<endl;
  cin>>a>>b>>c>>d;
  cout<<"the max is"<<max(a,max(b,max(c,d)));
  getch();
  }
  max(int & a,int &b)
  {
     if(a>b)
       return a;
     else
     return b;
     }
