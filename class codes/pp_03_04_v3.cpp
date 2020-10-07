/******************************************************************************
Write a program in C++ that checks if a number is divisible by 5 and 7, 
or just 5 or 7 or neither. 

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cout << "Enter an integer: ";
    cin >> x;
    
    if (x%5 == 0){
        if(x%7 == 0){
           cout << x << " is divisible by 5 and 7"; 
        }
        else{
            cout << x << " is divisible by 5 not by 7";
        }
    }
    else{
        if(x%7 == 0){
            cout << x << " is divisible by 7 not by 5";
        }
        else{
            cout << x << "Not divisible by 5 or 7";
        }
    }
   
    return 0;
}
