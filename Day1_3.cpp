#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the first number:" << endl;
    cin >> a;

    cout << "Enter the second number:" << endl;
    cin >> b;

// output before the swap.
    cout << "-----before swaping----" << endl;
    cout << a << " " << b << endl;

    // swaping logic
    a = a + b;
    b = a - b;
    a = a - b;

// output after swap.
    cout << "------after swaping-----" << endl;
    cout << a << " " << b << endl;

    return 0;
}