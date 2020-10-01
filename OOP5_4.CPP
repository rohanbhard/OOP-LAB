#include<iostream.h>
#include<conio.h>
class array
{
 int *ptr;
 int size;
 public:
 array()
 {
  ptr=new int[5];
  cout<<"\n the default constructor is ";
    }
  array(int n)
  {
    size=n;
    ptr= new int[n];
    }
   void input();

   void display();

  ~array()
  { delete ptr;
    cout<<"the desturctor is called ";
    }
    };
  void array::display()
{
     cout<<"\n the entered elements are ";
     for(int i=0;i<size;i++)
     cout<<"\n"<<ptr[i];
     }
void array::input()
{
     cout<<"\n enter the valles of the array";
     for(int i=0;i<size;i++)
     { cin>>ptr[i];
    } }

 void main()
  {
    array obj;
    int n;
    cout<<"\n enter the size of the array you want ";
    cin>>n;
    array x(n);
    x.input();
    x.display();
    getch();
    }