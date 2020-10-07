#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if ( (x >= 35 ) && (x < 75) ){
        if ( (x % 5 == 0) && (x % 2 != 0) ){
            cout << "Yes";
        }
        else {
            cout << "No";
        }
    }
    else {
        cout << "No";
    }

    return 0;
}
