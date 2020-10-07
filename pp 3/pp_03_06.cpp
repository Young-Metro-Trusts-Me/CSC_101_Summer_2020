#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if ( x > 50 && x < 100 ){
        if ( (x % 13 == 0) || (x % 9 == 0) ){
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
