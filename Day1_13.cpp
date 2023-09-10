#include<iostream>
using namespace std;
int main()
{
    int num,num2,tnum,rev=0;

    cout<<"Entere the Number:"<<endl;
    cin>>num;

    num2=num;

// logic to reverse the num
    while(num2>0)
    {
        tnum=num2%10;
        rev=rev*10+tnum;
        num2=num2/10;
    }

// comparing both num and rev to check if the num is palindrome or not.
  if(num==rev)
   cout<<"Number is palindrone."<<endl;

   else 
   cout<<"Number is not palidrone."<<endl;

 return 0;
}