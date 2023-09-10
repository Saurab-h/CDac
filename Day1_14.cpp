#include<iostream>
using namespace std;
int main()
{
  int num,odd=0,even=0;

   cout<<"Enter the number:"<<endl;
   cin>>num;

  for(int i=1;i<=num;i++)
  {
     if(i%2==0)
     {
        even+=i;
     }
     else
     {
        odd+=i;
     }
  }

  cout<<"sum of even is "<<even<<endl;

  cout<<"sum of odd is "<<odd<<endl;

 return 0;
}