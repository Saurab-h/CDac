#include<iostream>
using namespace std;
int main()
{   
    int num;

    cout<<"Enter the number:"<<endl;
    cin>>num;

    if(num%5==0 && num%7==0)
    {
        cout<<num<<" can be divide with both 5 and 7."<<endl;
    }
    
   else if(num%5==0) 
   {
    cout<<num<<" can be only divide  with 5."<<endl;
   }

   else if(num%7==0) 
   {
    cout<<num<<" can be only divide with 7."<<endl;
   }


   else
   {
    cout<<num<<" can't be divided with neither 5 or 7."<<endl;
   }


 return 0;
}