#include <iostream>

using namespace std;

int main()
{
    int height, base , area;

    cout << "Enter the height: " ;
    cin >> height;
    cout << "Enter the base: ";
    cin >> base;

    area = 0.5 * height * base;

    cout << "The area of the triangle is: " << area;

    return 0;

}
