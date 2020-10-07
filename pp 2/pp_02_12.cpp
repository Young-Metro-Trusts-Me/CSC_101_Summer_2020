#include <iostream>

using namespace std;

int main()
{
    float x;
    int int_x;

    cout << "Enter the number: ";
    cin >> x;

    int_x = int(x);
    x = x - int_x;

    cout << "The integer part of the number is: " << int_x << endl;
    cout << "The decimal part of the number is: " << x << endl;

    return 0;

}
