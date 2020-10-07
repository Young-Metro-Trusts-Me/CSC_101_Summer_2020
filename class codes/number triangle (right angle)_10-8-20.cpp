#include <iostream>

using namespace std;

int main()
{
    int x , i, j, y ;

    cout << "Enter x: ";
    cin >> x;


    for(j = 0; j <= x; j = j + 1){

        for(i = j; i >= 0; i = i - 1){

            cout << i << " ";

        }

        cout << endl;

    }

    return 0;
}
