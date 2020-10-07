#include <iostream>

using namespace std;

int main()
{
    int x,y,i,j;

    cout << "Enter number of lines to print: ";
    cin >> x;
    cout << "Enter number of stars to print: ";
    cin >> y;

    for(j = 0; j < x; j = j + 1){
        for(i = 0; i < y ; i = i + 1){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
