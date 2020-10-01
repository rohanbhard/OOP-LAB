#include<iostream.h>
#include<conio.h>
#include<math.h>
class triangle
{
  float a,b,c;
  public:
  void get_data(float x,float y,float z)
  {
   a=x;
   b=y;
   c=z;
 }
  void get_area()
  {
    float s;
    s=(a+b+c)/2;
    float area,num;
    num=(s*(s-a)*(s-b)*(s-c));
    area=sqrt(num);
    cout<<"\n the area is "<<area;
    }
    };
   void main()
   { clrscr();
     triangle t[3];
     int count=0;
     float x,y,z;
     while(count<3)
     {
     cout<<"Enter the sides of the "<<count<<" triangle";
     cin>>x>>y>>z;
     t[count].get_data(x,y,z);
     t[count].get_area();
     count++;
     getch();
     }  }