#include<iostream.h>
#include<conio.h>
#define PI 3.14
#include<math.h>
void main()
{ int choice;
  void circle(float);
  void quadra(float,float,float);
  void series(int);
  void temp(float);
  cout<<"Enter the desired choice \n 1. circle \n 2. quadratic \n 3.series \n 4.temperature";
  cin>>choice;
  switch(choice)
  {
    case 1:
    float rad;
    cout<<"Enter teh value of the radius";
    cin>>rad;
    circle(rad);
    break;

    case 2:
    float a,b,c;
    cout<<"Enter the values of a,b,c respectivley";
    cin>>a>>b>>c;
    quadra(a,b,c);
    break;

    case 3:
    int n;
    cout<<"Enter the value upto whcih the sum has to be found ";
    cin>>n;
     series(n);
    break;

    case 4:
    float freh;
    cout<<"Enter the value of the frehn ";
    cin>>freh;
     temp(freh);
    break;

    default:
     cout<<"Invalid choice ";
}
 cout<<"\n the program terminated";
}

     void circle(float rad)
{     float per,area;
     per=2*PI*rad;
     area=PI*rad*rad;
     cout<<"the area is "<<area<<" the perimeter is "<<per;
     getch();
   }
     void quadra(float a,float b,float c)
  {  float x1,x2, discriminant, realPart, imaginaryPart;
     discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
	x1 = (-b + sqrt(discriminant)) / (2*a);
	x2 = (-b - sqrt(discriminant)) / (2*a);
	cout << "Roots are real and different." << endl;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
	cout << "Roots are real and same." << endl;
	x1 = (-b + sqrt(discriminant)) / (2*a);
	cout << "x1 = x2 =" << x1 << endl;
    }

    else {
	realPart = -b/(2*a);
	imaginaryPart =sqrt(-discriminant)/(2*a);
	cout << "Roots are complex and different."  << endl;
	cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
	cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
    getch();
   }

   void series(int n)
{
    float sum=0;
    for(float i=1;i<=n;i++)
    {
       sum=sum+(1/i);
       }
    cout<<"the sum of the  series is "<<sum;
    getch();
    }
   void temp(float freh)
{  float cel;
   cel=((freh-32)/1.8);
   cout<<"\n The celsius temperatuer is"<<cel;
   getch();
   }