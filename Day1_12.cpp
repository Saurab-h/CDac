#include<iostream>
using namespace std;
int main()
{
   int num,sum=0;

    cout<<"Enter the number you want  series to go uo to:"<<endl;
    cin>>num;

// series sum logic
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }

   cout<<"sum of series is "<<sum<<endl;
 return 0;
}