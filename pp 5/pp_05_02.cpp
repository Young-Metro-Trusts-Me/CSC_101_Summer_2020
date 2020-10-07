#include <iostream>

using namespace std;

int main()
{
    float x, result = 1;
    int y, i;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;

    for (i = 1; i <= y; i = i + 1){
        result = result * x;
    }

    cout << "Result of x ^ y is: " << result;

    return 0;
}
