#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,b,c,d,e,f,choi;
  float distance;
//  float find_distance(int=1,int=1,int=1,int=1);
  float find_distance(int=1,int=1,int=1,int=1,int=1,int=1);
  cout<<"\n 1.2d \n 2. 3d";
  cin>>choi;
  if(choi==1)
  {
    cout<<"\n enter the 4 coordinates";
    cin>>a>>b>>c>>d;
    distance=find_distance(a,b,c,d);
  }
  else
  {
    cout<<"]n enter the  6 coordinated ";
    cin>>a>>b>>c>>d>>e>>f;
    distance=find_distance(a,b,c,d,e,f);
    }
  cout<<"\n the distance is "<<distance;
  getch();
  }
  float find_distacne(int a,int b,int c,int d)
  {
    float dist;
    dist=sqrt(((a-b)*(a-b))+((d-c)*(d-c)));
    return dist;
    }
  float find_distance(int a,int b,int c,int d,int e,int f)
  {
     float dist;
     dist=sqrt(((a-b)*(a-b))+((d-c)*(d-c))+((f-e)*(f-e)));
     return dist;
     }
