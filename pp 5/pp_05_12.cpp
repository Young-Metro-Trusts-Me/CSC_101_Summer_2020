//fix for x = 1,2

#include <iostream>

using namespace std;

int main()
{
    int x, i, f_1 = 0, f_2 = 1, sum;

    cout << "Enter number of fibonacci to print: ";
    cin >> x;

    cout << f_1 << "," << f_2 << ",";

    for (i = 3; i < x ; i = i + 1){

        sum = f_1 + f_2;

        cout << sum << ",";

        f_1 = f_2;
        f_2 = sum;

    }

    sum = f_1 + f_2;

    cout << sum;

    return 0;
}
