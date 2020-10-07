#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if((x % 5 == 0) || (x % 7 == 0)){
        cout << "Divisible by 5 or 7";
    }
    else{
        cout << "Not divisible by 5 or 7";
    }

    return 0;
}
