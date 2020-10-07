#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, determinant, real_1, comp, real_2 ;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    determinant = (b * b) - (4 * a * c);    //(b^2 - 4ac)

    if (determinant < 0) {
        real_1 = (-b) / (2 * a);      //(-b) / 2a
        comp = sqrt(-determinant) / (2*a);     //-root(b^2 -4ac) / 2a

        cout << "x = " << real_1 << " + " << comp << "i" << endl;
        cout << "x = " << real_1 << " - " << comp << "i" << endl;
    }
    else if (determinant > 0){
        real_1 = ((-b) + sqrt(determinant)) / (2 * a);      //((-b) (+-) root(b^2 - 4ac)) / (2a)
        real_2 = ((-b) - sqrt(determinant)) / (2 * a);

        cout << "x = " << real_1 << endl;
        cout << "x = " << real_2 << endl;
    }
    else {                  // determinant == 0
        real_1 = (-b) / 2 * a;
        real_1 = real_2;

        cout << "x = " << real_1 << endl;
        cout << "x = " << real_2 << endl;
    }

    return 0;
}
