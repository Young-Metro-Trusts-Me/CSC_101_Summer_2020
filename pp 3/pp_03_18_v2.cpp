#include <iostream>

using namespace std;

int main()
{
    float x, y, volume, area, pi = 3.1416;
    int option;

     cout << "1. Area of a circle" << endl;
     cout << "2. Area of a rectangle" << endl;
     cout << "3. Area of a triangle" << endl;
     cout << "4. Volume of a cylinder" << endl;
     cout << "5. Volume of a sphere" << endl;
     cout << "6. Volume of a cube" << endl << endl;

     cout << "Select an option (1-6): ";
     cin >> option;
     cout << endl << endl;

    switch (option){

    case 1:
        cout << "<< Area of a circle >>" << endl << endl;
        cout << "Enter radius: ";
        cin >> x;

        area = pi * x * x;

        cout << "Area of the circle is " << area << "."<< endl;
        break;

    case 2:
        cout << "<< Area of a rectangle >>" << endl << endl;
        cout << "Enter height: ";
        cin >> x;
        cout << "Enter width: ";
        cin >> y;

        area = x * y;

        cout << "Area of the rectangle is " << area << "."<< endl;
        break;
    case 3:
        cout << "<< Area of a triangle >>" << endl << endl;
        cout << "Enter base: ";
        cin >> x;
        cout << "Enter height: ";
        cin >> y;

        area = 0.5 * x * y;

        cout << "Area of the triangle is " << area << "."<< endl;
        break;
    case 4:
        cout << "<< Volume of a cylinder >>" << endl << endl;
        cout << "Enter radius: ";
        cin >> x;
        cout << "Enter height: ";
        cin >> y;

        volume = pi * x * x * y;

        cout << "Volume of the cylinder is " << volume << "."<< endl;
        break;
    case 5:
        cout << "<< Volume of a sphere >>" << endl << endl;
        cout << "Enter radius: ";
        cin >> x;

        volume = (4.0 / 3) * pi * x * x * x;

        cout << "Volume of the sphere is " << volume << "."<< endl;
        break;
    case 6:
        cout << "<< Volume of a cube >>" << endl << endl;
        cout << "Enter length: ";
        cin >> x;

        volume = x * x * x;

        cout << "Volume of a cube is " << volume << "." << endl;
        break;

    default:
        cout << "OOPS! Run the program and enter a number within 1-6 to try again :) "<< endl;
    }

    return 0;
}
