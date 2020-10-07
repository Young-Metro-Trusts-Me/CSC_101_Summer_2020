#include <iostream>

using namespace std;

int main()
{
    int x, y, i, temp;

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;

    if (x > y){
        temp = x;
        x = y;
        y = temp;
    }

    for (i = y; i <= x * y; i = i + 1){
        if ((i % x == 0) && (i % y == 0)){
            cout << "LCM = " << i;
            break;
        }
    }

    return 0;
}
