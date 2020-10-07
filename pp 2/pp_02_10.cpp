#include <iostream>

using namespace std;

int main()
{
    int in_num, x, y, z, rev_num;

    cout << "Enter a 3 digit number: ";
    cin >> in_num;

    x = in_num % 10;
    y = (in_num % 100) / 10;
    z = in_num / 100;
    rev_num = (x * 100) + (y * 10) + z;

    cout << "The reversed number is: " << rev_num << endl;

    return 0;
}
