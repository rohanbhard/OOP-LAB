#include<iostream.h>
#include<conio.h>
class array
{
 int *ptr;
 int row,col;
 public:
 array()
 {
  ptr=new int[4];
  cout<<"\n the default constructor is ";
    }
  array(int n,int j)
  {
    row=n;
    col=j;
    ptr= new int[25];
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
     for(int i=0;i<row;i++)
	{
	   for (int j=0;j<col;j++)
	    cout<<ptr[i*col+j]<<" ";
	   cout<<"\n";
	 }
}
void array::input()
{
     cout<<"\n enter the values of the array";
     for(int i=0;i<row;i++)
     {   for(int j=0;j<col;j++)
	 cin>>ptr[i*col+j];
    } }

 void main()
  { clrscr();
    array obj;
    int num,num1;
    cout<<"\n enter the row and col of the array you want ";
    cin>>num>>num1;
    array x(num,num1);
    x.input();
    x.display();
    getch();
    }