#include<iostream>
using namespace std;
int main()
{
    int num,pwr,a=1;

    cout<<"Enter the number:"<<endl;
    cin>>num;

    cout<<"enter the power of number:"<<endl;
    cin>>pwr;

//logic of finding m^n.
    while(pwr>=1)
    {
         a*=num;
         pwr--;
    }

    cout<<a<<endl;
 return 0;
}