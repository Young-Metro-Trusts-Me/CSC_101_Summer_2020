#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a year: ";
    cin >> x;

    if ( (x % 400 == 0)  || (x % 4 == 0 && x % 100 != 0) ){
        cout << "A leap year";
    }
    else {
        cout << "Not a leap year";
    }

    return 0;
}
