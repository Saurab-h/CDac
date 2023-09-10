#include<iostream>
using namespace std;
int main()
{
   int num;

// accepting an number.
    cout<<"Enter the number:"<<endl;
    cin>>num;

// checking if number is even or odd.
    if(num%2==0)
    {
        cout<<num<<" is even."<<endl;
    }
    else
    {
        cout<<num<<" is odd."<<endl;
    }

 return 0;
}