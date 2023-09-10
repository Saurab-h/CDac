#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;

    cout<<"Enter the number:"<<endl;
     cin>>num;

// factorial logic
     for(int i=num;i>=1;i--)
     {
       fact=fact*i;
     }

     cout<<"factorial of "<<num<<" is "<<fact<<endl;
 return 0;
}