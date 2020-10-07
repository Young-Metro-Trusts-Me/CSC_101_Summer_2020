#include <iostream>

using namespace std;

int main()
{
    float x, y, z;

    cout << "Enter the first length: ";
    cin >> x;
    cout << "Enter the second length: ";
    cin >> y;
    cout << "Enter the third length: ";
    cin >> z;


    if (x > y && x > z){
        if (x * x == (y * y + z * z) ){
            cout << "Right triangle";
        }
        else {
            cout << "Not a right triangle";
        }
    }
    else if (y > x && y > z){
        if (y * y == (x * x + z * z) ){
            cout << "Right triangle";
        }
        else {
            cout << "Not a right triangle";
        }
    }
    else if (z > x && z > y){
        if (z * z == (x * x + y * y) ){
            cout << "Right triangle";
        }
        else {
            cout << "Not a right triangle";
        }
    }
    else {
        cout << "Not a right triangle";
    }

    return 0;
}
