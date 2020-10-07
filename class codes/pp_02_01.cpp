#include <iostream>

using namespace std;

int main()
{
// Variable declaration
    float radius, pi, circumference, area, volume;

// geting values from the user or input
    pi = 3.142;
    cout << "Enter the radius of your circle: ";
    cin >> radius;

//manipulation of variables and numbers
   circumference = 2*pi*radius;
   area = pi*radius*radius;
   volume = (4*pi*radius*radius*radius)/3;

// printing results or outputs
    cout << " Circumference = " << circumference << endl;
    cout << " Area = " << area << endl;
    cout << " Volume = " << volume;

    return 0;
}
