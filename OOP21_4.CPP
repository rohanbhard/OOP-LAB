#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class account
{
  char name[20],acc_type[10];
  int acc;
  float balance;
  public:
  void get_data();
  void deposit(float amount)
  {
   balance=0.0;
   balance+=amount;
   cout<<"\n balance updated";
   }
   void withdraw(float amount)
   {
     balance=balance-amount;
     cout<<"\n the amount deducted ";
     }
     void display();
     };
   void account::get_data()
   {
      cout<<"\n Enter the details of the acconts ";
      gets(name);
      cout<<"\n enter the acc no and balance ";
      cin>>acc>>balance;
      cout<<"\n enter the type of the account";
      gets(acc_type);
      }
   void account::display()
   {
       cout<<"\n the deatils of the account are ";
       cout<<"\n the name is "<<puts(name);
       cout<<"\n the account number is "<<acc;
       cout<<"\n the type of account is "<<puts(acc_type);
       cout<<"\n the account balance is "<<balance;
    }
    void main()
    {
      clrscr();
      account per;
      float amount;
      per.get_data();
      cout<<"\n the amount you want to deposit";
      cin>>amount;
      per.deposit(amount);
      cout<<"\n the amount you want to withdraw";
      cin>>amount;
      per.withdraw(amount);
      per.display();
      getch();
      }
