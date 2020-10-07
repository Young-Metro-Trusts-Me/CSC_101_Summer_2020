#include <iostream>

using namespace std;

int main()
{
    int x, i = 2, f1 = 0, f2 = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> x;


    while(sum <= x){

        i = i + 1;
        sum = f1 + f2;

        if (sum == x){
            cout << i << "th fibonacci number";
            break;
        }

        f1 = f2;
        f2 = sum;
    }

    if (sum != x){
        cout << "Number does not exist in fibonacci series";
    }

    return 0;
}
