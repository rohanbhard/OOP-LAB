#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
class account
{
  char name[20];
  float acc,balance;
  public:
  static float inter;
   void getdata()
  {
    cout<<"\n enter the name of the accountee";
    gets(name);
    cout<<"\n enter the acount number ";
    cin>>acc;
    cout<<"\n enter the balance ";
    cin>>balance;
    }
  float find_balance(int inf)
  {
    float si;
    si=(balance*inter*inf)/100;
    balance=balance +si;
    return (balance);
    }
  void show()
  {
    cout<<"\n the details of the account holder are ";
    cout<<name<<" account number "<<acc;
    cout<<"\n the balance is  "<<balance;
    }
 static void change_rate(float rate)
 {
    inter=rate;
    }
  };
 float account::inter=0.1;
void main()
{
  clrscr();
  float num,rate=0.15;
  account s;
  s.getdata();
  num=s.find_balance(2);
  cout<<"\n the balance after 2 years of 10per interest is "<<num;
  s.show();
  account::change_rate(rate);
  num=s.find_balance(2);
  cout<<"\n the balance after 2 years of 15 pers intereest is "<<num;
  s.show();
  getch();
  }

