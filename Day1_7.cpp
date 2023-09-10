#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter an alphabet:"<<endl;
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
    {
        cout<<ch<<" is an vowel."<<endl;
    }
    else
    {
        cout<<ch<<" is not an vowel."<<endl;
    }

 return 0;
}