#include <iostream>

using namespace std;

int main()
{
    int x, i, sum = 0, n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i < n; i = i +1){
        x = i;

        if(i % 2 == 1){
            cout << x;
        }
        else{
            x = i * (-1);
            cout << x << "+";
        }

        sum = sum + x;
    }

    if(i % 2 == 1){
        x = i;
        cout << x;
    }
    else{
        x = i * (-1);
        cout << x;
    }

    sum = sum + x;

    cout << " = " << sum;

    return 0;
}
