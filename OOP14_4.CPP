#include<iostream.h>
#include<conio.h>
int factorial(int);
void main()
{

  void  comb(int ,int);
  int n,k;
  cout<<"\n enter the values of n and k";
  cin>>n>>k;
  comb(n,k);
  getch();
  }
  void comb(int n,int k)
  {
     int val;
     val=(factorial(n))/((factorial(k))*(factorial(n-k)));
     cout<<"the value after calculation is "<<val;
     }
   int factorial(int x)
   {
       int fact=1;
	for(int i=1;i<=x;i++)
	{
	   fact*=i;
	   }
	return fact;
	}
