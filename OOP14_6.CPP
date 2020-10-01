#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
   clrscr();
   void area(int,int,int);
   void area(int,int);
   void area(int);
   int choi,rad,a,b,c,hei,bread;
   cout<<"enter the choice\n1.circle \n 2.rectangle \n 3.traingle ";

   cin>>choi;

   if(choi==1)
   {
   cout<<"\n Enter the details of circle";
      cin>>rad;
    area(rad);
      }
    else if(choi==2)
    {
       cout<<"\n enter the details of reactangle";
       cin>>hei>>bread;
       area(hei,bread);
       }
    else
      {
      cout<<"\n enter the details of traingle";
      cin>>a>>b>>c;
      area(a,b,c);
       }
      getch();
      }
      void area(int a)
      {
	float area;
	area=3.14*(a*a);
	cout<<"\n the area is"<<area;
	}
      void area(int a,int b)
      {
	 float area;
	 area=(a*b);
	 cout<<"\n the are is "<<area;
	 }
       void area(int a,int b,int c)
       {
	  float area,s;
	  s=(a+b+c)/2;
	  area=sqrt((s*(s-a)*(s-b)*(s-c)));
	  cout<<"\n the area is "<<area;
	 }