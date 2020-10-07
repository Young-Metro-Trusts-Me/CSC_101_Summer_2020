#include <iostream>

using namespace std;

int main()

{

    float radius, area, circumference, pi;

    pi = 3.1416;

    cout << "Enter the radius: ";
    cin >> radius;

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout << "The area is: " << area << endl;
    cout << "The circumference is: " << circumference << endl;

    return 0;

}
