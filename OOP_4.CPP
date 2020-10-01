#include<iostream.h>
#include<conio.h>
void main()
{    clrscr();
    float sum=0;
    int n;
    cout<<"Enter the value of the N upto which the terms has to be found ";
    cin>>n;
    for(float i=1;i<=n;i++)
    {
       sum=sum+(1/i);
       }
    cout<<"the sum of the  series is "<<sum;
    getch();
    }
