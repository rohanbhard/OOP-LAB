#include<iostream.h>
#include<math.h>
#include<conio.h>
class point
{
 int x,y,z;
 public:
 point()
 {
   x=0;
   y=0;
   z=0;
  }
  point(int a,int b,int c)
  {
    x=a;
    y=b;
    z=c;
    cout<<"\n the values are assigned";
  }
 int isequal(point s1)
 {
   if((x==s1.z)&&(y==s1.y)&&(z==s1.z))
   return 1;
   else
   return 0;
   }
 float find_distance()
 {
   float num;
   num=sqrt((x*x)+(y*y)+(z*z));
   return num;
   }
 void show()
 {
  cout<<"\n teh value of x "<<x<<" , y is " <<y<<", z is "<<z;
  }
  };
 void main()
 { clrscr();

   point obj1;
   int a,b,c;
   cout<<"\n enter the values of x,y,z";
   cin>>a>>b>>c;

   point obj2(a,b,c);
   cout<<"\n checking the two files are equa or not ";
   int num=obj1.isequal(obj2);
   if(num)
   cout<<"\n they are equal ";
   else
   cout<<"\n they are not equal ";
   float x=obj2.find_distance();
   cout<<"\n the distance from the origin is "<<x;
   obj2.show();
   getch();
   }
