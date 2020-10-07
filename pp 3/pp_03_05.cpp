#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if((x % 3 == 0) && (x % 5 == 0)){
        cout << "Divisible by 3 and 5";
    }
    else{
        cout << "Not divisible by 3 and 5";
    }

    return 0;
}
