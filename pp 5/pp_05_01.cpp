#include <iostream>

using namespace std;

int main()
{
    int x , y, i;

    cout << "Enter an integer: ";
    cin >> x;

    y = 1;
    for (i = 1; i <= x; i = i + 1){
        y = y * i;
    }

    cout << x << "!=" <<  y;

    return 0;
}
