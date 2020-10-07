#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter the number: ";
    cin >> x;

    if(x > 0){
        cout << "The number is positive";
    }
    else if(x < 0){
        cout << "The number is negative";
    }
    else{
        cout << "The number is neither positive nor negative";
    }

    return 0;
}
