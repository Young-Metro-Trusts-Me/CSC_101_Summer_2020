#include <iostream>

using namespace std;

int main()
{
    int length, width, area, perimeter;

    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;

}
