#include<iostream>
using namespace std;
int main()
{
   int num;

   cout<<"Enter the number:"<<endl;
   cin>>num;

   for(int i=1;i<=num;i++)
   {
     int flag=true;
      for(int j=2;j<=i;j++)
      {
        if(i%j==0)
        {
            flag=false;
             break;
        }
      }
      if(flag==true)
      {
        cout<<i<<" ";
      }
   }

 return 0;
}