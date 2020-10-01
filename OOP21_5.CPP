#include<iostream.h>
#include<conio.h>
#include<process.h>
class rational
{
  float den,num;
  public:
  void assign(float,float);
  void display()
  {
    cout<<"\n the number in rational form is "<<num<<"/"<<den;
    }
   float convert()
   {
     float x;
     x=float(num/den);
     return x;
     }
    void invert()
    {
       int temp;
       temp=den;
       den=num;
       num=temp;
       cout<<"\n after inverting the number is "<<num<<"/"<<den;
       }
    };
    void rational::assign(float x,float y)
    {   if(y==0)
     { cout<<"=n wrong inpuy";
    exit(0);
    }
     else{
	num=x;
	den=y;
	}
    void main()
    {  clrscr();
      rational t;
      float a,b;
    cout<<"Enter the numerator adn denominator respectively";
    cin>>a>>b;
    t.assign(a,b);
    t.display();
    cout<<"\n the convertion form is  "<<t.convert();
    t.invert();
   getch();
   }