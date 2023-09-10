#include<iostream>
using namespace std;
int main()
{
    int num;
    bool flag=true;

    cout<<"Enter the number:"<<endl;
   cin>>num;

// Prime number checking logic
   for(int i=2;i<num;i++)
   {
      if(num%i==0)
      {
          flag=false;
          break;
      }

   }

   if(flag==true)
    cout<<num<<" is a prime number."<<endl;

   else
    cout<<num<<" is not a prime number."<<endl; 

 return 0;
}