#include <iostream>

using namespace std;

int main()
{
    int x , y;

    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << x << endl;
    cout << y << endl;

    return 0;
}
