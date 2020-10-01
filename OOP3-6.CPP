#include<iostream.h>
#include<conio.h>
//inline int sqr(int s)
//{
 //   return s*s;
//}
int main()
{
  inline int sqr(int);
	cout << "The cube of 3 is: " << sqr(3) << "\n";
    getch();
    return 0;
}
 int cube(int s)
 {
   return s*s;
   }