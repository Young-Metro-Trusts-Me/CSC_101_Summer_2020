#include <iostream>

using namespace std;

int main()
{
    int x, i, n, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    // i has to start from 0 because formula will make it 1

    for (i = 0; i < n - 1; i = i + 1){      // n-1 because last number has to be printed without +
        x = (i * (i + 1) / 2) + 1;      // Formula for lazy caterer's sequence
        cout << x << "+";

        sum = sum + x;
    }

    x = (i * (i + 1) / 2) + 1;      // calculation for the last number of sequence
    sum = sum + x;          //calculation of sum including last number of sequence

    cout << x << " = " << sum;


    return 0;
}
