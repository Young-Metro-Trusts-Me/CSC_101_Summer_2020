/******************************************************************************
write a code to find the largest among two integers

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    
    cout << "Enter first integer: ";
    cin >> x;
    cout << "Enter second integer: ";
    cin >> y;
    
    if(x > y){
        cout << "First number is larger";
    }
    else if(y > x){
        cout << "Second number is larger";
    }
    else{
        cout << "They are equal";
    }
    
    return 0;
}
