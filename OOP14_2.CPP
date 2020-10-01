#include<iostream.h>
#include<conio.h>
void main()
{
  void display(int x[10][10],int,int);
  int a[10][10],col,row;
  cout<<"enter the row and col of the matrix";
  cin>>row>>col;
  cout<<"\n enter the elements of the matrix";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
      cin>>a[i][j];
    }
   display(a,row,col);
   getch();
   }
   void display(int b[10][10],int row,int col)
   {
      for(int i=0;i<row;i++)
      {
	for(int j=0;j<col;j++)
	cout<<" "<<b[i][j];
	cout<<endl;

	}}