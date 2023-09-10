#include<iostream>
using namespace std;
int main()
{
    int BSalary,Tax;

    cout<<"Enter the basic salary:"<<endl;
    cin>>BSalary;

    if(BSalary<150000)
    {
        cout<<"Tax is 0 on "<<BSalary<<" salary."<<endl;
    }

    else if(BSalary==150000 || BSalary<=300000)
    {
        Tax=.20*BSalary;

        cout<<Tax<<" is the Tax on "<<BSalary<<" salary."<<endl;
    }

    else
    {
         Tax=.30*BSalary;

        cout<<Tax<<" is the Tax on "<<BSalary<<" salary."<<endl;
    }

 return 0;
}