/******************************************************************************
check if a number is divisible by 5 OR 7

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cout << "Enter an integer: ";
    cin >> x;
    
    if ( (x%5 == 0) || (x%7 == 0) ){
        cout << x << " is divisible by 5 or 7";
    }
    else{
        cout << x << " is not divisible by 5 or 7";
    }

    return 0;
}
