#include<iostream.h>
#include<stdio.h>
 struct edu
 {
    int id;
    char name[20];
    };
 void main()
 {
   edu x;
   cout<<"in put the name of the student ";
   gets(x.name);
   cout<<"input the id of the student";
   cin>>x.id;
   cout<<"the name is "<<x.name<<" the id  is"<<x.id;
   }