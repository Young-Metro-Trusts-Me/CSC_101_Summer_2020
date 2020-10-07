#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter the number: ";
    cin >> x;

    x = x % 10;

    cout << "The last digit of the number is: " << x << endl;

    return 0;

}
