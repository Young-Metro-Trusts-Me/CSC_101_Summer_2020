#include <iostream>

using namespace std;

int main()
{
    char x;

    cout << "Enter a upper case or a lower case letter, digit, symbol: ";
    cin >> x;

    x = int(x);

    if ( x >= 48 && x <= 57){
        cout << "Digit";
    }
    else if ( x >= 65 && x <= 90){
        cout << "Upper case";
    }
    else if ( x >= 97 && x <= 122){
        cout << "Lower case";
    }
    else {
        cout << "Symbol";
    }

    return 0;
}
