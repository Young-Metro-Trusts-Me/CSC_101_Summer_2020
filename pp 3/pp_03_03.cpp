#include <iostream>

using namespace std;

int main()
{
    float x, decimal;

    cout << "Enter the number: ";
    cin >> x;

    decimal = x - int(x);

    if(decimal == 0){
        cout << "Integer";
    }
    else{
        cout << "Floating point number";
    }

    return 0;
}
