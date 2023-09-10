#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;

    cout<<"Enter the first angle of triangle:"<<endl;
    cin>>a1;

    cout<<"Enter the second angle of triangle:"<<endl;
    cin>>a2;

    cout<<"Enter the third angle of triangle:"<<endl;
    cin>>a3;

// logic to check if triangle is valid or not.
    if ((a1+a2+a3)==180)
    {
        cout<<"Triangle is a valid triangle."<<endl;
    }
    else
    {
        cout<<"Triangle is not a valid traingle."<<endl;
    }

     return 0;
}