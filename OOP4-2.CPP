#include<iostream.h>
#include<conio.h>
class complex
{ public:
  float real,imag;
   void get_data(float num,float num1)
  {
     real=num;
     imag=num1;
     }
  void show()
  {
    cout<<"\n the complec number is \n "<<real<<" +i"<<imag;
    }
	 complex add(complex s)
 {
   complex rt;
   rt.real=s.real+real;
   rt.imag=s.imag+imag;
   return rt;
   }
  friend complex addition(complex s,float x)
  {
    s.real=s.real+x;
    return s;
   };
  complex add(float x,complex s)
  {

   void main()
   { clrscr();
     complex t,s,r;
     float x,y;
     cout<<"\n enter the details of the real and imag part ";
     cin>>x>>y;
     t.get_data(x,y);
     t.show();
     cout<<"\n enter the details of the another complex  number ";
     cin>>x>>y;
     s.get_data(x,y);
     r=t.add(s);
     cout<<"\n \n";
     cout<<"\n after additon is \n ";
     r.show();
     getch();
     }