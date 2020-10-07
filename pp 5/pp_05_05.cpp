#include <iostream>

using namespace std;

int main()
{
    int x, i, y;    // y is a random variable for conditional

    cout << "Enter a number: ";
    cin >> x;

     y = 1;
    for (i = 2; i < x ; i = i + 1){
        if (x % i == 0){
            cout << "Not a prime number";
            y = 0;      // If the number is divisible(Not a prime) y becomes y = 5
            break;      // Loop breaks after the number is divisible
        }
    }

    if (y != 0){        // The conditional will only be true when y != 5 (The number is prime)
        cout << "Prime number";
    }

    return 0;
}
