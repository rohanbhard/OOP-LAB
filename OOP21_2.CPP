#include<iostream.h>
#include<conio.h>
#include<math.h>
class triangle
{
  float a,b,c;
  void find_peri()
  { float peri;
    peri=a+b+c;
    cout<<"the perimeter is "<<peri;
    }
  public:
  void get_data(float x,float y,float z)
  {
   a=x;
   b=y;
   c=z;
 }
  void get_area()
  {
    find_peri;
    float s;
    s=(a+b+c)/2;
    float area,num;
    num=(s*(s-a)*(s-b)*(s-c));
    area=sqrt(num);
    cout<<"\n the area is "<<area;
    }
    }t;
   void main()
   { clrscr();
     float x,y,z;
     cout<<"Enter the sides of the triangle";
     cin>>x>>y>>z;
     t.get_data(x,y,z);
     t.get_area();
     getch();
     }