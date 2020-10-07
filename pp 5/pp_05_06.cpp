#include <iostream>

using namespace std;

int main()
{
    int x, i, sum = 0;

    cout << "Enter a number: ";
    cin >> x;

    for (i = 1; i < x ; i = i + 1){
        if (x % i == 0){
            sum = sum + i;
        }
    }

    if (sum == x){
        cout << "Perfect number";
    }
    else {
        cout << "Not a perfect number";
    }
    return 0;
}
