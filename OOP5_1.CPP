#include<iostream.h>
#include<conio.h>
class complex
{
  float real,imag;
  public:
  complex()
  {
    cout<<"\n the default construxtor is called ";
    }
  complex(float x,float y)
  {
    real=x;
    imag=y;
    cout<<"\n the parametrized constructor is called ";
    }
  complex(complex &obj)
  {
    cout<<"\n the copy constructor is call";
						  }
  void show()
  {
    cout<<"\n the complex number is "<<real<<" + i"<<imag;

    }
     ~complex();
	  };
   complex::~complex()
   { cout<<"\n the destructor is called ";
   }
  int main()
  {  clrscr();
     complex x;
     float num,num1;
     cout<<"\n enter the complex numbers ";
     cin>>num>>num1;
     complex y(num,num1);
     y.show();
     complex j(y);

     return 0;
	 }
