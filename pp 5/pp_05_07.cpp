#include <iostream>

using namespace std;

int main()
{
    int x, sum = 0, r, y;

    cout << "Enter a number: ";
    cin >> x;
    y = x;      // y is to do calculations inside the loop

    while (y >= 10){
        r = y % 10;
        y = y / 10;
        sum = sum + (r * r * r);
    }

    sum = sum + (y * y * y);

    if (sum == x){      // need to compare the number with x
        cout << "Armstrong number";
    }
    else {
        cout << "Not an Armstrong number";
    }

    return 0;
}
