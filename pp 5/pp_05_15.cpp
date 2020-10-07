#include <iostream>

using namespace std;

int main()
{
    int m, x, i, positive = 0, negative = 0, zero = 0, odd = 0, even = 0;

    cout << "Enter the number of integers to calculate:  ";
    cin >> m;

    for (i = 0; i < m; i = i + 1){
        cout << "Enter an integer ["<< i + 1 << "]: ";
        cin >> x;

        if (x < 0){      //conditionals for determining zero, negative or positive
            negative = negative + 1;
        }
        else if (x == 0){
            zero = zero + 1;
        }
        else {
            positive = positive + 1;
        }

        if (x % 2 == 0){     //conditional for even or odd
            even = even + 1;
        }
        else{
            odd = odd + 1;
        }
    }

   //outputs
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;
    cout << "Odd: " << odd << endl;
    cout << "Even: " << even << endl;

    return 0;
}
