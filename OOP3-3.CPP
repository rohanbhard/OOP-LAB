#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   void area_per(int &,int &,int,int);
   int hei,brea,area,peri;
   cout<<"\n enter the value of height and breath";
   cin>>hei>>brea;
   area_per(area,peri,hei,brea);
   cout<<"the area is "<<area<<" the perimeter is "<<peri;
   getch();
   }
   void area_per(int &area,int &perimeter,int hei,int brea)
   {
    area=hei*brea;
    perimeter=2*(hei+brea);
    }