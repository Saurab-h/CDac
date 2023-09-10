#include<iostream>
using namespace std;
int main()
{
    int num, num2, rev=0,tnum;

    cout<<"Enter the number:"<<endl;
    cin>>num;

    num2=num;

    while(num2>0)
    {
        tnum=num2%10;
        rev=rev*10+tnum;
        num2=num2/10;
    }

   cout<<"Reverese of Number is "<<rev<<endl;

 return 0;
}