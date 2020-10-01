#include<iostream.h>
#include<conio.h>
class time
{
  int hour;
  int min;
  public:
  time()
  {
   cout<<"\n the default constructor is called ";
   }
   time(int h)
   {   hour=h;
      min=0;
      cout<<"\n the hous parametrized function is called";

      }
    time(int h,int mi)
    {
      hour=h;
      min=mi;
      }
   void show()
   {
     cout<<"\n the time is "<<hour<<" : " <<min ;
     }

     };
   void main()
   { clrscr();
     time t1;
     int num,num1;
     cout<<"\n enter the details of hours ";
     cin>>num;
     time t2(num);
     t2.show();
     cout<<"\n enter the details of hours and minutes ";
     cin>>num>>num1;
     time t3(num,num1);
     t3.show();
     getch();
     }