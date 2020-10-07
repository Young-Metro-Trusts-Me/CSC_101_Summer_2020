/******************************************************************************
write a code to find the largest among two integers

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x, mod;

    cout << "Enter an integer: ";
    cin >> x;

    mod = x % 2;

    if(mod == 0){
        cout << x << " is even";
    }
    else{
        cout << x << " is Odd";
    }

    return 0;
}
